#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5DA6116C23909A49;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_27518451A20BB161_METHOD_3_2472FC4695028AF0_OFFSET UNITYSDK_OFFSET(0x19AF5A30)
#define CLASS_3_27518451A20BB161_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AF5900)
#define CLASS_3_27518451A20BB161__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF58D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_TypeDefinitionIndex = 52638;

class Class_3_27518451A20BB161 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5DA6116C23909A49*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5DA6116C23909A49* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5DA6116C23909A49*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_2472FC4695028AF0(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_METHOD_3_2472FC4695028AF0_OFFSET))(a1);
	}
};
