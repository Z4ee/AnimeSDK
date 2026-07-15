#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_WOBBLEPASTER_START_OFFSET UNITYSDK_OFFSET(0x174187E0)
#define RPG_CLIENT_WOBBLEPASTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17418CC0)
#define RPG_CLIENT_WOBBLEPASTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17419EF0)
#define RPG_CLIENT_WOBBLEPASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17419E90)

namespace RPG::Client
{
	inline static constexpr unsigned int WobblePaster_TypeDefinitionIndex = 67128;

	class WobblePaster : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xE980);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xE984);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xE988);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xE98C);
		}
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xE990);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xE994);
		}
		static ::System::Int32* StaticGet_Field_5_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xE998);
		}
		static ::System::Int32* StaticGet_Field_5_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xE99C);
		}
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0xE9A0);
		}
		::UnityEngine::GameObject* ReferenceObject1; // 0x18
		::UnityEngine::GameObject* ReferenceObject2; // 0x20
		::UnityEngine::GameObject* ReferenceObject3; // 0x28
		::UnityEngine::Renderer* Rend; // 0x30
		::System::Single MaxWobble; // 0x38
		::System::Single WobbleSpeed; // 0x3C
		::System::Single Recovery; // 0x40
		::UnityEngine::Vector3 Field_5_16; // 0x44
		::UnityEngine::Vector3 Field_5_17; // 0x50
		::UnityEngine::Vector3 Field_5_18; // 0x5C
		::UnityEngine::Vector3 Field_5_19; // 0x68
		::System::Single Field_5_20; // 0x74
		::System::Single Field_5_21; // 0x78
		::System::Single Field_5_22; // 0x7C
		::System::Single Field_5_23; // 0x80
		::UnityEngine::Vector3 Field_5_24; // 0x84
		::UnityEngine::Vector3 Field_5_25; // 0x90
		::UnityEngine::Vector3 Field_5_26; // 0x9C
		::UnityEngine::Vector3 Field_5_27; // 0xA8
		::System::Single Field_5_28; // 0xB4
		::System::Single Field_5_29; // 0xB8
		::System::Single Field_5_30; // 0xBC
		::System::Single Field_5_31; // 0xC0
		::UnityEngine::Vector3 Field_5_32; // 0xC4
		::UnityEngine::Vector3 Field_5_33; // 0xD0
		::UnityEngine::Vector3 Field_5_34; // 0xDC
		::UnityEngine::Vector3 Field_5_35; // 0xE8
		::System::Single Field_5_36; // 0xF4
		::System::Single Field_5_37; // 0xF8
		::System::Single Field_5_38; // 0xFC
		::System::Single Field_5_39; // 0x100
		::System::Single Field_5_40; // 0x104
		::System::Single Field_5_41; // 0x108
		::UnityEngine::MaterialPropertyBlock* Field_5_42; // 0x110

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
