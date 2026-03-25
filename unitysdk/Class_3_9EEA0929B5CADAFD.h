#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ByComparePlanetFesEventProgressLeft; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9EEA0929B5CADAFD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8D5BD80)
#define CLASS_3_9EEA0929B5CADAFD__CTOR_OFFSET UNITYSDK_OFFSET(0x8D5BD50)

inline static constexpr unsigned int Class_3_9EEA0929B5CADAFD_TypeDefinitionIndex = 46752;

class Class_3_9EEA0929B5CADAFD : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ByComparePlanetFesEventProgressLeft*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*))((::PBYTE)hIl2Cpp + CLASS_3_9EEA0929B5CADAFD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EEA0929B5CADAFD_EVALUATE_OFFSET))(this);
	}
};
