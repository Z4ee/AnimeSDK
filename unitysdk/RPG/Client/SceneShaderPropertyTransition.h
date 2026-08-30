#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1342B57709FD7AC5;

#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_METHOD_5_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xE05A950)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION_SETSCENESHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0xE05A9F0)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0xE05AAE0)
#define RPG_CLIENT_SCENESHADERPROPERTYTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xE05AAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneShaderPropertyTransition_TypeDefinitionIndex = 68850;

	class SceneShaderPropertyTransition : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_JEMFDPPDDKO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneShaderPropertyTransition_TypeDefinitionIndex)->GetStaticField(0xA8C0);
		}
		::Class_1_1342B57709FD7AC5* OIDAGBPPNBJ; // 0x18

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
