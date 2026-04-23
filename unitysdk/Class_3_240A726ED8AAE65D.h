#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEntityResetCameraRootTransform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_240A726ED8AAE65D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118DD590)
#define CLASS_3_240A726ED8AAE65D__CTOR_OFFSET UNITYSDK_OFFSET(0x118DD560)

inline static constexpr unsigned int Class_3_240A726ED8AAE65D_TypeDefinitionIndex = 48342;

class Class_3_240A726ED8AAE65D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEntityResetCameraRootTransform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityResetCameraRootTransform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityResetCameraRootTransform*))((::PBYTE)hIl2Cpp + CLASS_3_240A726ED8AAE65D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_240A726ED8AAE65D_ONTASKBEGIN_OFFSET))(this);
	}
};
