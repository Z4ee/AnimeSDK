#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MarkAwardTargetUsed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3FE467CBFB06972C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152110C0)
#define CLASS_3_3FE467CBFB06972C__CTOR_OFFSET UNITYSDK_OFFSET(0x15211090)

inline static constexpr unsigned int Class_3_3FE467CBFB06972C_TypeDefinitionIndex = 58360;

class Class_3_3FE467CBFB06972C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MarkAwardTargetUsed*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarkAwardTargetUsed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarkAwardTargetUsed*))((::PBYTE)hIl2Cpp + CLASS_3_3FE467CBFB06972C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FE467CBFB06972C_ONTASKBEGIN_OFFSET))(this);
	}
};
