#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_81F3F771E22D0900_METHOD_4_30203906F8F8768E_OFFSET UNITYSDK_OFFSET(0x197844D0)
#define CLASS_4_81F3F771E22D0900_METHOD_4_411F5B05FB2FEB16_OFFSET UNITYSDK_OFFSET(0x19784140)
#define CLASS_4_81F3F771E22D0900_METHOD_4_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x19784430)
#define CLASS_4_81F3F771E22D0900_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x19784260)
#define CLASS_4_81F3F771E22D0900__CTOR_OFFSET UNITYSDK_OFFSET(0x197841E0)

inline static constexpr unsigned int Class_4_81F3F771E22D0900_TypeDefinitionIndex = 22784;

class Class_4_81F3F771E22D0900 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::ILBattleCharacterLocation>* Field_4_0; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_81F3F771E22D0900__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_411F5B05FB2FEB16(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_81F3F771E22D0900*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_81F3F771E22D0900*&))((::PBYTE)hIl2Cpp + CLASS_4_81F3F771E22D0900_METHOD_4_411F5B05FB2FEB16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_81F3F771E22D0900* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_81F3F771E22D0900*))((::PBYTE)hIl2Cpp + CLASS_4_81F3F771E22D0900_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_81F3F771E22D0900*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_81F3F771E22D0900*&))((::PBYTE)hIl2Cpp + CLASS_4_81F3F771E22D0900_METHOD_4_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_30203906F8F8768E(::SimpleJSON::JSONNode* a1, ::Class_4_81F3F771E22D0900* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_81F3F771E22D0900*))((::PBYTE)hIl2Cpp + CLASS_4_81F3F771E22D0900_METHOD_4_30203906F8F8768E_OFFSET))(a1, a2);
	}
};
