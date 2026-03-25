#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowSpeicalAvatarHUDContainerPanel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_557227DB8FDCCBAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115A55F0)
#define CLASS_3_557227DB8FDCCBAA__CTOR_OFFSET UNITYSDK_OFFSET(0x115A55C0)

inline static constexpr unsigned int Class_3_557227DB8FDCCBAA_TypeDefinitionIndex = 44547;

class Class_3_557227DB8FDCCBAA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowSpeicalAvatarHUDContainerPanel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSpeicalAvatarHUDContainerPanel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSpeicalAvatarHUDContainerPanel*))((::PBYTE)hIl2Cpp + CLASS_3_557227DB8FDCCBAA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_557227DB8FDCCBAA_ONTASKBEGIN_OFFSET))(this);
	}
};
