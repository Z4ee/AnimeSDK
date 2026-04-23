#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_23D2CD7D9920A53A.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixTaskC; }

#define CLASS_3_99F48FA061B7E65C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D773E0)
#define CLASS_3_99F48FA061B7E65C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11D772E0)
#define CLASS_3_99F48FA061B7E65C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11D77390)
#define CLASS_3_99F48FA061B7E65C_TICK_OFFSET UNITYSDK_OFFSET(0x11D77330)
#define CLASS_3_99F48FA061B7E65C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D77260)
#define CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D77510)
#define CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11D77420)
#define CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11D774A0)
#define CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11D77430)

inline static constexpr unsigned int Class_3_99F48FA061B7E65C_TypeDefinitionIndex = 51438;

class Class_3_99F48FA061B7E65C : public ::Class_2_23D2CD7D9920A53A
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixTaskC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixTaskC*))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
