#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A01784FE9F042E29;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_243_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15990E80)
#define CLASS_3_27518451A20BB161_243__CTOR_OFFSET UNITYSDK_OFFSET(0x15990E50)

inline static constexpr unsigned int Class_3_27518451A20BB161_243_TypeDefinitionIndex = 55548;

class Class_3_27518451A20BB161_243 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A01784FE9F042E29*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A01784FE9F042E29* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A01784FE9F042E29*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_243__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_243_ONTASKBEGIN_OFFSET))(this);
	}
};
