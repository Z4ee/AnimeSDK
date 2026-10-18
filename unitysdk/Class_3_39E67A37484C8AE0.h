#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayVoice; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_39E67A37484C8AE0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1A7670)
#define CLASS_3_39E67A37484C8AE0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1A77D0)
#define CLASS_3_39E67A37484C8AE0__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A7640)

inline static constexpr unsigned int Class_3_39E67A37484C8AE0_TypeDefinitionIndex = 56379;

class Class_3_39E67A37484C8AE0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayVoice*>
{
public:
	::RPG::GameCore::GameEntity* ONIACPBDNMH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayVoice* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayVoice*))((::PBYTE)hIl2Cpp + CLASS_3_39E67A37484C8AE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39E67A37484C8AE0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39E67A37484C8AE0_ONTASKBEGIN_OFFSET))(this);
	}
};
