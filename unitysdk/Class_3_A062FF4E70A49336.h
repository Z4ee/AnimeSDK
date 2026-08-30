#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ByPlantFesIsInMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A062FF4E70A49336_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16436D00)
#define CLASS_3_A062FF4E70A49336__CTOR_OFFSET UNITYSDK_OFFSET(0x16436CD0)

inline static constexpr unsigned int Class_3_A062FF4E70A49336_TypeDefinitionIndex = 58143;

class Class_3_A062FF4E70A49336 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ByPlantFesIsInMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByPlantFesIsInMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByPlantFesIsInMove*))((::PBYTE)hIl2Cpp + CLASS_3_A062FF4E70A49336__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A062FF4E70A49336_EVALUATE_OFFSET))(this);
	}
};
