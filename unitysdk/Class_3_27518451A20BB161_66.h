#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_019A582638BC3D1A_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_66_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A3A5E0)
#define CLASS_3_27518451A20BB161_66_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A3A620)
#define CLASS_3_27518451A20BB161_66_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A3A8D0)
#define CLASS_3_27518451A20BB161_66_TICK_OFFSET UNITYSDK_OFFSET(0x15A3A920)
#define CLASS_3_27518451A20BB161_66__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3A5B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_66_TypeDefinitionIndex = 53145;

class Class_3_27518451A20BB161_66 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_019A582638BC3D1A_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_019A582638BC3D1A_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_019A582638BC3D1A_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_66__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_66_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_66_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_66_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_66_TICK_OFFSET))(this, a1);
	}
};
