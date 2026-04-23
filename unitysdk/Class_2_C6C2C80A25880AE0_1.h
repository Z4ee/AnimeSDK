#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_C6C2C80A25880AE0_1_METHOD_2_5D52480485F5EF91_OFFSET UNITYSDK_OFFSET(0xC6FC020)
#define CLASS_2_C6C2C80A25880AE0_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC6FBF40)

inline static constexpr unsigned int Class_2_C6C2C80A25880AE0_1_TypeDefinitionIndex = 69085;

class Class_2_C6C2C80A25880AE0_1 : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_C6C2C80A25880AE0_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D52480485F5EF91(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_C6C2C80A25880AE0_1_METHOD_2_5D52480485F5EF91_OFFSET))(this, a1, a2);
	}
};
