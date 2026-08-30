#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_47E2CD2D186E12E0;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC08DA10)
#define CLASS_3_27518451A20BB161_84__CTOR_OFFSET UNITYSDK_OFFSET(0xC08D9E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_84_TypeDefinitionIndex = 53237;

class Class_3_27518451A20BB161_84 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_47E2CD2D186E12E0*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_47E2CD2D186E12E0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_47E2CD2D186E12E0*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_84_ONTASKBEGIN_OFFSET))(this);
	}
};
