#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RANDOMEVENTCHOICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AAEC00)
#define RPG_GAMECORE_RANDOMEVENTCHOICEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AAEEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomEventChoiceRow_TypeDefinitionIndex = 13576;

	class RandomEventChoiceRow : public ::System::Object
	{
	public:
		::System::UInt32 EventRewardFund; // 0x10
		::System::UInt32 EventRewardBuff; // 0x14
		::System::UInt32 EventCostOption; // 0x18
		::System::UInt32 ChoiceID; // 0x1C
		::RPG::Client::TextID Option; // 0x20
		::System::Boolean IsCancel; // 0x30
		::System::UInt32 EventBuffDay; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMEVENTCHOICEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomEventChoiceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomEventChoiceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMEVENTCHOICEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
