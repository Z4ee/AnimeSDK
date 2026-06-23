#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/RabGame/RabUltiStartupVFXController_Struct_2_221FC58F116D19D8.h"
#include "unitysdk/MoleMole/MiniGame/RabGame/RabUltiStartupVFXController_Struct_2_A6FB625596F1BDCD.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ADDCASTER_OFFSET UNITYSDK_OFFSET(0x17E886D0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17E881D0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x17E8B830)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0x17E89BA0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0x17E88CE0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x17E895C0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x17E89750)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x17E8A220)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17E8AD60)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ONEXIT_OFFSET UNITYSDK_OFFSET(0x17E8ADB0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_REMOVECASTER_OFFSET UNITYSDK_OFFSET(0x17E88DB0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17E896F0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E8B7A0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8B5C0)

namespace MoleMole::MiniGame::RabGame
{
	inline static constexpr unsigned int RabUltiStartupVFXController_TypeDefinitionIndex = 54050;

	class RabUltiStartupVFXController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RabUltiStartupVFXController_TypeDefinitionIndex)->GetStaticField(0x10A70);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RabUltiStartupVFXController_TypeDefinitionIndex)->GetStaticField(0x10A74);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RabUltiStartupVFXController_TypeDefinitionIndex)->GetStaticField(0x10A78);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RabUltiStartupVFXController_TypeDefinitionIndex)->GetStaticField(0x10A7C);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RabUltiStartupVFXController_TypeDefinitionIndex)->GetStaticField(0x10A80);
		}
		// static const ::System::Int32 Field_5_0 = 0x10; // 0x0
		::System::Boolean Field_5_6; // 0x18
		::UnityEngine::AnimationCurve* Field_5_7; // 0x20
		::UnityEngine::AnimationCurve* Field_5_8; // 0x28
		::System::Single Field_5_9; // 0x30
		::System::Single Field_5_10; // 0x34
		::System::Single Field_5_11; // 0x38
		::System::Single Field_5_12; // 0x3C
		::System::Single Field_5_13; // 0x40
		::System::String* Field_5_14; // 0x48
		::System::String* Field_5_15; // 0x50
		::System::String* Field_5_16; // 0x58
		::System::String* Field_5_17; // 0x60
		::MoleMole::Battle::Entity* Field_5_18; // 0x68
		::System::UInt32 Field_5_19; // 0x70
		::Il2CppArray<::UnityEngine::Renderer*>* Field_5_20; // 0x78
		::UnityEngine::MaterialPropertyBlock* Field_5_21; // 0x80
		::UnityEngine::Camera* Field_5_22; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MiniGame::RabGame::RabUltiStartupVFXController_Struct_2_A6FB625596F1BDCD>* Field_5_23; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MiniGame::RabGame::RabUltiStartupVFXController_Struct_2_221FC58F116D19D8>* Field_5_24; // 0x98
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_25; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_INITIALIZE_OFFSET))(this);
		}

		::System::Void AddCaster(::MoleMole::Battle::Entity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ADDCASTER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveCaster(::MoleMole::Battle::Entity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_REMOVECASTER_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ONEXIT_OFFSET))(this);
		}

		::System::Void Method_5_B917C58B4E14AC1B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_B917C58B4E14AC1B_OFFSET))(this);
		}

		::System::Void Method_5_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_5_07280B24DFAC0CA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_07280B24DFAC0CA9_OFFSET))(this);
		}

		::System::Void Method_5_E876C8B6D3B840A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_E876C8B6D3B840A6_OFFSET))(this);
		}

		::System::Void Method_5_E7EF6BC52B28648C_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_E7EF6BC52B28648C_1_OFFSET))(this);
		}

		::System::Void Method_5_EAD10B3E55E2C4C5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_METHOD_5_EAD10B3E55E2C4C5_OFFSET))(this);
		}
	};
}
