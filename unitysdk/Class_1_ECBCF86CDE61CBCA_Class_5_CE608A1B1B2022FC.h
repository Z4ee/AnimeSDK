#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/RegionVisualStateReason.h"
#include "unitysdk/RPG/Client/RegionVisualStateRefCntReason.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_ECBCF86CDE61CBCA;
namespace RPG::GameCore { class StageRegionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_DEBUGUPDATE_OFFSET UNITYSDK_OFFSET(0x118C4040)
#define CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_GET_CURRREGIONSTATEID_OFFSET UNITYSDK_OFFSET(0x118C3F30)
#define CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_GET_INVISIBLESOURCE_OFFSET UNITYSDK_OFFSET(0x118C3E70)
#define CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_GET_SOURCEDIST_OFFSET UNITYSDK_OFFSET(0x118C3E10)
#define CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_GET_VISUALSTATE_OFFSET UNITYSDK_OFFSET(0x118C3ED0)
#define CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_INIT_OFFSET UNITYSDK_OFFSET(0x118C3FE0)
#define CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC__CTOR_OFFSET UNITYSDK_OFFSET(0x118C4300)

inline static constexpr unsigned int Class_1_ECBCF86CDE61CBCA_Class_5_CE608A1B1B2022FC_TypeDefinitionIndex = 57343;

class Class_1_ECBCF86CDE61CBCA_Class_5_CE608A1B1B2022FC : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::RegionVisualStateReason, ::System::Collections::Generic::Dictionary_2<::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionVisualState>*>* VisualStateReason; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::RegionVisualStateRefCntReason, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority>*>*>* VisualStateRefCntReason; // 0x20
	::RPG::GameCore::StageRegionConfig* Config; // 0x28
	::Class_1_ECBCF86CDE61CBCA* Field_5_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SourceDist()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_GET_SOURCEDIST_OFFSET))(this);
	}

	::System::Boolean get_InVisibleSource()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_GET_INVISIBLESOURCE_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState get_VisualState()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_GET_VISUALSTATE_OFFSET))(this);
	}

	::System::String* get_CurrRegionStateID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_GET_CURRREGIONSTATEID_OFFSET))(this);
	}

	::System::Void Init(::Class_1_ECBCF86CDE61CBCA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_INIT_OFFSET))(this, a1);
	}

	::System::Void DebugUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECBCF86CDE61CBCA_CLASS_5_CE608A1B1B2022FC_DEBUGUPDATE_OFFSET))(this);
	}
};
