#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckAdvModifierCallBackBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8854DCB9D110D1D8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1574A930)
#define CLASS_3_8854DCB9D110D1D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1574A900)

inline static constexpr unsigned int Class_3_8854DCB9D110D1D8_TypeDefinitionIndex = 54705;

class Class_3_8854DCB9D110D1D8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_3_8854DCB9D110D1D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8854DCB9D110D1D8_EVALUATE_OFFSET))(this);
	}
};
