#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6BA10DC46C47290E_9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_200_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C87590)
#define CLASS_3_27518451A20BB161_200__CTOR_OFFSET UNITYSDK_OFFSET(0x17C87560)

inline static constexpr unsigned int Class_3_27518451A20BB161_200_TypeDefinitionIndex = 52825;

class Class_3_27518451A20BB161_200 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6BA10DC46C47290E_9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6BA10DC46C47290E_9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6BA10DC46C47290E_9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_200__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_200_ONTASKBEGIN_OFFSET))(this);
	}
};
