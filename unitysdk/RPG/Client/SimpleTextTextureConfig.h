#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_SIMPLETEXTTEXTURECONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0xA4979E0)
#define RPG_CLIENT_SIMPLETEXTTEXTURECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA497A50)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextTextureConfig_TypeDefinitionIndex = 59548;

	class SimpleTextTextureConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2 TimeScale; // 0x18
		::System::Int32 TargetFontSize; // 0x20
		::UnityEngine::Texture2D* TextureBtm; // 0x28
		::UnityEngine::Texture2D* TextureTop; // 0x30
		::UnityEngine::Color32 TextureTopColor; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTTEXTURECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTTEXTURECONFIG_AWAKE_OFFSET))(this);
		}
	};
}
