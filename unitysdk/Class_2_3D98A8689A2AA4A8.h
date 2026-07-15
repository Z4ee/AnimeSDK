#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_3D98A8689A2AA4A8_METHOD_2_5AD3C2ADBFDB01DE_OFFSET UNITYSDK_OFFSET(0x16DD71F0)
#define CLASS_2_3D98A8689A2AA4A8__CTOR_OFFSET UNITYSDK_OFFSET(0x16DD71D0)

inline static constexpr unsigned int Class_2_3D98A8689A2AA4A8_TypeDefinitionIndex = 71408;

class Class_2_3D98A8689A2AA4A8 : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_3D98A8689A2AA4A8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AD3C2ADBFDB01DE(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_3D98A8689A2AA4A8_METHOD_2_5AD3C2ADBFDB01DE_OFFSET))(this, a1, a2);
	}
};
