#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFourRotateVoxelCurrentDirection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FAE27F02BEE22ED2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x163865B0)
#define CLASS_3_FAE27F02BEE22ED2__CTOR_OFFSET UNITYSDK_OFFSET(0x16386580)

inline static constexpr unsigned int Class_3_FAE27F02BEE22ED2_TypeDefinitionIndex = 53230;

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
