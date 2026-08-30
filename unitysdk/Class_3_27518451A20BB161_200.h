#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9AD3C28FB195F602;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_200_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159A90B0)
#define CLASS_3_27518451A20BB161_200__CTOR_OFFSET UNITYSDK_OFFSET(0x159A9080)

inline static constexpr unsigned int Class_3_27518451A20BB161_200_TypeDefinitionIndex = 55422;

class Class_3_27518451A20BB161_200 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9AD3C28FB195F602*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9AD3C28FB195F602* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9AD3C28FB195F602*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_200__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_200_ONTASKBEGIN_OFFSET))(this);
	}
};
