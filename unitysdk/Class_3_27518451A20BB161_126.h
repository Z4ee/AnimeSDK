#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8B122849B31E2A4D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_126_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4CC810)
#define CLASS_3_27518451A20BB161_126__CTOR_OFFSET UNITYSDK_OFFSET(0xB4CC7E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_126_TypeDefinitionIndex = 54058;

class Class_3_27518451A20BB161_126 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8B122849B31E2A4D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8B122849B31E2A4D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8B122849B31E2A4D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_126__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_126_ONTASKBEGIN_OFFSET))(this);
	}
};
