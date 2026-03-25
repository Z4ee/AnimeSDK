#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class ByCompareDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_70F16A4CC763ADFA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8C38830)
#define CLASS_3_70F16A4CC763ADFA_METHOD_3_FAD54A77F8487517_OFFSET UNITYSDK_OFFSET(0x8C38950)
#define CLASS_3_70F16A4CC763ADFA__CTOR_OFFSET UNITYSDK_OFFSET(0x8C38800)

inline static constexpr unsigned int Class_3_70F16A4CC763ADFA_TypeDefinitionIndex = 43610;

class Class_3_70F16A4CC763ADFA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareDynamicValue*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_70F16A4CC763ADFA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70F16A4CC763ADFA_EVALUATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_FAD54A77F8487517(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDynamicValue* a2, ::RPG::GameCore::StringHash a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDynamicValue*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_3_70F16A4CC763ADFA_METHOD_3_FAD54A77F8487517_OFFSET))(a1, a2, a3);
	}
};
