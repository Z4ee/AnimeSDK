#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_ACAA269882E9148D_METHOD_2_8E79DAE9709B38F7_OFFSET UNITYSDK_OFFSET(0xAC73A80)
#define CLASS_2_ACAA269882E9148D__CTOR_OFFSET UNITYSDK_OFFSET(0xAC73A60)

inline static constexpr unsigned int Class_2_ACAA269882E9148D_TypeDefinitionIndex = 69885;

class Class_2_ACAA269882E9148D : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_ACAA269882E9148D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E79DAE9709B38F7(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_ACAA269882E9148D_METHOD_2_8E79DAE9709B38F7_OFFSET))(this, a1, a2);
	}
};
