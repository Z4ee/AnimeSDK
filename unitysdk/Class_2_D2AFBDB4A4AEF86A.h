#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_D2AFBDB4A4AEF86A_METHOD_2_11323F163214EF21_OFFSET UNITYSDK_OFFSET(0x886F0F0)
#define CLASS_2_D2AFBDB4A4AEF86A__CTOR_OFFSET UNITYSDK_OFFSET(0x886F0E0)

inline static constexpr unsigned int Class_2_D2AFBDB4A4AEF86A_TypeDefinitionIndex = 61563;

class Class_2_D2AFBDB4A4AEF86A : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_D2AFBDB4A4AEF86A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_11323F163214EF21(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_D2AFBDB4A4AEF86A_METHOD_2_11323F163214EF21_OFFSET))(this, a1, a2);
	}
};
