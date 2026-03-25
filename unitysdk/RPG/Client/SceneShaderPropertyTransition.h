#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_9CBC71DC5240DC00;

#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_METHOD_5_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xA4182D0)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_SETSCENESHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0xA418370)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0xA418460)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xA418450)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneShaderPropertyTransition_TypeDefinitionIndex = 56278;

	class SceneShaderPropertyTransition : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneShaderPropertyTransition_TypeDefinitionIndex)->GetStaticField(0x8F00);
		}
		::Class_1_9CBC71DC5240DC00* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENESHADERPROPERTYTRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENESHADERPROPERTYTRANSITION__CCTOR_OFFSET))();
		}

		::System::Void Method_5_3C56C1AF247AC1EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_METHOD_5_3C56C1AF247AC1EC_OFFSET))(this);
		}

		::System::Void SetSceneShadowColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_SETSCENESHADOWCOLOR_OFFSET))(this, a1);
		}
	};
}
