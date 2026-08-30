#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsElfRestaurantHasFarmer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_05B851C7C24238C6_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC39AC60)
#define CLASS_3_05B851C7C24238C6__CTOR_OFFSET UNITYSDK_OFFSET(0xC39AC20)

inline static constexpr unsigned int Class_3_05B851C7C24238C6_TypeDefinitionIndex = 54864;

class Class_3_05B851C7C24238C6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsElfRestaurantHasFarmer*>
{
public:
	::System::UInt32 HDLJKMNCOFB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*))((::PBYTE)hIl2Cpp + CLASS_3_05B851C7C24238C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B851C7C24238C6_EVALUATE_OFFSET))(this);
	}
};
