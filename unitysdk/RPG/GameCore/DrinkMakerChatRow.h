#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERCHATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196BF8F0)
#define RPG_GAMECORE_DRINKMAKERCHATROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196BFF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerChatRow_TypeDefinitionIndex = 12548;

	class DrinkMakerChatRow : public ::System::Object
	{
	public:
		::System::UInt32 SuccessNextChatID; // 0x10
		::System::UInt32 PerformanceID; // 0x14
		::System::UInt32 FailNextChatID; // 0x18
		::System::UInt32 ChatID; // 0x1C
		::System::UInt32 RequestID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerChatRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerChatRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
