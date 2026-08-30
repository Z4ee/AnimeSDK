#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3ED49090AE0E3293;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_60_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x180C0910)
#define CLASS_3_27518451A20BB161_60__CTOR_OFFSET UNITYSDK_OFFSET(0x180C08E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_60_TypeDefinitionIndex = 53139;

class Class_3_27518451A20BB161_60 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3ED49090AE0E3293*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3ED49090AE0E3293* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3ED49090AE0E3293*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_60_ONTASKBEGIN_OFFSET))(this);
	}
};
