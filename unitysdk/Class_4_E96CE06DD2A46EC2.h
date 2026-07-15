#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_E96CE06DD2A46EC2_METHOD_4_228A1F97B7A24FF1_OFFSET UNITYSDK_OFFSET(0x1B2818D0)
#define CLASS_4_E96CE06DD2A46EC2_METHOD_4_319BE01CD615CE10_OFFSET UNITYSDK_OFFSET(0x1B281890)
#define CLASS_4_E96CE06DD2A46EC2_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1B281AA0)
#define CLASS_4_E96CE06DD2A46EC2_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1B281A70)
#define CLASS_4_E96CE06DD2A46EC2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2818C0)

inline static constexpr unsigned int Class_4_E96CE06DD2A46EC2_TypeDefinitionIndex = 23349;

class Class_4_E96CE06DD2A46EC2 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicString* Field_4_0; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E96CE06DD2A46EC2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_319BE01CD615CE10(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E96CE06DD2A46EC2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E96CE06DD2A46EC2*&))((::PBYTE)hIl2Cpp + CLASS_4_E96CE06DD2A46EC2_METHOD_4_319BE01CD615CE10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_228A1F97B7A24FF1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E96CE06DD2A46EC2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E96CE06DD2A46EC2*))((::PBYTE)hIl2Cpp + CLASS_4_E96CE06DD2A46EC2_METHOD_4_228A1F97B7A24FF1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_E96CE06DD2A46EC2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E96CE06DD2A46EC2*&))((::PBYTE)hIl2Cpp + CLASS_4_E96CE06DD2A46EC2_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_E96CE06DD2A46EC2* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E96CE06DD2A46EC2*))((::PBYTE)hIl2Cpp + CLASS_4_E96CE06DD2A46EC2_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
