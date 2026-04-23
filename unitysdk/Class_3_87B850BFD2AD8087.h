#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareEvolveBuildGearLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_87B850BFD2AD8087_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12AA0200)
#define CLASS_3_87B850BFD2AD8087__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA01D0)

inline static constexpr unsigned int Class_3_87B850BFD2AD8087_TypeDefinitionIndex = 50309;

class Class_3_87B850BFD2AD8087 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareEvolveBuildGearLevel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + CLASS_3_87B850BFD2AD8087__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87B850BFD2AD8087_EVALUATE_OFFSET))(this);
	}
};
