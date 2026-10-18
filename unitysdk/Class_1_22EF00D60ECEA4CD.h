#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class VoracityInvasionProgressBuffData; }
namespace RPG::GameCore { class ActivityVoracityInvasionProgressBuffRow; }

#define CLASS_1_22EF00D60ECEA4CD_METHOD_1_2861F9C91C476967_OFFSET UNITYSDK_OFFSET(0xD754630)
#define CLASS_1_22EF00D60ECEA4CD__CTOR_OFFSET UNITYSDK_OFFSET(0xD7546E0)

inline static constexpr unsigned int Class_1_22EF00D60ECEA4CD_TypeDefinitionIndex = 68267;

class Class_1_22EF00D60ECEA4CD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22EF00D60ECEA4CD__CTOR_OFFSET))(this);
	}

	::RPG::Client::VoracityInvasionProgressBuffData* Method_1_2861F9C91C476967(::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow* a1)
	{
		return ((::RPG::Client::VoracityInvasionProgressBuffData*(*)(::PVOID, ::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*))((::PBYTE)hIl2Cpp + CLASS_1_22EF00D60ECEA4CD_METHOD_1_2861F9C91C476967_OFFSET))(this, a1);
	}
};
