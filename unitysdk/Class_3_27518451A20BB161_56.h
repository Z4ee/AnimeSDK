#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_705A38CA30C2C8E8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_56_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13742BA0)
#define CLASS_3_27518451A20BB161_56__CTOR_OFFSET UNITYSDK_OFFSET(0x13742B70)

inline static constexpr unsigned int Class_3_27518451A20BB161_56_TypeDefinitionIndex = 49516;

class Class_3_27518451A20BB161_56 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_705A38CA30C2C8E8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_705A38CA30C2C8E8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_705A38CA30C2C8E8*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_56__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_56_ONTASKBEGIN_OFFSET))(this);
	}
};
