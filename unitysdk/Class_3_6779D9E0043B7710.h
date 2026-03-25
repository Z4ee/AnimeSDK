#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace RPG::GameCore { class ST_Side_Hipplen_Override_Interact_Like_Type; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6779D9E0043B7710_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A2D030)
#define CLASS_3_6779D9E0043B7710_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A2CD80)
#define CLASS_3_6779D9E0043B7710_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A2CF70)
#define CLASS_3_6779D9E0043B7710_TICK_OFFSET UNITYSDK_OFFSET(0x10A2CF10)
#define CLASS_3_6779D9E0043B7710__CTOR_OFFSET UNITYSDK_OFFSET(0x10A2CD50)
#define CLASS_3_6779D9E0043B7710___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A2D0D0)
#define CLASS_3_6779D9E0043B7710___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10A2D070)

inline static constexpr unsigned int Class_3_6779D9E0043B7710_TypeDefinitionIndex = 42312;

class Class_3_6779D9E0043B7710 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type*>
{
public:
	::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type*))((::PBYTE)hIl2Cpp + CLASS_3_6779D9E0043B7710__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6779D9E0043B7710_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6779D9E0043B7710_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6779D9E0043B7710_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6779D9E0043B7710_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6779D9E0043B7710___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6779D9E0043B7710___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
