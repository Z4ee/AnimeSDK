#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_97BB4FA12F9980DF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_34_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DB1060)
#define CLASS_3_27518451A20BB161_34_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8DB10A0)
#define CLASS_3_27518451A20BB161_34_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8DB1340)
#define CLASS_3_27518451A20BB161_34_TICK_OFFSET UNITYSDK_OFFSET(0x8DB1390)
#define CLASS_3_27518451A20BB161_34__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB1030)
#define CLASS_3_27518451A20BB161_34___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DB13F0)
#define CLASS_3_27518451A20BB161_34___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8DB1430)
#define CLASS_3_27518451A20BB161_34___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8DB1480)

inline static constexpr unsigned int Class_3_27518451A20BB161_34_TypeDefinitionIndex = 42780;

class Class_3_27518451A20BB161_34 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_97BB4FA12F9980DF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_97BB4FA12F9980DF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_97BB4FA12F9980DF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_34_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_34_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_34_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_34_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_34___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_34___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_34___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
