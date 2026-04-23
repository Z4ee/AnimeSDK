#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareStanceRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3D6A019098C52E05_EVALUATE_OFFSET UNITYSDK_OFFSET(0x118B4C10)
#define CLASS_3_3D6A019098C52E05__CTOR_OFFSET UNITYSDK_OFFSET(0x118B4BE0)

inline static constexpr unsigned int Class_3_3D6A019098C52E05_TypeDefinitionIndex = 50351;

class Class_3_3D6A019098C52E05 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareStanceRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + CLASS_3_3D6A019098C52E05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6A019098C52E05_EVALUATE_OFFSET))(this);
	}
};
