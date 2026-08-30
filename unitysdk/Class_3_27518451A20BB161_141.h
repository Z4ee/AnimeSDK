#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_904B9859921B73FC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_141_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8A3350)
#define CLASS_3_27518451A20BB161_141_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8A3390)
#define CLASS_3_27518451A20BB161_141__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A3320)

inline static constexpr unsigned int Class_3_27518451A20BB161_141_TypeDefinitionIndex = 54120;

class Class_3_27518451A20BB161_141 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_904B9859921B73FC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_904B9859921B73FC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_904B9859921B73FC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_141__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_141_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_141_ONTASKBEGIN_OFFSET))(this);
	}
};
