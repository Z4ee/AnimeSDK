#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_4_CDB72451CBF92DF2_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x1CAA5CB0)
#define CLASS_4_CDB72451CBF92DF2_METHOD_4_6A30C7251EF38E1C_OFFSET UNITYSDK_OFFSET(0x1CAA5CF0)
#define CLASS_4_CDB72451CBF92DF2_METHOD_4_B7F31BF22BB7E019_OFFSET UNITYSDK_OFFSET(0x1CAA5FA0)
#define CLASS_4_CDB72451CBF92DF2_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1CAA5F70)
#define CLASS_4_CDB72451CBF92DF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA5CE0)

inline static constexpr unsigned int Class_4_CDB72451CBF92DF2_TypeDefinitionIndex = 23962;

class Class_4_CDB72451CBF92DF2 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* KGIDDABCHON; // 0x20
	::Il2CppArray<::System::String*>* COIKNMHIEPK; // 0x28
	::Il2CppArray<::RPG::GameCore::SkillType>* OOOPJAECBIN; // 0x30
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x38

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
