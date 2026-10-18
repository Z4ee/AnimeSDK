#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A45685C36039AFF6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_265_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB90AA20)
#define CLASS_3_27518451A20BB161_265__CTOR_OFFSET UNITYSDK_OFFSET(0xB90A9F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_265_TypeDefinitionIndex = 55692;

class Class_3_27518451A20BB161_265 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A45685C36039AFF6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A45685C36039AFF6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A45685C36039AFF6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_265__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_265_ONTASKBEGIN_OFFSET))(this);
	}
};
