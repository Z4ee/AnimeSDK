#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BB620C4A1DC7FE3E_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_157_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D5C7F0)
#define CLASS_3_27518451A20BB161_157__CTOR_OFFSET UNITYSDK_OFFSET(0x16D5C7C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_157_TypeDefinitionIndex = 52453;

class Class_3_27518451A20BB161_157 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BB620C4A1DC7FE3E_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BB620C4A1DC7FE3E_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BB620C4A1DC7FE3E_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_157__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_157_ONTASKBEGIN_OFFSET))(this);
	}
};
