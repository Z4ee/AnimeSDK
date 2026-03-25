#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_ElfByIsWaiterState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_786BFD7588D71054_EVALUATE_OFFSET UNITYSDK_OFFSET(0x109FEC60)
#define CLASS_3_786BFD7588D71054__CTOR_OFFSET UNITYSDK_OFFSET(0x109FEBE0)

inline static constexpr unsigned int Class_3_786BFD7588D71054_TypeDefinitionIndex = 42167;

class Class_3_786BFD7588D71054 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ElfByIsWaiterState*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + CLASS_3_786BFD7588D71054__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_786BFD7588D71054_EVALUATE_OFFSET))(this);
	}
};
