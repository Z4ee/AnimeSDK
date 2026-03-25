#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_23D2CD7D9920A53A.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixTaskB; }

#define CLASS_3_EECDAEEEADAB2602_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A97DD0)
#define CLASS_3_EECDAEEEADAB2602_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A97CD0)
#define CLASS_3_EECDAEEEADAB2602_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8A97D80)
#define CLASS_3_EECDAEEEADAB2602_TICK_OFFSET UNITYSDK_OFFSET(0x8A97D20)
#define CLASS_3_EECDAEEEADAB2602__CTOR_OFFSET UNITYSDK_OFFSET(0x8A97C50)
#define CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A97F00)
#define CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A97E10)
#define CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8A97E90)
#define CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8A97E20)

inline static constexpr unsigned int Class_3_EECDAEEEADAB2602_TypeDefinitionIndex = 44693;

class Class_3_EECDAEEEADAB2602 : public ::Class_2_23D2CD7D9920A53A
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixTaskB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixTaskB*))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
