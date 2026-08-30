#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0CA5E68B93B46F18;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_75_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB91F40)
#define CLASS_3_27518451A20BB161_75__CTOR_OFFSET UNITYSDK_OFFSET(0xBB91F10)

inline static constexpr unsigned int Class_3_27518451A20BB161_75_TypeDefinitionIndex = 53180;

class Class_3_27518451A20BB161_75 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0CA5E68B93B46F18*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0CA5E68B93B46F18* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0CA5E68B93B46F18*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_75__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_75_ONTASKBEGIN_OFFSET))(this);
	}
};
