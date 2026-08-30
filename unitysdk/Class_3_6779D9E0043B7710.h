#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace RPG::GameCore { class ST_Side_Hipplen_Override_Interact_Like_Type; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6779D9E0043B7710_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDA3120)
#define CLASS_3_6779D9E0043B7710_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDA2E30)
#define CLASS_3_6779D9E0043B7710_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBDA3060)
#define CLASS_3_6779D9E0043B7710_TICK_OFFSET UNITYSDK_OFFSET(0xBDA3000)
#define CLASS_3_6779D9E0043B7710__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA2E00)

inline static constexpr unsigned int Class_3_6779D9E0043B7710_TypeDefinitionIndex = 52570;

class Class_3_6779D9E0043B7710 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type*>
{
public:
	::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* FGDGEAFMILC; // 0x28

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
};
