#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5F9EE327CC8A2E3C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_27_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB213B80)
#define CLASS_3_27518451A20BB161_27__CTOR_OFFSET UNITYSDK_OFFSET(0xB213B50)

inline static constexpr unsigned int Class_3_27518451A20BB161_27_TypeDefinitionIndex = 48751;

class Class_3_27518451A20BB161_27 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5F9EE327CC8A2E3C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5F9EE327CC8A2E3C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5F9EE327CC8A2E3C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_27__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_27_ONTASKBEGIN_OFFSET))(this);
	}
};
