#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPlayerEnableIdleShow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_01B1ACF7D883294A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x151FBDC0)
#define CLASS_3_01B1ACF7D883294A__CTOR_OFFSET UNITYSDK_OFFSET(0x151FBD90)

inline static constexpr unsigned int Class_3_01B1ACF7D883294A_TypeDefinitionIndex = 52742;

class Class_3_01B1ACF7D883294A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPlayerEnableIdleShow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerEnableIdleShow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerEnableIdleShow*))((::PBYTE)hIl2Cpp + CLASS_3_01B1ACF7D883294A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01B1ACF7D883294A_ONTASKBEGIN_OFFSET))(this);
	}
};
