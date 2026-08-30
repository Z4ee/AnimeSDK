#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_3D58785602145ACE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4E81E78F20B89961_METHOD_3_B10FB9597F17FCB4_OFFSET UNITYSDK_OFFSET(0x18854FB0)
#define CLASS_3_4E81E78F20B89961_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18854E60)
#define CLASS_3_4E81E78F20B89961__CTOR_OFFSET UNITYSDK_OFFSET(0x18854DE0)
#define CLASS_3_4E81E78F20B89961__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x188551B0)

inline static constexpr unsigned int Class_3_4E81E78F20B89961_TypeDefinitionIndex = 53711;

class Class_3_4E81E78F20B89961 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_3D58785602145ACE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3D58785602145ACE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3D58785602145ACE*))((::PBYTE)hIl2Cpp + CLASS_3_4E81E78F20B89961__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E81E78F20B89961_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_B10FB9597F17FCB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E81E78F20B89961_METHOD_3_B10FB9597F17FCB4_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E81E78F20B89961__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
