#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::CaseTest { class SkillDef; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_CASETEST_MONSTERREPLAYCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17274940)
#define MOLEMOLE_CASETEST_MONSTERREPLAYCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17274980)
#define MOLEMOLE_CASETEST_MONSTERREPLAYCONFIG___C__GETALLSKILLSETTING_B__8_0_OFFSET UNITYSDK_OFFSET(0x17274990)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int MonsterReplayConfig___c_TypeDefinitionIndex = 66432;

	class MonsterReplayConfig___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::CaseTest::SkillDef*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::MoleMole::CaseTest::SkillDef*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterReplayConfig___c_TypeDefinitionIndex)->GetStaticField(0x31E50);
		}
		static ::MoleMole::CaseTest::MonsterReplayConfig___c** StaticGet___9()
		{
			return (::MoleMole::CaseTest::MonsterReplayConfig___c**)Il2CppClass::FromTypeDefinitionIndex(MonsterReplayConfig___c_TypeDefinitionIndex)->GetStaticField(0x31E58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_MONSTERREPLAYCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_MONSTERREPLAYCONFIG___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllSkillSetting_b__8_0(::MoleMole::CaseTest::SkillDef* a, ::MoleMole::CaseTest::SkillDef* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::CaseTest::SkillDef*, ::MoleMole::CaseTest::SkillDef*))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_MONSTERREPLAYCONFIG___C__GETALLSKILLSETTING_B__8_0_OFFSET))(this, a, b);
		}
	};
}
