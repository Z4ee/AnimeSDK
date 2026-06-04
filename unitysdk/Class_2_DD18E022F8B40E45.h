#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

class Class_0_16E4307DCC419505_1124;
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_DD18E022F8B40E45_METHOD_2_2D546E455D21307E_OFFSET UNITYSDK_OFFSET(0x14564B30)
#define CLASS_2_DD18E022F8B40E45_METHOD_2_921D9F90CC62B9FD_OFFSET UNITYSDK_OFFSET(0x14564CF0)
#define CLASS_2_DD18E022F8B40E45_METHOD_2_FDAD556BFD509335_OFFSET UNITYSDK_OFFSET(0x14564820)
#define CLASS_2_DD18E022F8B40E45__CTOR_OFFSET UNITYSDK_OFFSET(0x145646A0)

inline static constexpr unsigned int Class_2_DD18E022F8B40E45_TypeDefinitionIndex = 69886;

class Class_2_DD18E022F8B40E45 : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_DD18E022F8B40E45__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDAD556BFD509335(::Class_0_16E4307DCC419505_1124* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1124*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_DD18E022F8B40E45_METHOD_2_FDAD556BFD509335_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_921D9F90CC62B9FD(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_DD18E022F8B40E45_METHOD_2_921D9F90CC62B9FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2D546E455D21307E(::Class_0_16E4307DCC419505_1124* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1124*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_DD18E022F8B40E45_METHOD_2_2D546E455D21307E_OFFSET))(this, a1, a2);
	}
};
