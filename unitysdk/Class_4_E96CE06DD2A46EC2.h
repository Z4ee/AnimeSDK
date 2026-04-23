#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_E96CE06DD2A46EC2_METHOD_4_228A1F97B7A24FF1_OFFSET UNITYSDK_OFFSET(0x18194C00)
#define CLASS_4_E96CE06DD2A46EC2_METHOD_4_7B853BC09F06B583_OFFSET UNITYSDK_OFFSET(0x18194B30)
#define CLASS_4_E96CE06DD2A46EC2__CTOR_OFFSET UNITYSDK_OFFSET(0x18194BB0)

inline static constexpr unsigned int Class_4_E96CE06DD2A46EC2_TypeDefinitionIndex = 23208;

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
};
