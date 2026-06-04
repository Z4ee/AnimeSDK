#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroSetupCameraAxis; }

#define CLASS_3_72DA7A57C89AF0AF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA5FB150)
#define CLASS_3_72DA7A57C89AF0AF__CTOR_OFFSET UNITYSDK_OFFSET(0xA5FB120)

inline static constexpr unsigned int Class_3_72DA7A57C89AF0AF_TypeDefinitionIndex = 55097;

class Class_3_72DA7A57C89AF0AF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroSetupCameraAxis*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroSetupCameraAxis* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroSetupCameraAxis*))((::PBYTE)hIl2Cpp + CLASS_3_72DA7A57C89AF0AF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72DA7A57C89AF0AF_ONTASKBEGIN_OFFSET))(this);
	}
};
