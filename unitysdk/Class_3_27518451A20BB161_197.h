#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_19345396C7221275;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_197_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1707FDB0)
#define CLASS_3_27518451A20BB161_197_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1707FDF0)
#define CLASS_3_27518451A20BB161_197__CTOR_OFFSET UNITYSDK_OFFSET(0x1707FD80)

inline static constexpr unsigned int Class_3_27518451A20BB161_197_TypeDefinitionIndex = 55399;

class Class_3_27518451A20BB161_197 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_19345396C7221275*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_19345396C7221275* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_19345396C7221275*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_197__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_197_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_197_ONTASKBEGIN_OFFSET))(this);
	}
};
