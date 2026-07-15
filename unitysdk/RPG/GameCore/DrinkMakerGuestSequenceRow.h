#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB21690)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB21CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerGuestSequenceRow_TypeDefinitionIndex = 12683;

	class DrinkMakerGuestSequenceRow : public ::System::Object
	{
	public:
		::System::UInt32 GuestID; // 0x10
		::System::UInt32 StartChatID; // 0x14
		::System::UInt32 SequenceID; // 0x18
		::System::Boolean NeedOpenWorkBook; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerGuestSequenceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerGuestSequenceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
