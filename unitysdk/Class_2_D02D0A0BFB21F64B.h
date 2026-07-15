#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

class Class_0_16E4307DCC419505_1170;
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_D02D0A0BFB21F64B_METHOD_2_1923FD1B1B9F27EF_OFFSET UNITYSDK_OFFSET(0x15FD8530)
#define CLASS_2_D02D0A0BFB21F64B_METHOD_2_921D9F90CC62B9FD_OFFSET UNITYSDK_OFFSET(0x15FD8750)
#define CLASS_2_D02D0A0BFB21F64B_METHOD_2_FDAD556BFD509335_OFFSET UNITYSDK_OFFSET(0x15FD8150)
#define CLASS_2_D02D0A0BFB21F64B__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD7FD0)

inline static constexpr unsigned int Class_2_D02D0A0BFB21F64B_TypeDefinitionIndex = 71409;

class Class_2_D02D0A0BFB21F64B : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_D02D0A0BFB21F64B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDAD556BFD509335(::Class_0_16E4307DCC419505_1170* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1170*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_D02D0A0BFB21F64B_METHOD_2_FDAD556BFD509335_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_921D9F90CC62B9FD(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_D02D0A0BFB21F64B_METHOD_2_921D9F90CC62B9FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1923FD1B1B9F27EF(::Class_0_16E4307DCC419505_1170* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1170*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_D02D0A0BFB21F64B_METHOD_2_1923FD1B1B9F27EF_OFFSET))(this, a1, a2);
	}
};
