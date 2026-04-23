#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF2B522AC5DB4E39.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"

namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_6D453965E755326A_METHOD_2_0D986BFF36DB0C12_OFFSET UNITYSDK_OFFSET(0x90DD5A0)
#define CLASS_2_6D453965E755326A_METHOD_2_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x90DCAD0)
#define CLASS_2_6D453965E755326A_METHOD_2_4D305933A26B2E9B_OFFSET UNITYSDK_OFFSET(0x90DC4F0)
#define CLASS_2_6D453965E755326A_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x90DD7C0)
#define CLASS_2_6D453965E755326A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x90DD760)
#define CLASS_2_6D453965E755326A_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x90DCA40)
#define CLASS_2_6D453965E755326A_METHOD_2_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0x90DC440)
#define CLASS_2_6D453965E755326A_METHOD_2_7C3615F83B7FC64E_OFFSET UNITYSDK_OFFSET(0x90DD040)
#define CLASS_2_6D453965E755326A_METHOD_2_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x90DC660)
#define CLASS_2_6D453965E755326A_METHOD_2_A8D49717FC0DEBE5_OFFSET UNITYSDK_OFFSET(0x90DD820)
#define CLASS_2_6D453965E755326A_METHOD_2_B977FAFC3F3CD584_OFFSET UNITYSDK_OFFSET(0x90DC8A0)
#define CLASS_2_6D453965E755326A_METHOD_2_CAFB80BBA3517CB7_OFFSET UNITYSDK_OFFSET(0x90DC920)
#define CLASS_2_6D453965E755326A_METHOD_2_CF46F778F06D437A_OFFSET UNITYSDK_OFFSET(0x90DC770)
#define CLASS_2_6D453965E755326A_METHOD_2_D5DC2583559A4EFC_OFFSET UNITYSDK_OFFSET(0x90DCCD0)
#define CLASS_2_6D453965E755326A_METHOD_2_DF606F1BC273FE84_1_OFFSET UNITYSDK_OFFSET(0x90DD2E0)
#define CLASS_2_6D453965E755326A_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x90DD1B0)
#define CLASS_2_6D453965E755326A_METHOD_2_E669C1B9387BC7CA_OFFSET UNITYSDK_OFFSET(0x90DC9E0)
#define CLASS_2_6D453965E755326A_METHOD_2_F773FEA63B215071_OFFSET UNITYSDK_OFFSET(0x90DD460)
#define CLASS_2_6D453965E755326A_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x90DD150)
#define CLASS_2_6D453965E755326A_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x90DD0F0)
#define CLASS_2_6D453965E755326A__CTOR_OFFSET UNITYSDK_OFFSET(0x90DD6A0)

inline static constexpr unsigned int Class_2_6D453965E755326A_TypeDefinitionIndex = 55095;

class Class_2_6D453965E755326A : public ::Class_1_BF2B522AC5DB4E39
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x20
	::System::Boolean Field_2_0; // 0x28
	::System::UInt32 Field_2_1; // 0x2C
	::RPG::GameCore::EntityTypeMask Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7A150941533E8F96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_7A150941533E8F96_OFFSET))(this);
	}

	::System::Void Method_2_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_2_CF46F778F06D437A(::RPG::GameCore::EntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_CF46F778F06D437A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CAFB80BBA3517CB7(::RPG::GameCore::EntityTypeMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_CAFB80BBA3517CB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_E669C1B9387BC7CA(::RPG::GameCore::PreloadGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_E669C1B9387BC7CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D305933A26B2E9B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_4D305933A26B2E9B_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_2_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Void Method_2_D5DC2583559A4EFC(::RPG::GameCore::PreloadGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_D5DC2583559A4EFC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C3615F83B7FC64E(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_7C3615F83B7FC64E_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_DF606F1BC273FE84_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F773FEA63B215071(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_F773FEA63B215071_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D986BFF36DB0C12(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_0D986BFF36DB0C12_OFFSET))(this, a1, a2);
	}

	static ::System::UInt32 Method_2_B977FAFC3F3CD584(::RPG::GameCore::EntityTypeMask a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_B977FAFC3F3CD584_OFFSET))(a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_A8D49717FC0DEBE5(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_A8D49717FC0DEBE5_OFFSET))(this, P0);
	}
};
