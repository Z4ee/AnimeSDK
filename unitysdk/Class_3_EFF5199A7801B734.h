#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_ElfByIsTakeOutState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EFF5199A7801B734_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16746CF0)
#define CLASS_3_EFF5199A7801B734__CTOR_OFFSET UNITYSDK_OFFSET(0x16746C70)

inline static constexpr unsigned int Class_3_EFF5199A7801B734_TypeDefinitionIndex = 49776;

class Class_3_EFF5199A7801B734 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ElfByIsTakeOutState*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ElfByIsTakeOutState*))((::PBYTE)hIl2Cpp + CLASS_3_EFF5199A7801B734__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFF5199A7801B734_EVALUATE_OFFSET))(this);
	}
};
