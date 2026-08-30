#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAnimatorParameterWithTransition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D0A82CB18EB0E96B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC46E8E0)
#define CLASS_3_D0A82CB18EB0E96B__CTOR_OFFSET UNITYSDK_OFFSET(0xC46E830)

inline static constexpr unsigned int Class_3_D0A82CB18EB0E96B_TypeDefinitionIndex = 55545;

class Class_3_D0A82CB18EB0E96B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAnimatorParameterWithTransition*>
{
public:
	::System::Int32 EJLJCJLLBPF; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAnimatorParameterWithTransition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAnimatorParameterWithTransition*))((::PBYTE)hIl2Cpp + CLASS_3_D0A82CB18EB0E96B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0A82CB18EB0E96B_ONTASKBEGIN_OFFSET))(this);
	}
};
