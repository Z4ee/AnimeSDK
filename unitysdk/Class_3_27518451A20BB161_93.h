#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3BD70AC0AEB18F06;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_93_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159DD810)
#define CLASS_3_27518451A20BB161_93__CTOR_OFFSET UNITYSDK_OFFSET(0x159DD7E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_93_TypeDefinitionIndex = 52974;

class Class_3_27518451A20BB161_93 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3BD70AC0AEB18F06*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3BD70AC0AEB18F06* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3BD70AC0AEB18F06*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_93__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_93_ONTASKBEGIN_OFFSET))(this);
	}
};
