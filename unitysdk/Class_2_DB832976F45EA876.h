#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_DB832976F45EA876_METHOD_2_4C180E130790BBDB_OFFSET UNITYSDK_OFFSET(0x10560E20)
#define CLASS_2_DB832976F45EA876_METHOD_2_9AB6F64CBA4725C6_OFFSET UNITYSDK_OFFSET(0x10560CC0)
#define CLASS_2_DB832976F45EA876_METHOD_2_C98D8ED5133B6D9C_OFFSET UNITYSDK_OFFSET(0x10560C00)
#define CLASS_2_DB832976F45EA876__CTOR_OFFSET UNITYSDK_OFFSET(0x10560BF0)

inline static constexpr unsigned int Class_2_DB832976F45EA876_TypeDefinitionIndex = 61564;

class Class_2_DB832976F45EA876 : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_DB832976F45EA876__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C98D8ED5133B6D9C(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_DB832976F45EA876_METHOD_2_C98D8ED5133B6D9C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AB6F64CBA4725C6(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_DB832976F45EA876_METHOD_2_9AB6F64CBA4725C6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4C180E130790BBDB(::RPG::Client::SwordTrainingStatusChangeInfo* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_DB832976F45EA876_METHOD_2_4C180E130790BBDB_OFFSET))(this, P0);
	}
};
