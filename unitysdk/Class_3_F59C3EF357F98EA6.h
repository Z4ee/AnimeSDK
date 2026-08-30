#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ST_Parkour_ByCompareHitFlyCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F59C3EF357F98EA6_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB443910)
#define CLASS_3_F59C3EF357F98EA6__CTOR_OFFSET UNITYSDK_OFFSET(0xB4438E0)

inline static constexpr unsigned int Class_3_F59C3EF357F98EA6_TypeDefinitionIndex = 52417;

class Class_3_F59C3EF357F98EA6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ST_Parkour_ByCompareHitFlyCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*))((::PBYTE)hIl2Cpp + CLASS_3_F59C3EF357F98EA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F59C3EF357F98EA6_EVALUATE_OFFSET))(this);
	}
};
