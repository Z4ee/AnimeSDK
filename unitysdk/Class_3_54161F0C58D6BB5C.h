#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChimeraBattleShowSkillInfoLock; }

#define CLASS_3_54161F0C58D6BB5C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C57BF0)
#define CLASS_3_54161F0C58D6BB5C_METHOD_3_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x15C57B70)
#define CLASS_3_54161F0C58D6BB5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C57B20)
#define CLASS_3_54161F0C58D6BB5C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C57AF0)

inline static constexpr unsigned int Class_3_54161F0C58D6BB5C_TypeDefinitionIndex = 58818;

class Class_3_54161F0C58D6BB5C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock*))((::PBYTE)hIl2Cpp + CLASS_3_54161F0C58D6BB5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54161F0C58D6BB5C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54161F0C58D6BB5C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54161F0C58D6BB5C_METHOD_3_4358F70A163BCEAE_OFFSET))(this);
	}
};
