#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4C9F050D2925BB87;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A11870)
#define CLASS_3_27518451A20BB161_58__CTOR_OFFSET UNITYSDK_OFFSET(0x13A11840)

inline static constexpr unsigned int Class_3_27518451A20BB161_58_TypeDefinitionIndex = 49560;

class Class_3_27518451A20BB161_58 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4C9F050D2925BB87*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4C9F050D2925BB87* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4C9F050D2925BB87*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_58_ONTASKBEGIN_OFFSET))(this);
	}
};
