#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F1507657401FC6F9_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_75_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x108E0C00)
#define CLASS_3_27518451A20BB161_75__CTOR_OFFSET UNITYSDK_OFFSET(0x108E0BD0)

inline static constexpr unsigned int Class_3_27518451A20BB161_75_TypeDefinitionIndex = 44298;

class Class_3_27518451A20BB161_75 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F1507657401FC6F9_5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F1507657401FC6F9_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F1507657401FC6F9_5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_75__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_75_ONTASKBEGIN_OFFSET))(this);
	}
};
