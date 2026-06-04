#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ByIsPlanetFesBusinessDayFinished; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_42CEE03D4B16C2A0_EVALUATE_OFFSET UNITYSDK_OFFSET(0x136EC470)
#define CLASS_3_42CEE03D4B16C2A0__CTOR_OFFSET UNITYSDK_OFFSET(0x136EC440)

inline static constexpr unsigned int Class_3_42CEE03D4B16C2A0_TypeDefinitionIndex = 54180;

class Class_3_42CEE03D4B16C2A0 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ByIsPlanetFesBusinessDayFinished*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*))((::PBYTE)hIl2Cpp + CLASS_3_42CEE03D4B16C2A0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42CEE03D4B16C2A0_EVALUATE_OFFSET))(this);
	}
};
