#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ChessByIsContainModifier; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6584281C1B0AD157_EVALUATE_OFFSET UNITYSDK_OFFSET(0x885F990)
#define CLASS_3_6584281C1B0AD157__CTOR_OFFSET UNITYSDK_OFFSET(0x885F960)

inline static constexpr unsigned int Class_3_6584281C1B0AD157_TypeDefinitionIndex = 45195;

class Class_3_6584281C1B0AD157 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ChessByIsContainModifier*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessByIsContainModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessByIsContainModifier*))((::PBYTE)hIl2Cpp + CLASS_3_6584281C1B0AD157__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6584281C1B0AD157_EVALUATE_OFFSET))(this);
	}
};
