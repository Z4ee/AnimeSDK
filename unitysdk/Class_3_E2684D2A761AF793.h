#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_HipplenBallFetchStopRun; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E2684D2A761AF793_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9978710)
#define CLASS_3_E2684D2A761AF793_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9978490)
#define CLASS_3_E2684D2A761AF793_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x99786C0)
#define CLASS_3_E2684D2A761AF793_TICK_OFFSET UNITYSDK_OFFSET(0x9978660)
#define CLASS_3_E2684D2A761AF793__CTOR_OFFSET UNITYSDK_OFFSET(0x9978460)
#define CLASS_3_E2684D2A761AF793___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99787B0)
#define CLASS_3_E2684D2A761AF793___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9978750)

inline static constexpr unsigned int Class_3_E2684D2A761AF793_TypeDefinitionIndex = 48268;

class Class_3_E2684D2A761AF793 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_HipplenBallFetchStopRun*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun*))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
