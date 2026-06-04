#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_4_70CD0600B28C3054_METHOD_4_30203906F8F8768E_OFFSET UNITYSDK_OFFSET(0x191D59D0)
#define CLASS_4_70CD0600B28C3054_METHOD_4_6A30C7251EF38E1C_OFFSET UNITYSDK_OFFSET(0x191D56D0)
#define CLASS_4_70CD0600B28C3054_METHOD_4_8C07D9C793444934_OFFSET UNITYSDK_OFFSET(0x191D5600)
#define CLASS_4_70CD0600B28C3054_METHOD_4_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x191D5950)
#define CLASS_4_70CD0600B28C3054__CTOR_OFFSET UNITYSDK_OFFSET(0x191D5680)

inline static constexpr unsigned int Class_4_70CD0600B28C3054_TypeDefinitionIndex = 22915;

class Class_4_70CD0600B28C3054 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::SkillType>* Field_4_0; // 0x20
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_4_1; // 0x28
	::Il2CppArray<::System::String*>* Field_4_2; // 0x30
	::RPG::GameCore::TargetEvaluator* Field_4_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_70CD0600B28C3054__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_8C07D9C793444934(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_70CD0600B28C3054*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_70CD0600B28C3054*&))((::PBYTE)hIl2Cpp + CLASS_4_70CD0600B28C3054_METHOD_4_8C07D9C793444934_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_6A30C7251EF38E1C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_70CD0600B28C3054* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_70CD0600B28C3054*))((::PBYTE)hIl2Cpp + CLASS_4_70CD0600B28C3054_METHOD_4_6A30C7251EF38E1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_70CD0600B28C3054*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_70CD0600B28C3054*&))((::PBYTE)hIl2Cpp + CLASS_4_70CD0600B28C3054_METHOD_4_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_30203906F8F8768E(::SimpleJSON::JSONNode* a1, ::Class_4_70CD0600B28C3054* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_70CD0600B28C3054*))((::PBYTE)hIl2Cpp + CLASS_4_70CD0600B28C3054_METHOD_4_30203906F8F8768E_OFFSET))(a1, a2);
	}
};
