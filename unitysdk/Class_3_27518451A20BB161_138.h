#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3A92B9AFE98444E6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_138_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1625EBF0)
#define CLASS_3_27518451A20BB161_138_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1625EC30)
#define CLASS_3_27518451A20BB161_138__CTOR_OFFSET UNITYSDK_OFFSET(0x1625EBC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_138_TypeDefinitionIndex = 51471;

class Class_3_27518451A20BB161_138 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3A92B9AFE98444E6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3A92B9AFE98444E6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3A92B9AFE98444E6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_138__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_138_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_138_ONTASKBEGIN_OFFSET))(this);
	}
};
