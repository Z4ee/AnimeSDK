#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RogueAdvRoomCandyCrashPropEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E421F437E3983FEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17099D00)
#define CLASS_3_E421F437E3983FEB__CTOR_OFFSET UNITYSDK_OFFSET(0x17099CD0)

inline static constexpr unsigned int Class_3_E421F437E3983FEB_TypeDefinitionIndex = 58590;

class Class_3_E421F437E3983FEB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent*))((::PBYTE)hIl2Cpp + CLASS_3_E421F437E3983FEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E421F437E3983FEB_ONTASKBEGIN_OFFSET))(this);
	}
};
