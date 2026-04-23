#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ByIsPlanetFesLandAvailableForPurchase; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6A1EEF84CB96ACF2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x90BDC80)
#define CLASS_3_6A1EEF84CB96ACF2__CTOR_OFFSET UNITYSDK_OFFSET(0x90BDC50)

inline static constexpr unsigned int Class_3_6A1EEF84CB96ACF2_TypeDefinitionIndex = 53468;

class Class_3_6A1EEF84CB96ACF2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*))((::PBYTE)hIl2Cpp + CLASS_3_6A1EEF84CB96ACF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A1EEF84CB96ACF2_EVALUATE_OFFSET))(this);
	}
};
