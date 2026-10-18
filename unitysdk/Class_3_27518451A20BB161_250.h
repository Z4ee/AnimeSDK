#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2B3857F31322B55C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_250_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162FC850)
#define CLASS_3_27518451A20BB161_250__CTOR_OFFSET UNITYSDK_OFFSET(0x162FC820)

inline static constexpr unsigned int Class_3_27518451A20BB161_250_TypeDefinitionIndex = 55599;

class Class_3_27518451A20BB161_250 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2B3857F31322B55C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2B3857F31322B55C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2B3857F31322B55C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_250__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_250_ONTASKBEGIN_OFFSET))(this);
	}
};
