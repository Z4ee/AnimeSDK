#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERNOTEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB16C30)
#define RPG_GAMECORE_DRINKMAKERNOTEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerNoteRow_TypeDefinitionIndex = 13083;

	class DrinkMakerNoteRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* DrinkMakerNoteList; // 0x10
		::System::UInt32 GuestID; // 0x18
		::System::UInt32 UnlockDay; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerNoteRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerNoteRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
