#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::CaseTest { class SkillDef; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CASETEST_MONSTERREPLAYCONFIG_GETALLSKILLSETTING_OFFSET UNITYSDK_OFFSET(0x16240BB0)
#define MOLEMOLE_CASETEST_MONSTERREPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16240F90)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int MonsterReplayConfig_TypeDefinitionIndex = 66431;

	class MonsterReplayConfig : public ::System::Object
	{
	public:
		::System::Int32 defaultTime; // 0x10
		::System::Int32 monsterID; // 0x14
		::System::Int32 battleID; // 0x18
		::System::Boolean DisableAI; // 0x1C
		::System::Boolean UseDefaultMonster; // 0x1D
		::System::String* AbilityStr; // 0x20
		::System::Single WaitTime; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::CaseTest::SkillDef*>* SkillSetting; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_MONSTERREPLAYCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void GetAllSkillSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_MONSTERREPLAYCONFIG_GETALLSKILLSETTING_OFFSET))(this);
		}
	};
}
