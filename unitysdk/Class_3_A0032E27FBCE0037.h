#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchAudioListenerToCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A0032E27FBCE0037_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A774CD0)
#define CLASS_3_A0032E27FBCE0037__CTOR_OFFSET UNITYSDK_OFFSET(0x1A774CA0)

inline static constexpr unsigned int Class_3_A0032E27FBCE0037_TypeDefinitionIndex = 58889;

class Class_3_A0032E27FBCE0037 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchAudioListenerToCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchAudioListenerToCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchAudioListenerToCamera*))((::PBYTE)hIl2Cpp + CLASS_3_A0032E27FBCE0037__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0032E27FBCE0037_ONTASKBEGIN_OFFSET))(this);
	}
};
