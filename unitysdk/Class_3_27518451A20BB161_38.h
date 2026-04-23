#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_97BB4FA12F9980DF_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_38_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9352110)
#define CLASS_3_27518451A20BB161_38_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9352150)
#define CLASS_3_27518451A20BB161_38_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9352400)
#define CLASS_3_27518451A20BB161_38_TICK_OFFSET UNITYSDK_OFFSET(0x9352450)
#define CLASS_3_27518451A20BB161_38__CTOR_OFFSET UNITYSDK_OFFSET(0x93520E0)
#define CLASS_3_27518451A20BB161_38___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93524B0)
#define CLASS_3_27518451A20BB161_38___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x93524F0)
#define CLASS_3_27518451A20BB161_38___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9352540)

inline static constexpr unsigned int Class_3_27518451A20BB161_38_TypeDefinitionIndex = 48762;

class Class_3_27518451A20BB161_38 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_97BB4FA12F9980DF_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_97BB4FA12F9980DF_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_97BB4FA12F9980DF_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
