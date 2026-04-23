#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_ABB36FF48FF9B441;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_46_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x123F43F0)
#define CLASS_3_27518451A20BB161_46__CTOR_OFFSET UNITYSDK_OFFSET(0x123F43C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_46_TypeDefinitionIndex = 48795;

class Class_3_27518451A20BB161_46 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_ABB36FF48FF9B441*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_ABB36FF48FF9B441* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_ABB36FF48FF9B441*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_46_ONTASKBEGIN_OFFSET))(this);
	}
};
