#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PIXAIREQUIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7919C0)
#define RPG_GAMECORE_PIXAIREQUIPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D792870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEquipRow_TypeDefinitionIndex = 12074;

	class PixAirEquipRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* AffectedTaglist; // 0x10
		::System::String* EquipIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* TagList; // 0x20
		::RPG::GameCore::PixAirSlotType SlotType; // 0x28
		::System::UInt32 EquipID; // 0x2C
		::System::Boolean IsCore; // 0x30
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirEquipRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirEquipRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
