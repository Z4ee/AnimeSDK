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

#define CLASS_2_6D453965E755326A_METHOD_2_019FAF8DF887E9D8_OFFSET UNITYSDK_OFFSET(0xDAA4180)
#define CLASS_2_6D453965E755326A_METHOD_2_0D986BFF36DB0C12_OFFSET UNITYSDK_OFFSET(0xDAA5300)
#define CLASS_2_6D453965E755326A_METHOD_2_4D305933A26B2E9B_OFFSET UNITYSDK_OFFSET(0xDAA4270)
#define CLASS_2_6D453965E755326A_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0xDAA47B0)
#define CLASS_2_6D453965E755326A_METHOD_2_6F423F91F5A50C98_OFFSET UNITYSDK_OFFSET(0xDAA4980)
#define CLASS_2_6D453965E755326A_METHOD_2_7C3615F83B7FC64E_OFFSET UNITYSDK_OFFSET(0xDAA4D20)
#define CLASS_2_6D453965E755326A_METHOD_2_7D008406A3311600_OFFSET UNITYSDK_OFFSET(0xDAA4820)
#define CLASS_2_6D453965E755326A_METHOD_2_B977FAFC3F3CD584_OFFSET UNITYSDK_OFFSET(0xDAA4610)
#define CLASS_2_6D453965E755326A_METHOD_2_CAFB80BBA3517CB7_OFFSET UNITYSDK_OFFSET(0xDAA4690)
#define CLASS_2_6D453965E755326A_METHOD_2_CF46F778F06D437A_OFFSET UNITYSDK_OFFSET(0xDAA44E0)
#define CLASS_2_6D453965E755326A_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0xDAA5000)
#define CLASS_2_6D453965E755326A_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xDAA4E90)
#define CLASS_2_6D453965E755326A_METHOD_2_E669C1B9387BC7CA_OFFSET UNITYSDK_OFFSET(0xDAA4750)
#define CLASS_2_6D453965E755326A_METHOD_2_F773FEA63B215071_OFFSET UNITYSDK_OFFSET(0xDAA51C0)
#define CLASS_2_6D453965E755326A_METHOD_2_FF0BED909298199C_OFFSET UNITYSDK_OFFSET(0xDAA43B0)
#define CLASS_2_6D453965E755326A_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xDAA4E30)
#define CLASS_2_6D453965E755326A_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xDAA4DD0)
#define CLASS_2_6D453965E755326A__CTOR_OFFSET UNITYSDK_OFFSET(0xDAA5400)

inline static constexpr unsigned int Class_2_6D453965E755326A_TypeDefinitionIndex = 59860;

class Class_2_6D453965E755326A : public ::Class_1_BF2B522AC5DB4E39
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* GABGMLADLCI; // 0x20
	::RPG::GameCore::EntityTypeMask PPBJNNOMCHA; // 0x28
	::System::UInt32 DCMOJFEJNBO; // 0x30
	::System::Boolean AINFEIKOOAA; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_019FAF8DF887E9D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_019FAF8DF887E9D8_OFFSET))(this);
	}

	::System::Void Method_2_FF0BED909298199C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_FF0BED909298199C_OFFSET))(this);
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

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Void Method_2_7D008406A3311600()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_7D008406A3311600_OFFSET))(this);
	}

	::System::Void Method_2_6F423F91F5A50C98(::RPG::GameCore::PreloadGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_6F423F91F5A50C98_OFFSET))(this, a1);
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

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6D453965E755326A_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
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
};
