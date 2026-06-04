#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEEQUIPPROPERTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198423C0)
#define RPG_GAMECORE_IDLELIVEEQUIPPROPERTYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19842880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEquipPropertyRow_TypeDefinitionIndex = 11245;

	class IdleLiveEquipPropertyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* RandomFactorList; // 0x10
		::System::UInt32 OffsetQuantizeCount; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::GameCore::FixPoint BasicParam; // 0x20
		::RPG::GameCore::FixPoint OffsetRange; // 0x28
		::RPG::GameCore::FixPoint LevelParam; // 0x30
		::RPG::GameCore::IdleLiveAvatarPropertyType PropertyType; // 0x38
		::System::Boolean IsRare; // 0x3C
		::RPG::GameCore::FixPoint RarityPower; // 0x40
		::RPG::GameCore::FixPoint RarityParam; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPPROPERTYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveEquipPropertyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveEquipPropertyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPPROPERTYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
