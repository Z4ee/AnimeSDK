#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEEQUIPDISCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D20FB20)
#define RPG_GAMECORE_IDLELIVEEQUIPDISCARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20FD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEquipDiscardRow_TypeDefinitionIndex = 11727;

	class IdleLiveEquipDiscardRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint SpEquipLevelAddPower; // 0x10
		::System::UInt32 EquipLevel; // 0x18
		::RPG::GameCore::FixPoint EquipLevelAddPower; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPDISCARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveEquipDiscardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveEquipDiscardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPDISCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
