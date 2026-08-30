#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATAREXPITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C58E8A0)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C58EE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarExpItemConfigRow_TypeDefinitionIndex = 12662;

	class AvatarExpItemConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Exp; // 0x10
		::System::UInt32 ItemID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarExpItemConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarExpItemConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
