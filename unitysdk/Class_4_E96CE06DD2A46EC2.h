#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_E96CE06DD2A46EC2_METHOD_4_228A1F97B7A24FF1_OFFSET UNITYSDK_OFFSET(0x1938B180)
#define CLASS_4_E96CE06DD2A46EC2_METHOD_4_7B853BC09F06B583_OFFSET UNITYSDK_OFFSET(0x1938B0B0)
#define CLASS_4_E96CE06DD2A46EC2_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x1938B320)
#define CLASS_4_E96CE06DD2A46EC2_METHOD_4_C5032BE74465413D_OFFSET UNITYSDK_OFFSET(0x1938B3A0)
#define CLASS_4_E96CE06DD2A46EC2__CTOR_OFFSET UNITYSDK_OFFSET(0x1938B130)

inline static constexpr unsigned int Class_4_E96CE06DD2A46EC2_TypeDefinitionIndex = 22882;

class Class_4_E96CE06DD2A46EC2 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicString* Field_4_0; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E96CE06DD2A46EC2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_7B853BC09F06B583(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E96CE06DD2A46EC2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E96CE06DD2A46EC2*&))((::PBYTE)hIl2Cpp + CLASS_4_E96CE06DD2A46EC2_METHOD_4_7B853BC09F06B583_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_228A1F97B7A24FF1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E96CE06DD2A46EC2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E96CE06DD2A46EC2*))((::PBYTE)hIl2Cpp + CLASS_4_E96CE06DD2A46EC2_METHOD_4_228A1F97B7A24FF1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_E96CE06DD2A46EC2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E96CE06DD2A46EC2*&))((::PBYTE)hIl2Cpp + CLASS_4_E96CE06DD2A46EC2_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C5032BE74465413D(::SimpleJSON::JSONNode* a1, ::Class_4_E96CE06DD2A46EC2* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E96CE06DD2A46EC2*))((::PBYTE)hIl2Cpp + CLASS_4_E96CE06DD2A46EC2_METHOD_4_C5032BE74465413D_OFFSET))(a1, a2);
	}
};
