#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICSETBONUSVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB881A0)
#define RPG_GAMECORE_RELICSETBONUSVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB883A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetBonusValueRow_TypeDefinitionIndex = 10869;

	class RelicSetBonusValueRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint Threshold; // 0x10
		::System::Single BonusValue; // 0x18
		::RPG::GameCore::AvatarPropertyType Property; // 0x1C
		::System::UInt32 SetID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETBONUSVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicSetBonusValueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicSetBonusValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETBONUSVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
