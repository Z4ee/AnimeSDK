#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BF4F20)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF5840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphEmotionConfigRow_TypeDefinitionIndex = 13687;

	class PhotoGraphEmotionConfigRow : public ::System::Object
	{
	public:
		::System::String* EyeClipName; // 0x10
		::System::String* EmotionIconPath; // 0x18
		::System::String* MouthClipName; // 0x20
		::System::String* EmotionClipPath; // 0x28
		::System::String* BrowClipName; // 0x30
		::System::Single MouthWeight; // 0x38
		::System::Single ExShadowIntensity; // 0x3C
		::RPG::Client::TextID EmotionName; // 0x40
		::System::Single ExShyIntensity; // 0x50
		::System::UInt32 EmotionID; // 0x54
		::System::Single BrowWeight; // 0x58
		::System::Single ExCheekIntensity; // 0x5C
		::System::Single EyeWeight; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PhotoGraphEmotionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphEmotionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
