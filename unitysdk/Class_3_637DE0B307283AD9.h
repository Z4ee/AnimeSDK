#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_21055A9FA74B791E;
namespace RPG::GameCore { class ST_Side_AttachAIStatus; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_637DE0B307283AD9_METHOD_3_24BDA33538434DCF_OFFSET UNITYSDK_OFFSET(0xB335B30)
#define CLASS_3_637DE0B307283AD9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3358D0)
#define CLASS_3_637DE0B307283AD9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB335920)
#define CLASS_3_637DE0B307283AD9_TICK_OFFSET UNITYSDK_OFFSET(0xB335CC0)
#define CLASS_3_637DE0B307283AD9__CTOR_OFFSET UNITYSDK_OFFSET(0xB335810)

inline static constexpr unsigned int Class_3_637DE0B307283AD9_TypeDefinitionIndex = 52225;

class Class_3_637DE0B307283AD9 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_AttachAIStatus*>
{
public:
	::Class_2_21055A9FA74B791E* PJLGDHFHFLO; // 0x28
	::System::Boolean GMIJEMAHBKE; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_AttachAIStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_AttachAIStatus*))((::PBYTE)hIl2Cpp + CLASS_3_637DE0B307283AD9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_637DE0B307283AD9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_637DE0B307283AD9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_637DE0B307283AD9_TICK_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_24BDA33538434DCF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_637DE0B307283AD9_METHOD_3_24BDA33538434DCF_OFFSET))(this);
	}
};
