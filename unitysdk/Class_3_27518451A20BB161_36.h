#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1E6DFDCE6E0F63F7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_36_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D70560)
#define CLASS_3_27518451A20BB161_36__CTOR_OFFSET UNITYSDK_OFFSET(0x16D70530)

inline static constexpr unsigned int Class_3_27518451A20BB161_36_TypeDefinitionIndex = 50445;

class Class_3_27518451A20BB161_36 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1E6DFDCE6E0F63F7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1E6DFDCE6E0F63F7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1E6DFDCE6E0F63F7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_36_ONTASKBEGIN_OFFSET))(this);
	}
};
