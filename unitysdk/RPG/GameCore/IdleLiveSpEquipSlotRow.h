#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESPEQUIPSLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A15150)
#define RPG_GAMECORE_IDLELIVESPEQUIPSLOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A15400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpEquipSlotRow_TypeDefinitionIndex = 11207;

	class IdleLiveSpEquipSlotRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::System::UInt32 TeamSlot; // 0x1C
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID Title; // 0x28
		::RPG::Client::TextID UnlockHint; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPSLOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveSpEquipSlotRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSpEquipSlotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPSLOTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
