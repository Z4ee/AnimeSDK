#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1342B57709FD7AC5;

#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_METHOD_5_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xC8A4850)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_SETSCENESHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0xC8A48F0)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8A49E0)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xC8A49D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneShaderPropertyTransition_TypeDefinitionIndex = 64441;

	class SceneShaderPropertyTransition : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneShaderPropertyTransition_TypeDefinitionIndex)->GetStaticField(0xC7B0);
		}
		::Class_1_1342B57709FD7AC5* Field_5_1; // 0x18

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
