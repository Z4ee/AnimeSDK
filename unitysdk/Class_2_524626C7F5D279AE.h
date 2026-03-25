#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF2B522AC5DB4E39.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"

namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_524626C7F5D279AE_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x1160DBF0)
#define CLASS_2_524626C7F5D279AE_METHOD_2_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x1160DEA0)
#define CLASS_2_524626C7F5D279AE_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1160EAB0)
#define CLASS_2_524626C7F5D279AE_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1160EA50)
#define CLASS_2_524626C7F5D279AE_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x1160DE30)
#define CLASS_2_524626C7F5D279AE_METHOD_2_5C672365A5A83DD9_OFFSET UNITYSDK_OFFSET(0x1160E3B0)
#define CLASS_2_524626C7F5D279AE_METHOD_2_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0x1160DB40)
#define CLASS_2_524626C7F5D279AE_METHOD_2_7E48248864637ED6_OFFSET UNITYSDK_OFFSET(0x1160E890)
#define CLASS_2_524626C7F5D279AE_METHOD_2_894AD2D322530989_OFFSET UNITYSDK_OFFSET(0x1160E0A0)
#define CLASS_2_524626C7F5D279AE_METHOD_2_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x1160DD20)
#define CLASS_2_524626C7F5D279AE_METHOD_2_A8D49717FC0DEBE5_OFFSET UNITYSDK_OFFSET(0x1160EB10)
#define CLASS_2_524626C7F5D279AE_METHOD_2_DF606F1BC273FE84_1_OFFSET UNITYSDK_OFFSET(0x1160E5E0)
#define CLASS_2_524626C7F5D279AE_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x1160E4C0)
#define CLASS_2_524626C7F5D279AE_METHOD_2_F63FF12CC0583059_OFFSET UNITYSDK_OFFSET(0x1160E760)
#define CLASS_2_524626C7F5D279AE_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x1160E470)
#define CLASS_2_524626C7F5D279AE_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x1160E420)
#define CLASS_2_524626C7F5D279AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1160E990)

inline static constexpr unsigned int Class_2_524626C7F5D279AE_TypeDefinitionIndex = 48347;

class Class_2_524626C7F5D279AE : public ::Class_1_BF2B522AC5DB4E39
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x20
	::System::Boolean Field_2_0; // 0x28
	::System::Boolean Field_2_1; // 0x29
	::RPG::GameCore::EntityTypeMask Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7A150941533E8F96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_7A150941533E8F96_OFFSET))(this);
	}

	::System::Void Method_2_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Void Method_2_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Void Method_2_894AD2D322530989(::RPG::GameCore::PreloadGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_894AD2D322530989_OFFSET))(this, a1);
	}

	::System::Void Method_2_5C672365A5A83DD9(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_5C672365A5A83DD9_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_DF606F1BC273FE84_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F63FF12CC0583059(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_F63FF12CC0583059_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E48248864637ED6(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_7E48248864637ED6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_A8D49717FC0DEBE5(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + CLASS_2_524626C7F5D279AE_METHOD_2_A8D49717FC0DEBE5_OFFSET))(this, P0);
	}
};
