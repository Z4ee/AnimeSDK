#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_ElfByIsCustomerState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E138B9D49F89FB30_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDAC9250)
#define CLASS_3_E138B9D49F89FB30__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC91D0)

inline static constexpr unsigned int Class_3_E138B9D49F89FB30_TypeDefinitionIndex = 52435;

class Class_3_E138B9D49F89FB30 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ElfByIsCustomerState*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* FOMIGOMHGGI; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ElfByIsCustomerState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ElfByIsCustomerState*))((::PBYTE)hIl2Cpp + CLASS_3_E138B9D49F89FB30__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E138B9D49F89FB30_EVALUATE_OFFSET))(this);
	}
};
