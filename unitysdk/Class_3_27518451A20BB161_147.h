#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3A92B9AFE98444E6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_147_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B16D60)
#define CLASS_3_27518451A20BB161_147_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B16DA0)
#define CLASS_3_27518451A20BB161_147__CTOR_OFFSET UNITYSDK_OFFSET(0x15B16D30)

inline static constexpr unsigned int Class_3_27518451A20BB161_147_TypeDefinitionIndex = 54155;

class Class_3_27518451A20BB161_147 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3A92B9AFE98444E6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3A92B9AFE98444E6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3A92B9AFE98444E6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147_ONTASKBEGIN_OFFSET))(this);
	}
};
