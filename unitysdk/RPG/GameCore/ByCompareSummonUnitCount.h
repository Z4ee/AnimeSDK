#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_41E14F5B051FFE73_OFFSET UNITYSDK_OFFSET(0x1A8AA0F0)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_7349E7104DD7D4AE_OFFSET UNITYSDK_OFFSET(0x1A8A9DF0)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_D65C8F8F1838411A_OFFSET UNITYSDK_OFFSET(0x1A8A9E90)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_F1BBE788FE3F3112_OFFSET UNITYSDK_OFFSET(0x1A8AA150)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A9E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSummonUnitCount_TypeDefinitionIndex = 19467;

	class ByCompareSummonUnitCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Summoner; // 0x20
		::System::UInt32 SummonUnitID; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7349E7104DD7D4AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSummonUnitCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSummonUnitCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_7349E7104DD7D4AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D65C8F8F1838411A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_D65C8F8F1838411A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_41E14F5B051FFE73(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSummonUnitCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSummonUnitCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_41E14F5B051FFE73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F1BBE788FE3F3112(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_F1BBE788FE3F3112_OFFSET))(a1, a2);
		}
	};
}
