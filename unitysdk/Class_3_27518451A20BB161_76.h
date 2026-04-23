#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_374A84807E40C3C0;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_76_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x111A28F0)
#define CLASS_3_27518451A20BB161_76__CTOR_OFFSET UNITYSDK_OFFSET(0x111A28C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_76_TypeDefinitionIndex = 49625;

class Class_3_27518451A20BB161_76 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_374A84807E40C3C0*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_374A84807E40C3C0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_374A84807E40C3C0*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_76_ONTASKBEGIN_OFFSET))(this);
	}
};
