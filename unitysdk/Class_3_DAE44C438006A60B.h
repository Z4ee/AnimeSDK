#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class ST_Main_HangUpByLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DAE44C438006A60B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14530C80)
#define CLASS_3_DAE44C438006A60B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14530D10)
#define CLASS_3_DAE44C438006A60B__CTOR_OFFSET UNITYSDK_OFFSET(0x14530C20)

inline static constexpr unsigned int Class_3_DAE44C438006A60B_TypeDefinitionIndex = 48820;

class Class_3_DAE44C438006A60B : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_HangUpByLevel*>
{
public:
	::Class_2_9D4DD2F4235F8658* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_HangUpByLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_HangUpByLevel*))((::PBYTE)hIl2Cpp + CLASS_3_DAE44C438006A60B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAE44C438006A60B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAE44C438006A60B_ONTASKRESET_OFFSET))(this);
	}
};
