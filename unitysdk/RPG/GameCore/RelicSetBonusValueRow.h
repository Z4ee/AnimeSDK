#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICSETBONUSVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175925A0)
#define RPG_GAMECORE_RELICSETBONUSVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175927A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetBonusValueRow_TypeDefinitionIndex = 10214;

	class RelicSetBonusValueRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint Threshold; // 0x10
		::System::UInt32 SetID; // 0x18
		::System::Single BonusValue; // 0x1C
		::RPG::GameCore::AvatarPropertyType Property; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETBONUSVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RelicSetBonusValueRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicSetBonusValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETBONUSVALUEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
