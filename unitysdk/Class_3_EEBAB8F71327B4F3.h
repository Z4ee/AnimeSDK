#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsShowInActionBar; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EEBAB8F71327B4F3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8FF3FF0)
#define CLASS_3_EEBAB8F71327B4F3__CTOR_OFFSET UNITYSDK_OFFSET(0x8FF3FC0)

inline static constexpr unsigned int Class_3_EEBAB8F71327B4F3_TypeDefinitionIndex = 50452;

class Class_3_EEBAB8F71327B4F3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsShowInActionBar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsShowInActionBar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsShowInActionBar*))((::PBYTE)hIl2Cpp + CLASS_3_EEBAB8F71327B4F3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EEBAB8F71327B4F3_EVALUATE_OFFSET))(this);
	}
};
