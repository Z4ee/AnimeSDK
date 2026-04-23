#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C1111D8DC4018EE3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_106_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92B4070)
#define CLASS_3_27518451A20BB161_106__CTOR_OFFSET UNITYSDK_OFFSET(0x92B4040)

inline static constexpr unsigned int Class_3_27518451A20BB161_106_TypeDefinitionIndex = 50581;

class Class_3_27518451A20BB161_106 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C1111D8DC4018EE3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C1111D8DC4018EE3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C1111D8DC4018EE3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_106__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_106_ONTASKBEGIN_OFFSET))(this);
	}
};
