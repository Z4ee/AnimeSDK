#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BF0209E2F29D1F5A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_134_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB1FE50)
#define CLASS_3_27518451A20BB161_134_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB1FE90)
#define CLASS_3_27518451A20BB161_134__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1FE20)

inline static constexpr unsigned int Class_3_27518451A20BB161_134_TypeDefinitionIndex = 54090;

class Class_3_27518451A20BB161_134 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BF0209E2F29D1F5A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BF0209E2F29D1F5A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BF0209E2F29D1F5A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_134__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_134_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_134_ONTASKBEGIN_OFFSET))(this);
	}
};
