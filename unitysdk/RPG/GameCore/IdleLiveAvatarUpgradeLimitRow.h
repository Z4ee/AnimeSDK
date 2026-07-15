#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEAVATARUPGRADELIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B692C10)
#define RPG_GAMECORE_IDLELIVEAVATARUPGRADELIMITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B692D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarUpgradeLimitRow_TypeDefinitionIndex = 11304;

	class IdleLiveAvatarUpgradeLimitRow : public ::System::Object
	{
	public:
		::System::UInt32 LevelLimit; // 0x10
		::System::UInt32 UnlockID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADELIMITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADELIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
