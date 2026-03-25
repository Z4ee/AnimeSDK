#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_C6C2C80A25880AE0_METHOD_2_4C180E130790BBDB_OFFSET UNITYSDK_OFFSET(0x8AC6BF0)
#define CLASS_2_C6C2C80A25880AE0_METHOD_2_5D52480485F5EF91_OFFSET UNITYSDK_OFFSET(0x8AC6A90)
#define CLASS_2_C6C2C80A25880AE0_METHOD_2_C98D8ED5133B6D9C_OFFSET UNITYSDK_OFFSET(0x8AC6B30)
#define CLASS_2_C6C2C80A25880AE0__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC6A80)

inline static constexpr unsigned int Class_2_C6C2C80A25880AE0_TypeDefinitionIndex = 61572;

class Class_2_C6C2C80A25880AE0 : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_C6C2C80A25880AE0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D52480485F5EF91(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_C6C2C80A25880AE0_METHOD_2_5D52480485F5EF91_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C98D8ED5133B6D9C(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_C6C2C80A25880AE0_METHOD_2_C98D8ED5133B6D9C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4C180E130790BBDB(::RPG::Client::SwordTrainingStatusChangeInfo* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_C6C2C80A25880AE0_METHOD_2_4C180E130790BBDB_OFFSET))(this, P0);
	}
};
