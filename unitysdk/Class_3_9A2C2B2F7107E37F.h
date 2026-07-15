#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareCityAtmosphereSubwayArrived; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9A2C2B2F7107E37F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155B40E0)
#define CLASS_3_9A2C2B2F7107E37F__CTOR_OFFSET UNITYSDK_OFFSET(0x155B40B0)

inline static constexpr unsigned int Class_3_9A2C2B2F7107E37F_TypeDefinitionIndex = 50165;

class Class_3_9A2C2B2F7107E37F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + CLASS_3_9A2C2B2F7107E37F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A2C2B2F7107E37F_EVALUATE_OFFSET))(this);
	}
};
