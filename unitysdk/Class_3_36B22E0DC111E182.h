#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_Unlock_Achievement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_36B22E0DC111E182_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAC9750)
#define CLASS_3_36B22E0DC111E182_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAC95E0)
#define CLASS_3_36B22E0DC111E182_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAC9700)
#define CLASS_3_36B22E0DC111E182_TICK_OFFSET UNITYSDK_OFFSET(0xBAC96A0)
#define CLASS_3_36B22E0DC111E182__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC95B0)
#define CLASS_3_36B22E0DC111E182___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAC97F0)
#define CLASS_3_36B22E0DC111E182___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xBAC9790)

inline static constexpr unsigned int Class_3_36B22E0DC111E182_TypeDefinitionIndex = 48281;

class Class_3_36B22E0DC111E182 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement*))((::PBYTE)hIl2Cpp + CLASS_3_36B22E0DC111E182__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36B22E0DC111E182_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_36B22E0DC111E182_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36B22E0DC111E182_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36B22E0DC111E182_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_36B22E0DC111E182___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36B22E0DC111E182___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
