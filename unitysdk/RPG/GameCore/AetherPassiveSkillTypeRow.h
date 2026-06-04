#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19464150)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19464790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherPassiveSkillTypeRow_TypeDefinitionIndex = 10523;

	class AetherPassiveSkillTypeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* Name; // 0x18
		::RPG::GameCore::AetherPassiveSkillType PassiveSkillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherPassiveSkillTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherPassiveSkillTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
