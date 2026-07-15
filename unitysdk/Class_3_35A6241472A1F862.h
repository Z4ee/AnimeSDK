#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_21055A9FA74B791E;
namespace RPG::GameCore { class ST_Main_HangUpByLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_35A6241472A1F862_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15FA1BC0)
#define CLASS_3_35A6241472A1F862_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15FA1C50)
#define CLASS_3_35A6241472A1F862__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA1B00)

inline static constexpr unsigned int Class_3_35A6241472A1F862_TypeDefinitionIndex = 49833;

class Class_3_35A6241472A1F862 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_HangUpByLevel*>
{
public:
	::Class_2_21055A9FA74B791E* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_HangUpByLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_HangUpByLevel*))((::PBYTE)hIl2Cpp + CLASS_3_35A6241472A1F862__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_35A6241472A1F862_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_35A6241472A1F862_ONTASKRESET_OFFSET))(this);
	}
};
