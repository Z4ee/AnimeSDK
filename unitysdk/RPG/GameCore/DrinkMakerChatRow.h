#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERCHATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17175BC0)
#define RPG_GAMECORE_DRINKMAKERCHATROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171761D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerChatRow_TypeDefinitionIndex = 12027;

	class DrinkMakerChatRow : public ::System::Object
	{
	public:
		::System::UInt32 RequestID; // 0x10
		::System::UInt32 FailNextChatID; // 0x14
		::System::UInt32 PerformanceID; // 0x18
		::System::UInt32 ChatID; // 0x1C
		::System::UInt32 SuccessNextChatID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerChatRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerChatRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
