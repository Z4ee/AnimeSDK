#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6CFD1ACC077590D5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_224_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB4F910)
#define CLASS_3_27518451A20BB161_224_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB4F950)
#define CLASS_3_27518451A20BB161_224__CTOR_OFFSET UNITYSDK_OFFSET(0xBB4F8E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_224_TypeDefinitionIndex = 55696;

class Class_3_27518451A20BB161_224 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6CFD1ACC077590D5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6CFD1ACC077590D5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6CFD1ACC077590D5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_224__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_224_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_224_ONTASKBEGIN_OFFSET))(this);
	}
};
