#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareStanceCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A9B3E1D3389193F8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10C60790)
#define CLASS_3_A9B3E1D3389193F8__CTOR_OFFSET UNITYSDK_OFFSET(0x10C60760)

inline static constexpr unsigned int Class_3_A9B3E1D3389193F8_TypeDefinitionIndex = 43653;

class Class_3_A9B3E1D3389193F8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareStanceCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStanceCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStanceCount*))((::PBYTE)hIl2Cpp + CLASS_3_A9B3E1D3389193F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9B3E1D3389193F8_EVALUATE_OFFSET))(this);
	}
};
