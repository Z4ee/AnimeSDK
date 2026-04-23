#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_9A097580DF02CED3;
namespace RPG::GameCore { class ST_Side_SearchSmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0889C2B20F5B917B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11AE7D50)
#define CLASS_3_0889C2B20F5B917B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11AE7EC0)
#define CLASS_3_0889C2B20F5B917B_TICK_OFFSET UNITYSDK_OFFSET(0x11AE7DB0)
#define CLASS_3_0889C2B20F5B917B__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE7CF0)
#define CLASS_3_0889C2B20F5B917B___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11AE7F10)

inline static constexpr unsigned int Class_3_0889C2B20F5B917B_TypeDefinitionIndex = 48236;

class Class_3_0889C2B20F5B917B : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_SearchSmartObject*>
{
public:
	::Class_2_9A097580DF02CED3* Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_SearchSmartObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_SearchSmartObject*))((::PBYTE)hIl2Cpp + CLASS_3_0889C2B20F5B917B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0889C2B20F5B917B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0889C2B20F5B917B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0889C2B20F5B917B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0889C2B20F5B917B___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
