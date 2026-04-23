#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_7C231CE412973E1A_METHOD_3_443B8314404AE95B_OFFSET UNITYSDK_OFFSET(0x18216F60)
#define CLASS_3_7C231CE412973E1A_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x18216FE0)
#define CLASS_3_7C231CE412973E1A__CTOR_OFFSET UNITYSDK_OFFSET(0x18216FB0)

inline static constexpr unsigned int Class_3_7C231CE412973E1A_TypeDefinitionIndex = 22737;

class Class_3_7C231CE412973E1A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::RPG::GameCore::FormatString Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C231CE412973E1A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_443B8314404AE95B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7C231CE412973E1A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7C231CE412973E1A*&))((::PBYTE)hIl2Cpp + CLASS_3_7C231CE412973E1A_METHOD_3_443B8314404AE95B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7C231CE412973E1A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7C231CE412973E1A*))((::PBYTE)hIl2Cpp + CLASS_3_7C231CE412973E1A_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
