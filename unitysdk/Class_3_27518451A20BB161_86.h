#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B2ACAD40141B0AA8_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_86_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A7F070)
#define CLASS_3_27518451A20BB161_86__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7F040)

inline static constexpr unsigned int Class_3_27518451A20BB161_86_TypeDefinitionIndex = 53241;

class Class_3_27518451A20BB161_86 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B2ACAD40141B0AA8_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B2ACAD40141B0AA8_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B2ACAD40141B0AA8_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_86__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_86_ONTASKBEGIN_OFFSET))(this);
	}
};
