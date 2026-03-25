#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_9D4115B8F02ECDA2_METHOD_2_249B3B91BBA5228A_OFFSET UNITYSDK_OFFSET(0x11422130)
#define CLASS_2_9D4115B8F02ECDA2__CTOR_OFFSET UNITYSDK_OFFSET(0x11422120)

inline static constexpr unsigned int Class_2_9D4115B8F02ECDA2_TypeDefinitionIndex = 61565;

class Class_2_9D4115B8F02ECDA2 : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_9D4115B8F02ECDA2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_249B3B91BBA5228A(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_9D4115B8F02ECDA2_METHOD_2_249B3B91BBA5228A_OFFSET))(this, a1, a2);
	}
};
