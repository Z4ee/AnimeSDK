#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_D5300C5BFD1551AD_1_METHOD_2_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x123C12F0)
#define CLASS_2_D5300C5BFD1551AD_1_METHOD_2_4C180E130790BBDB_OFFSET UNITYSDK_OFFSET(0x123C1400)
#define CLASS_2_D5300C5BFD1551AD_1_METHOD_2_979A6D0F7FCF284A_OFFSET UNITYSDK_OFFSET(0x123C1360)
#define CLASS_2_D5300C5BFD1551AD_1_METHOD_2_E0D8D74C61D454DE_OFFSET UNITYSDK_OFFSET(0x123C1250)
#define CLASS_2_D5300C5BFD1551AD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x123C1240)

inline static constexpr unsigned int Class_2_D5300C5BFD1551AD_1_TypeDefinitionIndex = 69083;

class Class_2_D5300C5BFD1551AD_1 : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_D5300C5BFD1551AD_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0D8D74C61D454DE(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_D5300C5BFD1551AD_1_METHOD_2_E0D8D74C61D454DE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_979A6D0F7FCF284A(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_D5300C5BFD1551AD_1_METHOD_2_979A6D0F7FCF284A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5300C5BFD1551AD_1_METHOD_2_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Boolean Method_2_4C180E130790BBDB(::RPG::Client::SwordTrainingStatusChangeInfo* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_D5300C5BFD1551AD_1_METHOD_2_4C180E130790BBDB_OFFSET))(this, P0);
	}
};
