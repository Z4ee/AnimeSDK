#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/CompatKey.h"
#include "unitysdk/RPG/Client/RegionVisualStateReason.h"
#include "unitysdk/RPG/Client/RegionVisualStateRefCntReason.h"
#include "unitysdk/RPG/Client/RegionVisualStateV2Mode.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/Struct_2_960171EC79068492.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_616F89B5F43D1E61;
namespace RPG::GameCore { class StageRegionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_DEBUGUPDATE_OFFSET UNITYSDK_OFFSET(0x14522170)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_AUTHORITYAGGREGATEDSTATEV2_OFFSET UNITYSDK_OFFSET(0x14521FC0)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_AUTHORITYCOMPATKEY_OFFSET UNITYSDK_OFFSET(0x14522000)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_AUTHORITYLEGACYVISUALSTATE_OFFSET UNITYSDK_OFFSET(0x14522010)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_AUTHORITYPRIORITY_OFFSET UNITYSDK_OFFSET(0x14522030)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_CURRREGIONSTATEID_OFFSET UNITYSDK_OFFSET(0x14522050)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_INVISIBLESOURCE_OFFSET UNITYSDK_OFFSET(0x14521ED0)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_LEGACYMIRRORPRIORITY_OFFSET UNITYSDK_OFFSET(0x14522040)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_LEGACYMIRRORVISUALSTATE_OFFSET UNITYSDK_OFFSET(0x14522020)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_SOURCEDIST_OFFSET UNITYSDK_OFFSET(0x14521E70)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_VISUALSTATEV2MODE_OFFSET UNITYSDK_OFFSET(0x14521F90)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_VISUALSTATE_OFFSET UNITYSDK_OFFSET(0x14521F30)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_INIT_OFFSET UNITYSDK_OFFSET(0x14522110)
#define CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC__CTOR_OFFSET UNITYSDK_OFFSET(0x145223D0)

inline static constexpr unsigned int Class_1_616F89B5F43D1E61_Class_5_CE608A1B1B2022FC_TypeDefinitionIndex = 58132;

class Class_1_616F89B5F43D1E61_Class_5_CE608A1B1B2022FC : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::RegionVisualStateReason, ::System::Collections::Generic::Dictionary_2<::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionVisualState>*>* VisualStateReason; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::RegionVisualStateRefCntReason, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority>*>*>* VisualStateRefCntReason; // 0x20
	::RPG::GameCore::StageRegionConfig* Config; // 0x28
	::Class_1_616F89B5F43D1E61* Field_5_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SourceDist()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_SOURCEDIST_OFFSET))(this);
	}

	::System::Boolean get_InVisibleSource()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_INVISIBLESOURCE_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState get_VisualState()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_VISUALSTATE_OFFSET))(this);
	}

	::RPG::Client::RegionVisualStateV2Mode get_VisualStateV2Mode()
	{
		return ((::RPG::Client::RegionVisualStateV2Mode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_VISUALSTATEV2MODE_OFFSET))(this);
	}

	::Struct_2_960171EC79068492 get_AuthorityAggregatedStateV2()
	{
		return ((::Struct_2_960171EC79068492(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_AUTHORITYAGGREGATEDSTATEV2_OFFSET))(this);
	}

	::RPG::Client::CompatKey get_AuthorityCompatKey()
	{
		return ((::RPG::Client::CompatKey(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_AUTHORITYCOMPATKEY_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState get_AuthorityLegacyVisualState()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_AUTHORITYLEGACYVISUALSTATE_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState get_LegacyMirrorVisualState()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_LEGACYMIRRORVISUALSTATE_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority get_AuthorityPriority()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_AUTHORITYPRIORITY_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority get_LegacyMirrorPriority()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_LEGACYMIRRORPRIORITY_OFFSET))(this);
	}

	::System::String* get_CurrRegionStateID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_GET_CURRREGIONSTATEID_OFFSET))(this);
	}

	::System::Void Init(::Class_1_616F89B5F43D1E61* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_INIT_OFFSET))(this, a1);
	}

	::System::Void DebugUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_CLASS_5_CE608A1B1B2022FC_DEBUGUPDATE_OFFSET))(this);
	}
};
