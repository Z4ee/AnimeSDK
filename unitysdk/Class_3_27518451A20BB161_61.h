#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BE08264F8CDC94EB;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_61_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3D52F0)
#define CLASS_3_27518451A20BB161_61__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D52C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_61_TypeDefinitionIndex = 49736;

class Class_3_27518451A20BB161_61 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BE08264F8CDC94EB*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BE08264F8CDC94EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BE08264F8CDC94EB*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_61__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_61_ONTASKBEGIN_OFFSET))(this);
	}
};
