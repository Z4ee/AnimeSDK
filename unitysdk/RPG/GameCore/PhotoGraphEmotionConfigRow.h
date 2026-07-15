#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4C0F90)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C18D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphEmotionConfigRow_TypeDefinitionIndex = 13904;

	class PhotoGraphEmotionConfigRow : public ::System::Object
	{
	public:
		::System::String* MouthClipName; // 0x10
		::System::String* EmotionIconPath; // 0x18
		::System::String* EyeClipName; // 0x20
		::System::String* EmotionClipPath; // 0x28
		::System::String* BrowClipName; // 0x30
		::System::Single BrowWeight; // 0x38
		::System::UInt32 EmotionID; // 0x3C
		::System::Single MouthWeight; // 0x40
		::System::Single ExShyIntensity; // 0x44
		::System::Single EyeWeight; // 0x48
		::RPG::Client::TextID EmotionName; // 0x50
		::System::Single ExCheekIntensity; // 0x60
		::System::Single ExShadowIntensity; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphEmotionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphEmotionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
