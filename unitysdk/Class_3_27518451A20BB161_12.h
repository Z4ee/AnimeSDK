#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5CA0943AF2D2051D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_12_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA8DD50)
#define CLASS_3_27518451A20BB161_12__CTOR_OFFSET UNITYSDK_OFFSET(0xAA8DD20)

inline static constexpr unsigned int Class_3_27518451A20BB161_12_TypeDefinitionIndex = 49391;

class Class_3_27518451A20BB161_12 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5CA0943AF2D2051D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5CA0943AF2D2051D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5CA0943AF2D2051D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_12_ONTASKBEGIN_OFFSET))(this);
	}
};
