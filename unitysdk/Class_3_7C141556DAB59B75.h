#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Main_TeleportToBornPos; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C141556DAB59B75_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8FE03C0)
#define CLASS_3_7C141556DAB59B75_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FE0240)
#define CLASS_3_7C141556DAB59B75_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8FE0410)
#define CLASS_3_7C141556DAB59B75__CTOR_OFFSET UNITYSDK_OFFSET(0x8FE0210)

inline static constexpr unsigned int Class_3_7C141556DAB59B75_TypeDefinitionIndex = 42247;

class Class_3_7C141556DAB59B75 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_TeleportToBornPos*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_TeleportToBornPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_TeleportToBornPos*))((::PBYTE)hIl2Cpp + CLASS_3_7C141556DAB59B75__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C141556DAB59B75_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C141556DAB59B75_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C141556DAB59B75_ONTASKRESET_OFFSET))(this);
	}
};
