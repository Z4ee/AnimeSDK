#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFourRotateVoxelCurrentDirection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FAE27F02BEE22ED2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x170A85A0)
#define CLASS_3_FAE27F02BEE22ED2__CTOR_OFFSET UNITYSDK_OFFSET(0x170A8570)

inline static constexpr unsigned int Class_3_FAE27F02BEE22ED2_TypeDefinitionIndex = 50553;

class Class_3_FAE27F02BEE22ED2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*))((::PBYTE)hIl2Cpp + CLASS_3_FAE27F02BEE22ED2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FAE27F02BEE22ED2_EVALUATE_OFFSET))(this);
	}
};
