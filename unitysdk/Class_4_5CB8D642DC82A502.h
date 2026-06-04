#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/HPDetailParamType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_5CB8D642DC82A502_METHOD_4_30203906F8F8768E_OFFSET UNITYSDK_OFFSET(0x18FA7FF0)
#define CLASS_4_5CB8D642DC82A502_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x18FA7AC0)
#define CLASS_4_5CB8D642DC82A502_METHOD_4_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x18FA7F30)
#define CLASS_4_5CB8D642DC82A502_METHOD_4_F15654ABB049A0FA_OFFSET UNITYSDK_OFFSET(0x18FA7C20)
#define CLASS_4_5CB8D642DC82A502__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA7B80)

inline static constexpr unsigned int Class_4_5CB8D642DC82A502_TypeDefinitionIndex = 21739;

class Class_4_5CB8D642DC82A502 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_1; // 0x28
	::RPG::GameCore::DynamicFloat* Field_4_2; // 0x30
	::RPG::GameCore::HPDetailParamType Field_4_3; // 0x38
	::RPG::GameCore::CompareType Field_4_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5CB8D642DC82A502__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_5CB8D642DC82A502*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_5CB8D642DC82A502*&))((::PBYTE)hIl2Cpp + CLASS_4_5CB8D642DC82A502_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F15654ABB049A0FA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_5CB8D642DC82A502* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_5CB8D642DC82A502*))((::PBYTE)hIl2Cpp + CLASS_4_5CB8D642DC82A502_METHOD_4_F15654ABB049A0FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_5CB8D642DC82A502*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5CB8D642DC82A502*&))((::PBYTE)hIl2Cpp + CLASS_4_5CB8D642DC82A502_METHOD_4_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_30203906F8F8768E(::SimpleJSON::JSONNode* a1, ::Class_4_5CB8D642DC82A502* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_5CB8D642DC82A502*))((::PBYTE)hIl2Cpp + CLASS_4_5CB8D642DC82A502_METHOD_4_30203906F8F8768E_OFFSET))(a1, a2);
	}
};
