#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKTALKTEXTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A2230)
#define RPG_GAMECORE_CLOCKPARKTALKTEXTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A23B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkTalkTextRow_TypeDefinitionIndex = 11178;

	class ClockParkTalkTextRow : public ::System::Object
	{
	public:
		::System::UInt32 TalkID; // 0x10
		::RPG::Client::TextID TalkText; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALKTEXTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkTalkTextRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkTalkTextRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALKTEXTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
