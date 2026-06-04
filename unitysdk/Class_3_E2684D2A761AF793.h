#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_HipplenBallFetchStopRun; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E2684D2A761AF793_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141319F0)
#define CLASS_3_E2684D2A761AF793_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14131770)
#define CLASS_3_E2684D2A761AF793_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x141319A0)
#define CLASS_3_E2684D2A761AF793_TICK_OFFSET UNITYSDK_OFFSET(0x14131940)
#define CLASS_3_E2684D2A761AF793__CTOR_OFFSET UNITYSDK_OFFSET(0x14131740)
#define CLASS_3_E2684D2A761AF793___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14131A90)
#define CLASS_3_E2684D2A761AF793___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x14131A30)

inline static constexpr unsigned int Class_3_E2684D2A761AF793_TypeDefinitionIndex = 48892;

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

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
