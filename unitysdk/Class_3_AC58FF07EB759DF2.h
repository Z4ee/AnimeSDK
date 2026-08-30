#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSomatoType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AC58FF07EB759DF2_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC0B8050)
#define CLASS_3_AC58FF07EB759DF2__CTOR_OFFSET UNITYSDK_OFFSET(0xC0B8020)

inline static constexpr unsigned int Class_3_AC58FF07EB759DF2_TypeDefinitionIndex = 54780;

class Class_3_AC58FF07EB759DF2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSomatoType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSomatoType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSomatoType*))((::PBYTE)hIl2Cpp + CLASS_3_AC58FF07EB759DF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC58FF07EB759DF2_EVALUATE_OFFSET))(this);
	}
};
