#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_WOBBLEPASTER_START_OFFSET UNITYSDK_OFFSET(0xB4C95D0)
#define RPG_CLIENT_WOBBLEPASTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB4C9AB0)
#define RPG_CLIENT_WOBBLEPASTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4CACE0)
#define RPG_CLIENT_WOBBLEPASTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB4CAC80)

namespace RPG::Client
{
	inline static constexpr unsigned int WobblePaster_TypeDefinitionIndex = 64785;

	class WobblePaster : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_40()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xD5C0);
		}
		static ::System::Int32* StaticGet_Field_5_42()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xD5C4);
		}
		static ::System::Int32* StaticGet_Field_5_37()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xD5C8);
		}
		static ::System::Int32* StaticGet_Field_5_35()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xD5CC);
		}
		static ::System::Int32* StaticGet_Field_5_36()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xD5D0);
		}
		static ::System::Int32* StaticGet_Field_5_38()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xD5D4);
		}
		static ::System::Int32* StaticGet_Field_5_41()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xD5D8);
		}
		static ::System::Int32* StaticGet_Field_5_34()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xD5DC);
		}
		static ::System::Int32* StaticGet_Field_5_39()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xD5E0);
		}
		::UnityEngine::GameObject* ReferenceObject1; // 0x18
		::UnityEngine::GameObject* ReferenceObject2; // 0x20
		::UnityEngine::GameObject* ReferenceObject3; // 0x28
		::UnityEngine::Renderer* Rend; // 0x30
		::System::Single MaxWobble; // 0x38
		::System::Single WobbleSpeed; // 0x3C
		::System::Single Recovery; // 0x40
		::UnityEngine::Vector3 Field_5_7; // 0x44
		::UnityEngine::Vector3 Field_5_8; // 0x50
		::UnityEngine::Vector3 Field_5_9; // 0x5C
		::UnityEngine::Vector3 Field_5_10; // 0x68
		::System::Single Field_5_11; // 0x74
		::System::Single Field_5_12; // 0x78
		::System::Single Field_5_13; // 0x7C
		::System::Single Field_5_14; // 0x80
		::UnityEngine::Vector3 Field_5_15; // 0x84
		::UnityEngine::Vector3 Field_5_16; // 0x90
		::UnityEngine::Vector3 Field_5_17; // 0x9C
		::UnityEngine::Vector3 Field_5_18; // 0xA8
		::System::Single Field_5_19; // 0xB4
		::System::Single Field_5_20; // 0xB8
		::System::Single Field_5_21; // 0xBC
		::System::Single Field_5_22; // 0xC0
		::UnityEngine::Vector3 Field_5_23; // 0xC4
		::UnityEngine::Vector3 Field_5_24; // 0xD0
		::UnityEngine::Vector3 Field_5_25; // 0xDC
		::UnityEngine::Vector3 Field_5_26; // 0xE8
		::System::Single Field_5_27; // 0xF4
		::System::Single Field_5_28; // 0xF8
		::System::Single Field_5_29; // 0xFC
		::System::Single Field_5_30; // 0x100
		::System::Single Field_5_31; // 0x104
		::System::Single Field_5_32; // 0x108
		::UnityEngine::MaterialPropertyBlock* Field_5_33; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOBBLEPASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WOBBLEPASTER__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOBBLEPASTER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOBBLEPASTER_UPDATE_OFFSET))(this);
		}
	};
}
