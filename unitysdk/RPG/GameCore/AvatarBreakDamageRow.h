#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARBREAKDAMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F95B70)
#define RPG_GAMECORE_AVATARBREAKDAMAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F95CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarBreakDamageRow_TypeDefinitionIndex = 11647;

	class AvatarBreakDamageRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint BreakBaseDamage; // 0x10
		::System::UInt32 Level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBREAKDAMAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarBreakDamageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarBreakDamageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBREAKDAMAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
