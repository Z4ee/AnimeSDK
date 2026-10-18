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

#define CLASS_2_A9706286F82822E7_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0xDA28320)
#define CLASS_2_A9706286F82822E7_METHOD_2_17BF726D4FE1D1CA_OFFSET UNITYSDK_OFFSET(0xDA286C0)
#define CLASS_2_A9706286F82822E7_METHOD_2_276AA2E93D6E5D58_OFFSET UNITYSDK_OFFSET(0xDA29330)
#define CLASS_2_A9706286F82822E7_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0xDA287E0)
#define CLASS_2_A9706286F82822E7_METHOD_2_6F423F91F5A50C98_OFFSET UNITYSDK_OFFSET(0xDA289B0)
#define CLASS_2_A9706286F82822E7_METHOD_2_7878A201C1C7CE63_OFFSET UNITYSDK_OFFSET(0xDA291F0)
#define CLASS_2_A9706286F82822E7_METHOD_2_7D008406A3311600_OFFSET UNITYSDK_OFFSET(0xDA28850)
#define CLASS_2_A9706286F82822E7_METHOD_2_B977FAFC3F3CD584_OFFSET UNITYSDK_OFFSET(0xDA28640)
#define CLASS_2_A9706286F82822E7_METHOD_2_C596A8C3DFB6F26B_OFFSET UNITYSDK_OFFSET(0xDA28D50)
#define CLASS_2_A9706286F82822E7_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0xDA29030)
#define CLASS_2_A9706286F82822E7_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xDA28EC0)
#define CLASS_2_A9706286F82822E7_METHOD_2_E669C1B9387BC7CA_OFFSET UNITYSDK_OFFSET(0xDA28780)
#define CLASS_2_A9706286F82822E7_METHOD_2_E6A4DE0F82861331_OFFSET UNITYSDK_OFFSET(0xDA28510)
#define CLASS_2_A9706286F82822E7_METHOD_2_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0xDA28230)
#define CLASS_2_A9706286F82822E7_METHOD_2_FF0BED909298199C_OFFSET UNITYSDK_OFFSET(0xDA283D0)
#define CLASS_2_A9706286F82822E7_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xDA28E60)
#define CLASS_2_A9706286F82822E7_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xDA28E00)
#define CLASS_2_A9706286F82822E7__CTOR_OFFSET UNITYSDK_OFFSET(0xDA29430)

inline static constexpr unsigned int Class_2_A9706286F82822E7_TypeDefinitionIndex = 59715;

class Class_2_A9706286F82822E7 : public ::Class_1_BF2B522AC5DB4E39
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* GABGMLADLCI; // 0x20
	::System::UInt32 DCMOJFEJNBO; // 0x28
	::System::Boolean AINFEIKOOAA; // 0x2C
	::RPG::GameCore::EntityTypeMask PPBJNNOMCHA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_EBAC71FBE1837205_OFFSET))(this);
	}

	::System::Void Method_2_FF0BED909298199C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_FF0BED909298199C_OFFSET))(this);
	}

	::System::Void Method_2_E6A4DE0F82861331(::RPG::GameCore::EntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_E6A4DE0F82861331_OFFSET))(this, a1);
	}

	::System::Void Method_2_17BF726D4FE1D1CA(::RPG::GameCore::EntityTypeMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_17BF726D4FE1D1CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E669C1B9387BC7CA(::RPG::GameCore::PreloadGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_E669C1B9387BC7CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Void Method_2_7D008406A3311600()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_7D008406A3311600_OFFSET))(this);
	}

	::System::Void Method_2_6F423F91F5A50C98(::RPG::GameCore::PreloadGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_6F423F91F5A50C98_OFFSET))(this, a1);
	}

	::System::Void Method_2_C596A8C3DFB6F26B(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_C596A8C3DFB6F26B_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7878A201C1C7CE63(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_7878A201C1C7CE63_OFFSET))(this, a1);
	}

	::System::Void Method_2_276AA2E93D6E5D58(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_276AA2E93D6E5D58_OFFSET))(this, a1, a2);
	}

	static ::System::UInt32 Method_2_B977FAFC3F3CD584(::RPG::GameCore::EntityTypeMask a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + CLASS_2_A9706286F82822E7_METHOD_2_B977FAFC3F3CD584_OFFSET))(a1);
	}
};
