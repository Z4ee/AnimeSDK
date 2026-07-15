#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_4_CDB72451CBF92DF2_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x1AFA8040)
#define CLASS_4_CDB72451CBF92DF2_METHOD_4_6A30C7251EF38E1C_OFFSET UNITYSDK_OFFSET(0x1AFA8080)
#define CLASS_4_CDB72451CBF92DF2_METHOD_4_B7F31BF22BB7E019_OFFSET UNITYSDK_OFFSET(0x1AFA8330)
#define CLASS_4_CDB72451CBF92DF2_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1AFA8300)
#define CLASS_4_CDB72451CBF92DF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA8070)

inline static constexpr unsigned int Class_4_CDB72451CBF92DF2_TypeDefinitionIndex = 23382;

class Class_4_CDB72451CBF92DF2 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::System::String*>* Field_4_0; // 0x20
	::Il2CppArray<::RPG::GameCore::SkillType>* Field_4_1; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_4_2; // 0x30
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_4_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CDB72451CBF92DF2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_61ACBD6DF6FE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_CDB72451CBF92DF2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_CDB72451CBF92DF2*&))((::PBYTE)hIl2Cpp + CLASS_4_CDB72451CBF92DF2_METHOD_4_61ACBD6DF6FE15E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_6A30C7251EF38E1C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_CDB72451CBF92DF2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_CDB72451CBF92DF2*))((::PBYTE)hIl2Cpp + CLASS_4_CDB72451CBF92DF2_METHOD_4_6A30C7251EF38E1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F33253E40A4719A6(::SimpleJSON::JSONNode* a1, ::Class_4_CDB72451CBF92DF2*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_CDB72451CBF92DF2*&))((::PBYTE)hIl2Cpp + CLASS_4_CDB72451CBF92DF2_METHOD_4_F33253E40A4719A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B7F31BF22BB7E019(::SimpleJSON::JSONNode* a1, ::Class_4_CDB72451CBF92DF2* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_CDB72451CBF92DF2*))((::PBYTE)hIl2Cpp + CLASS_4_CDB72451CBF92DF2_METHOD_4_B7F31BF22BB7E019_OFFSET))(a1, a2);
	}
};
