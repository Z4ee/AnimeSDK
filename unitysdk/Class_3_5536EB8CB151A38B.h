#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LightningStrikeAreaMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_5536EB8CB151A38B_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1B280A00)
#define CLASS_3_5536EB8CB151A38B_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1B2809C0)
#define CLASS_3_5536EB8CB151A38B__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2809F0)

inline static constexpr unsigned int Class_3_5536EB8CB151A38B_TypeDefinitionIndex = 20291;

class Class_3_5536EB8CB151A38B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::LightningStrikeAreaMode Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5536EB8CB151A38B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5536EB8CB151A38B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5536EB8CB151A38B*&))((::PBYTE)hIl2Cpp + CLASS_3_5536EB8CB151A38B_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5536EB8CB151A38B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5536EB8CB151A38B*))((::PBYTE)hIl2Cpp + CLASS_3_5536EB8CB151A38B_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
