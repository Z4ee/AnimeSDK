#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Main_LittleGame_MoveToPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1DA23FF60E13C7C1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB282550)
#define CLASS_3_1DA23FF60E13C7C1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2825A0)
#define CLASS_3_1DA23FF60E13C7C1__CTOR_OFFSET UNITYSDK_OFFSET(0xB282520)

inline static constexpr unsigned int Class_3_1DA23FF60E13C7C1_TypeDefinitionIndex = 42162;

class Class_3_1DA23FF60E13C7C1 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_LittleGame_MoveToPosition*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition*))((::PBYTE)hIl2Cpp + CLASS_3_1DA23FF60E13C7C1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DA23FF60E13C7C1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DA23FF60E13C7C1_ONTASKRESET_OFFSET))(this);
	}
};
