#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_D5300C5BFD1551AD_METHOD_2_2372762F4122DEB8_1_OFFSET UNITYSDK_OFFSET(0x118DDBC0)
#define CLASS_2_D5300C5BFD1551AD_METHOD_2_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x118DDB50)
#define CLASS_2_D5300C5BFD1551AD_METHOD_2_3396241F64F706E1_OFFSET UNITYSDK_OFFSET(0x118DDC40)
#define CLASS_2_D5300C5BFD1551AD_METHOD_2_4C180E130790BBDB_OFFSET UNITYSDK_OFFSET(0x118DDCD0)
#define CLASS_2_D5300C5BFD1551AD_METHOD_2_E0D8D74C61D454DE_OFFSET UNITYSDK_OFFSET(0x118DDAB0)
#define CLASS_2_D5300C5BFD1551AD__CTOR_OFFSET UNITYSDK_OFFSET(0x118DDAA0)

inline static constexpr unsigned int Class_2_D5300C5BFD1551AD_TypeDefinitionIndex = 69082;

class Class_2_D5300C5BFD1551AD : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_D5300C5BFD1551AD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0D8D74C61D454DE(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_D5300C5BFD1551AD_METHOD_2_E0D8D74C61D454DE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3396241F64F706E1(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_D5300C5BFD1551AD_METHOD_2_3396241F64F706E1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5300C5BFD1551AD_METHOD_2_2372762F4122DEB8_OFFSET))(this);
	}

	::System::UInt32 Method_2_2372762F4122DEB8_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5300C5BFD1551AD_METHOD_2_2372762F4122DEB8_1_OFFSET))(this);
	}

	::System::Boolean Method_2_4C180E130790BBDB(::RPG::Client::SwordTrainingStatusChangeInfo* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_D5300C5BFD1551AD_METHOD_2_4C180E130790BBDB_OFFSET))(this, P0);
	}
};
