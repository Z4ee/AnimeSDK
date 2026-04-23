#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RANDOMEVENTCHOICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C89D60)
#define RPG_GAMECORE_RANDOMEVENTCHOICEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8A040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomEventChoiceRow_TypeDefinitionIndex = 13505;

	class RandomEventChoiceRow : public ::System::Object
	{
	public:
		::System::UInt32 EventRewardFund; // 0x10
		::System::UInt32 EventRewardBuff; // 0x14
		::System::UInt32 EventCostOption; // 0x18
		::System::UInt32 EventBuffDay; // 0x1C
		::System::Boolean IsCancel; // 0x20
		::System::UInt32 ChoiceID; // 0x24
		::RPG::Client::TextID Option; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMEVENTCHOICEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RandomEventChoiceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomEventChoiceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMEVENTCHOICEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
