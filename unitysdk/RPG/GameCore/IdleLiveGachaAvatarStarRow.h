#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEGACHAAVATARSTARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A11670)
#define RPG_GAMECORE_IDLELIVEGACHAAVATARSTARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A117F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveGachaAvatarStarRow_TypeDefinitionIndex = 11211;

	class IdleLiveGachaAvatarStarRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint StarAddPower; // 0x10
		::System::UInt32 AvatarStar; // 0x18
		::System::UInt32 AvatarPiece; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGACHAAVATARSTARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveGachaAvatarStarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveGachaAvatarStarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGACHAAVATARSTARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
