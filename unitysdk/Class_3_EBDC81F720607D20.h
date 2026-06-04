#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPartialFlipDeviceState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EBDC81F720607D20_EVALUATE_OFFSET UNITYSDK_OFFSET(0x138446C0)
#define CLASS_3_EBDC81F720607D20__CTOR_OFFSET UNITYSDK_OFFSET(0x13844690)

inline static constexpr unsigned int Class_3_EBDC81F720607D20_TypeDefinitionIndex = 49354;

class Class_3_EBDC81F720607D20 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPartialFlipDeviceState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + CLASS_3_EBDC81F720607D20__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBDC81F720607D20_EVALUATE_OFFSET))(this);
	}
};
