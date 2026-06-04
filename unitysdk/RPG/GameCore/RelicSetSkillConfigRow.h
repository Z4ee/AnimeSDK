#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A4D134A7DAD941E3;
namespace System { class String; }

#define RPG_GAMECORE_RELICSETSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AC4E60)
#define RPG_GAMECORE_RELICSETSKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC5550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetSkillConfigRow_TypeDefinitionIndex = 13905;

	class RelicSetSkillConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A4D134A7DAD941E3*>* PropertyList; // 0x10
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* AbilityParamList; // 0x20
		::System::String* SkillDesc; // 0x28
		::System::UInt32 SetID; // 0x30
		::System::UInt32 RequireNum; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicSetSkillConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicSetSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
