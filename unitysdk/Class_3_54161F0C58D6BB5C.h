#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChimeraBattleShowSkillInfoLock; }

#define CLASS_3_54161F0C58D6BB5C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15907000)
#define CLASS_3_54161F0C58D6BB5C_METHOD_3_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x15906F80)
#define CLASS_3_54161F0C58D6BB5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15906F30)
#define CLASS_3_54161F0C58D6BB5C__CTOR_OFFSET UNITYSDK_OFFSET(0x15906F00)

inline static constexpr unsigned int Class_3_54161F0C58D6BB5C_TypeDefinitionIndex = 58966;

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

	::System::Void Method_3_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54161F0C58D6BB5C_METHOD_3_B799DB9989A18F1D_OFFSET))(this);
	}
};
