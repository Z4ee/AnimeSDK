#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CASETEST_SKILLDEF__CTOR_OFFSET UNITYSDK_OFFSET(0xF128430)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int SkillDef_TypeDefinitionIndex = 71795;

	class SkillDef : public ::System::Object
	{
	public:
		::System::Int32 skillID; // 0x10
		::System::String* skillName; // 0x18
		::System::Int32 replayTime; // 0x20
		::System::String* skillAbilityStr; // 0x28
		::System::Boolean DisableReset; // 0x30

		::System::Void _ctor(::System::Int32 skillID, ::System::String* skillName, ::System::Int32 replayTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_SKILLDEF__CTOR_OFFSET))(this, skillID, skillName, replayTime);
		}
	};
}
