#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_23D2CD7D9920A53A.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixTaskC; }

#define CLASS_3_99F48FA061B7E65C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB816B0)
#define CLASS_3_99F48FA061B7E65C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB815B0)
#define CLASS_3_99F48FA061B7E65C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAB81660)
#define CLASS_3_99F48FA061B7E65C_TICK_OFFSET UNITYSDK_OFFSET(0xAB81600)
#define CLASS_3_99F48FA061B7E65C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB81530)
#define CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB817C0)
#define CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB816F0)
#define CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAB81760)
#define CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAB81700)

inline static constexpr unsigned int Class_3_99F48FA061B7E65C_TypeDefinitionIndex = 52106;

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

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_99F48FA061B7E65C___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
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
