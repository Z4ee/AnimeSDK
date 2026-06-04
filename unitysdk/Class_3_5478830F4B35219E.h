#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ST_Parkour_ByCompareProjectileHitCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5478830F4B35219E_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA6A2010)
#define CLASS_3_5478830F4B35219E__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A1FE0)

inline static constexpr unsigned int Class_3_5478830F4B35219E_TypeDefinitionIndex = 48746;

class Class_3_5478830F4B35219E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*))((::PBYTE)hIl2Cpp + CLASS_3_5478830F4B35219E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5478830F4B35219E_EVALUATE_OFFSET))(this);
	}
};
