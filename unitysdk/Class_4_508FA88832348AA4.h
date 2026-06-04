#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_508FA88832348AA4_METHOD_4_30203906F8F8768E_OFFSET UNITYSDK_OFFSET(0x19370060)
#define CLASS_4_508FA88832348AA4_METHOD_4_3EFF1FD63ABD70FF_OFFSET UNITYSDK_OFFSET(0x1936FD30)
#define CLASS_4_508FA88832348AA4_METHOD_4_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x1936FFE0)
#define CLASS_4_508FA88832348AA4_METHOD_4_C65FDB2FAF4ABCC7_OFFSET UNITYSDK_OFFSET(0x1936FE00)
#define CLASS_4_508FA88832348AA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1936FDB0)

inline static constexpr unsigned int Class_4_508FA88832348AA4_TypeDefinitionIndex = 22877;

class Class_4_508FA88832348AA4 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicString* Field_4_0; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_1; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_4_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_508FA88832348AA4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_3EFF1FD63ABD70FF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_508FA88832348AA4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_508FA88832348AA4*&))((::PBYTE)hIl2Cpp + CLASS_4_508FA88832348AA4_METHOD_4_3EFF1FD63ABD70FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C65FDB2FAF4ABCC7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_508FA88832348AA4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_508FA88832348AA4*))((::PBYTE)hIl2Cpp + CLASS_4_508FA88832348AA4_METHOD_4_C65FDB2FAF4ABCC7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_508FA88832348AA4*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_508FA88832348AA4*&))((::PBYTE)hIl2Cpp + CLASS_4_508FA88832348AA4_METHOD_4_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_30203906F8F8768E(::SimpleJSON::JSONNode* a1, ::Class_4_508FA88832348AA4* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_508FA88832348AA4*))((::PBYTE)hIl2Cpp + CLASS_4_508FA88832348AA4_METHOD_4_30203906F8F8768E_OFFSET))(a1, a2);
	}
};
