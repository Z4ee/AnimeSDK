#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LeaveLoopScene; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B6B34A73CDC61ECA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA51160)
#define CLASS_2_B6B34A73CDC61ECA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA511A0)
#define CLASS_2_B6B34A73CDC61ECA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA51450)
#define CLASS_2_B6B34A73CDC61ECA_TICK_OFFSET UNITYSDK_OFFSET(0xBA514A0)
#define CLASS_2_B6B34A73CDC61ECA__CTOR_OFFSET UNITYSDK_OFFSET(0xBA51150)

inline static constexpr unsigned int Class_2_B6B34A73CDC61ECA_TypeDefinitionIndex = 58330;

class Class_2_B6B34A73CDC61ECA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::LeaveLoopScene* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LeaveLoopScene* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LeaveLoopScene*))((::PBYTE)hIl2Cpp + CLASS_2_B6B34A73CDC61ECA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6B34A73CDC61ECA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6B34A73CDC61ECA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6B34A73CDC61ECA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B6B34A73CDC61ECA_TICK_OFFSET))(this, a1);
	}
};
