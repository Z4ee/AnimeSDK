#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsPropLockable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_021E7BC83C897180_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13C41C20)
#define CLASS_3_021E7BC83C897180__CTOR_OFFSET UNITYSDK_OFFSET(0x13C41BF0)

inline static constexpr unsigned int Class_3_021E7BC83C897180_TypeDefinitionIndex = 49197;

class Class_3_021E7BC83C897180 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsPropLockable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsPropLockable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + CLASS_3_021E7BC83C897180__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_021E7BC83C897180_EVALUATE_OFFSET))(this);
	}
};
