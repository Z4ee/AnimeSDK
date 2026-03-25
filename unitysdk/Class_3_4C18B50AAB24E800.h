#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvTrackNpcSoundTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4C18B50AAB24E800_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B237E0)
#define CLASS_3_4C18B50AAB24E800__CTOR_OFFSET UNITYSDK_OFFSET(0x10B237B0)

inline static constexpr unsigned int Class_3_4C18B50AAB24E800_TypeDefinitionIndex = 42527;

class Class_3_4C18B50AAB24E800 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvTrackNpcSoundTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTrackNpcSoundTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTrackNpcSoundTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_4C18B50AAB24E800__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C18B50AAB24E800_ONTASKBEGIN_OFFSET))(this);
	}
};
