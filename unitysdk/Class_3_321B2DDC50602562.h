#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchOnPartialFlipDevice; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_321B2DDC50602562_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9C69B50)
#define CLASS_3_321B2DDC50602562__CTOR_OFFSET UNITYSDK_OFFSET(0x9C69B20)

inline static constexpr unsigned int Class_3_321B2DDC50602562_TypeDefinitionIndex = 42727;

class Class_3_321B2DDC50602562 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchOnPartialFlipDevice*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchOnPartialFlipDevice* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchOnPartialFlipDevice*))((::PBYTE)hIl2Cpp + CLASS_3_321B2DDC50602562__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_321B2DDC50602562_ONTASKBEGIN_OFFSET))(this);
	}
};
