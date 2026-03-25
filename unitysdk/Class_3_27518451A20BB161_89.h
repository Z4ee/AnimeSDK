#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4EE4EC468B898F75;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_89_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BEDE10)
#define CLASS_3_27518451A20BB161_89__CTOR_OFFSET UNITYSDK_OFFSET(0x10BEDDE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_89_TypeDefinitionIndex = 45337;

class Class_3_27518451A20BB161_89 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4EE4EC468B898F75*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4EE4EC468B898F75* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4EE4EC468B898F75*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_89__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_89_ONTASKBEGIN_OFFSET))(this);
	}
};
