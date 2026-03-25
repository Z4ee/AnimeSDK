#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1717BD80)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1717C380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerGuestSequenceRow_TypeDefinitionIndex = 12025;

	class DrinkMakerGuestSequenceRow : public ::System::Object
	{
	public:
		::System::UInt32 SequenceID; // 0x10
		::System::Boolean NeedOpenWorkBook; // 0x14
		::System::UInt32 GuestID; // 0x18
		::System::UInt32 StartChatID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerGuestSequenceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerGuestSequenceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
