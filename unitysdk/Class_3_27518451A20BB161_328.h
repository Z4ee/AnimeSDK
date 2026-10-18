#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A1278C415206D81C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_328_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1562D0)
#define CLASS_3_27518451A20BB161_328__CTOR_OFFSET UNITYSDK_OFFSET(0xB1562A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_328_TypeDefinitionIndex = 58810;

class Class_3_27518451A20BB161_328 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A1278C415206D81C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A1278C415206D81C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A1278C415206D81C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_328__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_328_ONTASKBEGIN_OFFSET))(this);
	}
};
