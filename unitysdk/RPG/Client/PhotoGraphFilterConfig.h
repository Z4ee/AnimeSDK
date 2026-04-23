#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_PHOTOGRAPHFILTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xAC68F90)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphFilterConfig_TypeDefinitionIndex = 63995;

	class PhotoGraphFilterConfig : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::String* SpritePath; // 0x20
		::System::Boolean LUTEnable; // 0x28
		::UnityEngine::Texture2D* LUT; // 0x30
		::System::Single LUTDefaultIntensity; // 0x38
		::System::Boolean ColorizeEnable; // 0x3C
		::System::Single HueColorize; // 0x40
		::System::Single SaturationColorize; // 0x44
		::System::Single LightnessColorize; // 0x48
		::System::Single Hue; // 0x4C
		::System::Single Saturation; // 0x50
		::System::Single Lightness; // 0x54
		::System::Single Brightness; // 0x58
		::System::Single Contrast; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
