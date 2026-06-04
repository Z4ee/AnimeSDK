#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A149A6B784E8BE69;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_118_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA1E080)
#define CLASS_3_27518451A20BB161_118__CTOR_OFFSET UNITYSDK_OFFSET(0xAA1E050)

inline static constexpr unsigned int Class_3_27518451A20BB161_118_TypeDefinitionIndex = 51352;

class Class_3_27518451A20BB161_118 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A149A6B784E8BE69*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A149A6B784E8BE69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A149A6B784E8BE69*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_118__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_118_ONTASKBEGIN_OFFSET))(this);
	}
};
