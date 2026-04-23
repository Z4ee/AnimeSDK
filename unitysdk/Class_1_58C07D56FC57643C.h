#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }

#define CLASS_1_58C07D56FC57643C__CTOR_OFFSET UNITYSDK_OFFSET(0x123C3C50)

inline static constexpr unsigned int Class_1_58C07D56FC57643C_TypeDefinitionIndex = 64317;

class Class_1_58C07D56FC57643C : public ::System::Object
{
public:
	::EnviromentSystem::EnviromentProfile* Field_1_0; // 0x10
	::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* Field_1_3; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::RPG::GameCore::EnviromentControlPriority Field_1_1; // 0x24

	::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::RPG::GameCore::EnviromentControlPriority a2, ::System::Int32 a3, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a4)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::RPG::GameCore::EnviromentControlPriority, ::System::Int32, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_58C07D56FC57643C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
