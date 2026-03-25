#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class PlanetFesAvatarStopMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6D317A26D69DD876_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11109530)
#define CLASS_3_6D317A26D69DD876__CTOR_OFFSET UNITYSDK_OFFSET(0x11109500)

inline static constexpr unsigned int Class_3_6D317A26D69DD876_TypeDefinitionIndex = 46997;

class Class_3_6D317A26D69DD876 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::PlanetFesAvatarStopMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlanetFesAvatarStopMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlanetFesAvatarStopMove*))((::PBYTE)hIl2Cpp + CLASS_3_6D317A26D69DD876__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D317A26D69DD876_ONTASKBEGIN_OFFSET))(this);
	}
};
