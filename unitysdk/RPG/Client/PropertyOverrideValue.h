#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Shader; }

#define RPG_CLIENT_PROPERTYOVERRIDEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xDD72600)

namespace RPG::Client
{
	inline static constexpr unsigned int PropertyOverrideValue_TypeDefinitionIndex = 70989;

	class PropertyOverrideValue : public ::System::Object
	{
	public:
		::UnityEngine::Shader* shader; // 0x10
		::System::String* propertyName; // 0x18
		::UnityEngine::Rendering::ShaderPropertyType propertyType; // 0x20
		::System::Boolean enabled; // 0x24
		::System::Single floatValue; // 0x28
		::UnityEngine::Color colorValue; // 0x2C
		::UnityEngine::Vector4 vectorValue; // 0x3C
		::System::Boolean hasSavedValue; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPERTYOVERRIDEVALUE__CTOR_OFFSET))(this);
		}
	};
}
