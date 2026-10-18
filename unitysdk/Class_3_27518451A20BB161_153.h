#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3A92B9AFE98444E6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_153_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E24D90)
#define CLASS_3_27518451A20BB161_153_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E24DD0)
#define CLASS_3_27518451A20BB161_153__CTOR_OFFSET UNITYSDK_OFFSET(0x15E24D60)

inline static constexpr unsigned int Class_3_27518451A20BB161_153_TypeDefinitionIndex = 53941;

class Class_3_27518451A20BB161_153 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3A92B9AFE98444E6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3A92B9AFE98444E6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3A92B9AFE98444E6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_153__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_153_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_153_ONTASKBEGIN_OFFSET))(this);
	}
};
