#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188204F0)
#define RPG_GAMECORE_CLOCKPARKSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18820C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryRow_TypeDefinitionIndex = 10681;

	class ClockParkStoryRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::System::String* StoryJsonPath; // 0x18
		::RPG::Client::TextID StoryTitle; // 0x20
		::RPG::Client::TextID StoryDesc; // 0x30
		::System::UInt32 StoryID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkStoryRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
