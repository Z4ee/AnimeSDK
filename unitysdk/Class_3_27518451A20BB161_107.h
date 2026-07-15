#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0A6AEAAB98E550F1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_107_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1605C320)
#define CLASS_3_27518451A20BB161_107_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1605C360)
#define CLASS_3_27518451A20BB161_107_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1605C800)
#define CLASS_3_27518451A20BB161_107__CTOR_OFFSET UNITYSDK_OFFSET(0x1605C2F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_107_TypeDefinitionIndex = 51021;

class Class_3_27518451A20BB161_107 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0A6AEAAB98E550F1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0A6AEAAB98E550F1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0A6AEAAB98E550F1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_107__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_107_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_107_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_107_ONTASKRESET_OFFSET))(this);
	}
};
