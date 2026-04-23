#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEQUIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A10960)
#define RPG_GAMECORE_IDLELIVEEQUIPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A10B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEquipRow_TypeDefinitionIndex = 11196;

	class IdleLiveEquipRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* Name; // 0x18
		::System::UInt32 SlotID; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveEquipRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveEquipRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
