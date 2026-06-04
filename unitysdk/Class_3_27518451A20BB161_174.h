#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1D71852209DB93FE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_174_METHOD_3_2638827D78DE1E10_OFFSET UNITYSDK_OFFSET(0xDE36B30)
#define CLASS_3_27518451A20BB161_174_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE368B0)
#define CLASS_3_27518451A20BB161_174__CTOR_OFFSET UNITYSDK_OFFSET(0xDE36880)

inline static constexpr unsigned int Class_3_27518451A20BB161_174_TypeDefinitionIndex = 52098;

class Class_3_27518451A20BB161_174 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1D71852209DB93FE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1D71852209DB93FE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1D71852209DB93FE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_174__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_174_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_2638827D78DE1E10(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_174_METHOD_3_2638827D78DE1E10_OFFSET))(this, a1);
	}
};
