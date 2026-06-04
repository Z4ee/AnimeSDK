#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define RPG_OUTLINESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xCFB4800)

namespace RPG
{
	inline static constexpr unsigned int OutlineSettings_TypeDefinitionIndex = 48398;

	class OutlineSettings : public ::System::Object
	{
	public:
		::UnityEngine::Color OutlineColor; // 0x10
		::System::Boolean PCHighQuality; // 0x20
		::System::Int32 Downsample; // 0x24
		::System::Single BlurSize; // 0x28
		::UnityEngine::Shader* OutlineShader; // 0x30
		::UnityEngine::Material* OutlineMaterial; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINESETTINGS__CTOR_OFFSET))(this);
		}
	};
}
