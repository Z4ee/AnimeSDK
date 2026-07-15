#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A08E960)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08F050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillPropertyOverrideRow_TypeDefinitionIndex = 12241;

	class AvatarSkillPropertyOverrideRow : public ::System::Object
	{
	public:
		::System::String* ReplacePointIconPrefab; // 0x10
		::System::UInt32 SkillID; // 0x18
		::System::Boolean DisableIconColorHint; // 0x1C
		::System::Boolean OverrideAttackType; // 0x1D
		::System::Boolean IsSecretSkillNeed; // 0x1E
		::RPG::GameCore::AttackType DisplayAttackType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarSkillPropertyOverrideRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSkillPropertyOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
