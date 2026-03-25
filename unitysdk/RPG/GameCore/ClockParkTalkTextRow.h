#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKTALKTEXTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1711C950)
#define RPG_GAMECORE_CLOCKPARKTALKTEXTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1711CAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkTalkTextRow_TypeDefinitionIndex = 10473;

	class ClockParkTalkTextRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TalkText; // 0x10
		::System::UInt32 TalkID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALKTEXTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkTalkTextRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkTalkTextRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALKTEXTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
