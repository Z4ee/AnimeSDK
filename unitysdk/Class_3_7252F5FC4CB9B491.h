#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_3_2BE5039CEA912003;
namespace RPG::Client { class ST_Parkour_ModifyScore; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7252F5FC4CB9B491_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118FC2C0)
#define CLASS_3_7252F5FC4CB9B491_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118FC310)
#define CLASS_3_7252F5FC4CB9B491_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x118FC530)
#define CLASS_3_7252F5FC4CB9B491_TICK_OFFSET UNITYSDK_OFFSET(0x118FC630)
#define CLASS_3_7252F5FC4CB9B491__CTOR_OFFSET UNITYSDK_OFFSET(0x118FC290)
#define CLASS_3_7252F5FC4CB9B491___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118FC690)
#define CLASS_3_7252F5FC4CB9B491___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x118FC6E0)

inline static constexpr unsigned int Class_3_7252F5FC4CB9B491_TypeDefinitionIndex = 42157;

class Class_3_7252F5FC4CB9B491 : public ::RPG::GameCore::ST_Task_1<::RPG::Client::ST_Parkour_ModifyScore*>
{
public:
	::Class_3_2BE5039CEA912003* Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ModifyScore* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ModifyScore*))((::PBYTE)hIl2Cpp + CLASS_3_7252F5FC4CB9B491__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7252F5FC4CB9B491_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7252F5FC4CB9B491_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7252F5FC4CB9B491_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7252F5FC4CB9B491_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7252F5FC4CB9B491___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7252F5FC4CB9B491___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
