#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Main_TeleportToPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_54E2FBB2A1D0A21B_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB8B9130)
#define CLASS_3_54E2FBB2A1D0A21B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8B8A20)
#define CLASS_3_54E2FBB2A1D0A21B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8B9180)
#define CLASS_3_54E2FBB2A1D0A21B__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B89F0)

inline static constexpr unsigned int Class_3_54E2FBB2A1D0A21B_TypeDefinitionIndex = 52506;

class Class_3_54E2FBB2A1D0A21B : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_TeleportToPosition*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_TeleportToPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_TeleportToPosition*))((::PBYTE)hIl2Cpp + CLASS_3_54E2FBB2A1D0A21B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54E2FBB2A1D0A21B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54E2FBB2A1D0A21B_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54E2FBB2A1D0A21B_ONTASKRESET_OFFSET))(this);
	}
};
