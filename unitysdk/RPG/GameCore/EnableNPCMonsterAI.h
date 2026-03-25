#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ENABLENPCMONSTERAI_METHOD_3_325A992D91EDD1DD_OFFSET UNITYSDK_OFFSET(0x17199050)
#define RPG_GAMECORE_ENABLENPCMONSTERAI_METHOD_3_ABD8CFB81786013F_OFFSET UNITYSDK_OFFSET(0x17198FC0)
#define RPG_GAMECORE_ENABLENPCMONSTERAI__CTOR_OFFSET UNITYSDK_OFFSET(0x17199020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableNPCMonsterAI_TypeDefinitionIndex = 18718;

	class EnableNPCMonsterAI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::Il2CppArray<::System::UInt32>* GroupMonsterIDs; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::Il2CppArray<::System::String*>* UniqueNames; // 0x30
		::System::Boolean AbortSkillWhenDisable; // 0x38
		::System::Boolean ResetStateOnDisable; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENPCMONSTERAI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ABD8CFB81786013F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableNPCMonsterAI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableNPCMonsterAI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENPCMONSTERAI_METHOD_3_ABD8CFB81786013F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_325A992D91EDD1DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableNPCMonsterAI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableNPCMonsterAI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLENPCMONSTERAI_METHOD_3_325A992D91EDD1DD_OFFSET))(a1, a2);
		}
	};
}
