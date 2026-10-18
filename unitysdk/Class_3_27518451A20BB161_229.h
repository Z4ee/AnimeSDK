#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A19DDDCD5E970CDE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_229_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE836EB0)
#define CLASS_3_27518451A20BB161_229__CTOR_OFFSET UNITYSDK_OFFSET(0xE836E80)

inline static constexpr unsigned int Class_3_27518451A20BB161_229_TypeDefinitionIndex = 55369;

class Class_3_27518451A20BB161_229 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A19DDDCD5E970CDE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A19DDDCD5E970CDE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A19DDDCD5E970CDE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_229__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_229_ONTASKBEGIN_OFFSET))(this);
	}
};
