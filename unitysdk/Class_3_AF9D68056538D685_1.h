#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_AF9D68056538D685_1_METHOD_3_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x18523ED0)
#define CLASS_3_AF9D68056538D685_1_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x18523F50)
#define CLASS_3_AF9D68056538D685_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18523F20)

inline static constexpr unsigned int Class_3_AF9D68056538D685_1_TypeDefinitionIndex = 22711;

class Class_3_AF9D68056538D685_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF9D68056538D685_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DFC332AF3EA3B47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AF9D68056538D685_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AF9D68056538D685_1*&))((::PBYTE)hIl2Cpp + CLASS_3_AF9D68056538D685_1_METHOD_3_2DFC332AF3EA3B47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AF9D68056538D685_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AF9D68056538D685_1*))((::PBYTE)hIl2Cpp + CLASS_3_AF9D68056538D685_1_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
