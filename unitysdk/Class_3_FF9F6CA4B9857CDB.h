#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Main_LittleGame_SelfDestory; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FF9F6CA4B9857CDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A6CBC0)
#define CLASS_3_FF9F6CA4B9857CDB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16A6CC30)
#define CLASS_3_FF9F6CA4B9857CDB__CTOR_OFFSET UNITYSDK_OFFSET(0x16A6CB90)

inline static constexpr unsigned int Class_3_FF9F6CA4B9857CDB_TypeDefinitionIndex = 49773;

class Class_3_FF9F6CA4B9857CDB : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_LittleGame_SelfDestory*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory*))((::PBYTE)hIl2Cpp + CLASS_3_FF9F6CA4B9857CDB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF9F6CA4B9857CDB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF9F6CA4B9857CDB_ONTASKRESET_OFFSET))(this);
	}
};
