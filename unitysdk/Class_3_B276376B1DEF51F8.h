#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearRegardAsSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B276376B1DEF51F8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC46D90)
#define CLASS_3_B276376B1DEF51F8__CTOR_OFFSET UNITYSDK_OFFSET(0xAC46D60)

inline static constexpr unsigned int Class_3_B276376B1DEF51F8_TypeDefinitionIndex = 51366;

class Class_3_B276376B1DEF51F8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearRegardAsSkillType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearRegardAsSkillType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearRegardAsSkillType*))((::PBYTE)hIl2Cpp + CLASS_3_B276376B1DEF51F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B276376B1DEF51F8_ONTASKBEGIN_OFFSET))(this);
	}
};
