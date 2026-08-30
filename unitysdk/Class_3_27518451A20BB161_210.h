#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4CC224F2AF337042;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_210_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B85330)
#define CLASS_3_27518451A20BB161_210__CTOR_OFFSET UNITYSDK_OFFSET(0x15B85300)

inline static constexpr unsigned int Class_3_27518451A20BB161_210_TypeDefinitionIndex = 55467;

class Class_3_27518451A20BB161_210 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4CC224F2AF337042*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4CC224F2AF337042* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4CC224F2AF337042*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_210__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_210_ONTASKBEGIN_OFFSET))(this);
	}
};
