#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ConvinceMoveTurn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_04F9B53E1C0C92D6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89B3560)
#define CLASS_3_04F9B53E1C0C92D6_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x89B3730)
#define CLASS_3_04F9B53E1C0C92D6__CTOR_OFFSET UNITYSDK_OFFSET(0x89B3530)

inline static constexpr unsigned int Class_3_04F9B53E1C0C92D6_TypeDefinitionIndex = 42661;

class Class_3_04F9B53E1C0C92D6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ConvinceMoveTurn*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceMoveTurn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceMoveTurn*))((::PBYTE)hIl2Cpp + CLASS_3_04F9B53E1C0C92D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04F9B53E1C0C92D6_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_3_04F9B53E1C0C92D6_SETNEXTTASK_OFFSET))(this, a1);
	}
};
