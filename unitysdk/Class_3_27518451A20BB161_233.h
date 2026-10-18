#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5F7FDBCE3E02CC8B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_233_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6A0F10)
#define CLASS_3_27518451A20BB161_233__CTOR_OFFSET UNITYSDK_OFFSET(0xB6A0EE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_233_TypeDefinitionIndex = 55399;

class Class_3_27518451A20BB161_233 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5F7FDBCE3E02CC8B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5F7FDBCE3E02CC8B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5F7FDBCE3E02CC8B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_233__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_233_ONTASKBEGIN_OFFSET))(this);
	}
};
