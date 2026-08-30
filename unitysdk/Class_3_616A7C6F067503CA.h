#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class ST_Side_MuteAlertValueDecline; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_616A7C6F067503CA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFBCAD0)
#define CLASS_3_616A7C6F067503CA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFBCB60)
#define CLASS_3_616A7C6F067503CA__CTOR_OFFSET UNITYSDK_OFFSET(0xBFBCA10)

inline static constexpr unsigned int Class_3_616A7C6F067503CA_TypeDefinitionIndex = 52522;

class Class_3_616A7C6F067503CA : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_MuteAlertValueDecline*>
{
public:
	::RPG::GameCore::NPCComponent* DDFNJFHPMJF; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_MuteAlertValueDecline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_MuteAlertValueDecline*))((::PBYTE)hIl2Cpp + CLASS_3_616A7C6F067503CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_616A7C6F067503CA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_616A7C6F067503CA_ONTASKRESET_OFFSET))(this);
	}
};
