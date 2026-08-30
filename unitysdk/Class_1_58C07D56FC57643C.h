#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }

#define CLASS_1_58C07D56FC57643C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44BBD0)

inline static constexpr unsigned int Class_1_58C07D56FC57643C_TypeDefinitionIndex = 69746;

class Class_1_58C07D56FC57643C : public ::System::Object
{
public:
	::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* LDANGAKKLHM; // 0x10
	::EnviromentSystem::EnviromentProfile* EJHLGMEBPBG; // 0x18
	::System::Int32 PHCHCBKAEFH; // 0x20
	::RPG::GameCore::EnviromentControlPriority JGLBEJOIDLK; // 0x24

	::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::RPG::GameCore::EnviromentControlPriority a2, ::System::Int32 a3, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a4)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::RPG::GameCore::EnviromentControlPriority, ::System::Int32, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_58C07D56FC57643C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
