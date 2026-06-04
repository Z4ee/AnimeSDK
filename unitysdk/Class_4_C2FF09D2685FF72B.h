#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_C2FF09D2685FF72B_METHOD_4_9FB7184D9548FFA8_OFFSET UNITYSDK_OFFSET(0x191A93A0)
#define CLASS_4_C2FF09D2685FF72B_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x191A9640)
#define CLASS_4_C2FF09D2685FF72B_METHOD_4_C5032BE74465413D_OFFSET UNITYSDK_OFFSET(0x191A96E0)
#define CLASS_4_C2FF09D2685FF72B_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x191A94C0)
#define CLASS_4_C2FF09D2685FF72B__CTOR_OFFSET UNITYSDK_OFFSET(0x191A9440)

inline static constexpr unsigned int Class_4_C2FF09D2685FF72B_TypeDefinitionIndex = 21765;

class Class_4_C2FF09D2685FF72B : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2FF09D2685FF72B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9FB7184D9548FFA8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C2FF09D2685FF72B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C2FF09D2685FF72B*&))((::PBYTE)hIl2Cpp + CLASS_4_C2FF09D2685FF72B_METHOD_4_9FB7184D9548FFA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C2FF09D2685FF72B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C2FF09D2685FF72B*))((::PBYTE)hIl2Cpp + CLASS_4_C2FF09D2685FF72B_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_C2FF09D2685FF72B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C2FF09D2685FF72B*&))((::PBYTE)hIl2Cpp + CLASS_4_C2FF09D2685FF72B_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C5032BE74465413D(::SimpleJSON::JSONNode* a1, ::Class_4_C2FF09D2685FF72B* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C2FF09D2685FF72B*))((::PBYTE)hIl2Cpp + CLASS_4_C2FF09D2685FF72B_METHOD_4_C5032BE74465413D_OFFSET))(a1, a2);
	}
};
