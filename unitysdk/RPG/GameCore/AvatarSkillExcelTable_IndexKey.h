#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x22BA540)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22BA560)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22BB580)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillExcelTable_IndexKey_TypeDefinitionIndex = 12038;

	struct alignas(4) AvatarSkillExcelTable_IndexKey
	{
		::System::UInt32 SkillID; // 0x10
		::System::UInt32 Level; // 0x14

		::System::Void _ctor(::System::UInt32 SkillID, ::System::UInt32 Level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, SkillID, Level);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::AvatarSkillExcelTable_IndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
