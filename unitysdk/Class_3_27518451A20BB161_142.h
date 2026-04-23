#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D8668F6180CE913B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_142_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA55E150)
#define CLASS_3_27518451A20BB161_142__CTOR_OFFSET UNITYSDK_OFFSET(0xA55E120)

inline static constexpr unsigned int Class_3_27518451A20BB161_142_TypeDefinitionIndex = 51215;

class Class_3_27518451A20BB161_142 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D8668F6180CE913B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D8668F6180CE913B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D8668F6180CE913B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_142__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_142_ONTASKBEGIN_OFFSET))(this);
	}
};
