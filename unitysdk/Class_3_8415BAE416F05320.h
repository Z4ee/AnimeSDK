#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsInStoryMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8415BAE416F05320_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13C2B950)
#define CLASS_3_8415BAE416F05320__CTOR_OFFSET UNITYSDK_OFFSET(0x13C2B920)

inline static constexpr unsigned int Class_3_8415BAE416F05320_TypeDefinitionIndex = 49670;

class Class_3_8415BAE416F05320 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsInStoryMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInStoryMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInStoryMode*))((::PBYTE)hIl2Cpp + CLASS_3_8415BAE416F05320__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8415BAE416F05320_EVALUATE_OFFSET))(this);
	}
};
