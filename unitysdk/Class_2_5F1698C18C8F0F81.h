#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_5F1698C18C8F0F81_METHOD_2_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0xA912BA0)
#define CLASS_2_5F1698C18C8F0F81_METHOD_2_B6627D07D80484E7_OFFSET UNITYSDK_OFFSET(0xA912B00)
#define CLASS_2_5F1698C18C8F0F81__CTOR_OFFSET UNITYSDK_OFFSET(0xA912A40)

inline static constexpr unsigned int Class_2_5F1698C18C8F0F81_TypeDefinitionIndex = 69893;

class Class_2_5F1698C18C8F0F81 : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_5F1698C18C8F0F81__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6627D07D80484E7(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_5F1698C18C8F0F81_METHOD_2_B6627D07D80484E7_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_AA041EC2967F998A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F1698C18C8F0F81_METHOD_2_AA041EC2967F998A_OFFSET))(this);
	}
};
