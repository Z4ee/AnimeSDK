#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RANDOMEVENTCHOICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D199510)
#define RPG_GAMECORE_RANDOMEVENTCHOICEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1997F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomEventChoiceRow_TypeDefinitionIndex = 14141;

	class RandomEventChoiceRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Option; // 0x10
		::System::Boolean IsCancel; // 0x20
		::System::UInt32 EventCostOption; // 0x24
		::System::UInt32 EventRewardBuff; // 0x28
		::System::UInt32 EventBuffDay; // 0x2C
		::System::UInt32 EventRewardFund; // 0x30
		::System::UInt32 ChoiceID; // 0x34

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
