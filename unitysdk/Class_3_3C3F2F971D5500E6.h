#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class ByCompareModifierCallBackDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3C3F2F971D5500E6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14289AA0)
#define CLASS_3_3C3F2F971D5500E6__CTOR_OFFSET UNITYSDK_OFFSET(0x142899C0)

inline static constexpr unsigned int Class_3_3C3F2F971D5500E6_TypeDefinitionIndex = 52068;

class Class_3_3C3F2F971D5500E6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareModifierCallBackDynamicValue*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_3C3F2F971D5500E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C3F2F971D5500E6_EVALUATE_OFFSET))(this);
	}
};
