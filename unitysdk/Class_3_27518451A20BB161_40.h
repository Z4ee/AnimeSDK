#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_97BB4FA12F9980DF_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_40_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BA43C0)
#define CLASS_3_27518451A20BB161_40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13BA4400)
#define CLASS_3_27518451A20BB161_40_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13BA46B0)
#define CLASS_3_27518451A20BB161_40_TICK_OFFSET UNITYSDK_OFFSET(0x13BA4700)
#define CLASS_3_27518451A20BB161_40__CTOR_OFFSET UNITYSDK_OFFSET(0x13BA4390)
#define CLASS_3_27518451A20BB161_40___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BA4760)
#define CLASS_3_27518451A20BB161_40___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13BA47A0)
#define CLASS_3_27518451A20BB161_40___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13BA47F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_40_TypeDefinitionIndex = 49428;

class Class_3_27518451A20BB161_40 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_97BB4FA12F9980DF_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_97BB4FA12F9980DF_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_97BB4FA12F9980DF_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
