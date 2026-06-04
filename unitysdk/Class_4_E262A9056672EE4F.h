#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_E262A9056672EE4F_METHOD_4_30203906F8F8768E_OFFSET UNITYSDK_OFFSET(0x193715A0)
#define CLASS_4_E262A9056672EE4F_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x19371170)
#define CLASS_4_E262A9056672EE4F_METHOD_4_6C55233E7345A091_OFFSET UNITYSDK_OFFSET(0x19371290)
#define CLASS_4_E262A9056672EE4F_METHOD_4_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x19371500)
#define CLASS_4_E262A9056672EE4F__CTOR_OFFSET UNITYSDK_OFFSET(0x19371210)

inline static constexpr unsigned int Class_4_E262A9056672EE4F_TypeDefinitionIndex = 22779;

class Class_4_E262A9056672EE4F : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_1; // 0x28
	::RPG::GameCore::DynamicFloat* Field_4_2; // 0x30
	::RPG::GameCore::CompareType Field_4_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E262A9056672EE4F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E262A9056672EE4F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E262A9056672EE4F*&))((::PBYTE)hIl2Cpp + CLASS_4_E262A9056672EE4F_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_6C55233E7345A091(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E262A9056672EE4F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E262A9056672EE4F*))((::PBYTE)hIl2Cpp + CLASS_4_E262A9056672EE4F_METHOD_4_6C55233E7345A091_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_E262A9056672EE4F*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E262A9056672EE4F*&))((::PBYTE)hIl2Cpp + CLASS_4_E262A9056672EE4F_METHOD_4_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_30203906F8F8768E(::SimpleJSON::JSONNode* a1, ::Class_4_E262A9056672EE4F* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_E262A9056672EE4F*))((::PBYTE)hIl2Cpp + CLASS_4_E262A9056672EE4F_METHOD_4_30203906F8F8768E_OFFSET))(a1, a2);
	}
};
