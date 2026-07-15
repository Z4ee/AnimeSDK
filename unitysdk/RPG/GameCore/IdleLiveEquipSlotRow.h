#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveEquipType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEQUIPSLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B695600)
#define RPG_GAMECORE_IDLELIVEEQUIPSLOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B695820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEquipSlotRow_TypeDefinitionIndex = 11341;

	class IdleLiveEquipSlotRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::GameCore::IdleLiveEquipType Type; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 UnlockID; // 0x20
		::RPG::Client::TextID Title; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPSLOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveEquipSlotRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveEquipSlotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPSLOTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
