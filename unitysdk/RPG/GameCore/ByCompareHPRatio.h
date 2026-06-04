#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_1576F02E1FFDD53B_OFFSET UNITYSDK_OFFSET(0x19517A40)
#define RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_5BAAA37E5C859879_OFFSET UNITYSDK_OFFSET(0x19517B10)
#define RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_67930318568B271F_OFFSET UNITYSDK_OFFSET(0x19517D40)
#define RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_9B0E84FCB5FE5284_OFFSET UNITYSDK_OFFSET(0x19517DC0)
#define RPG_GAMECORE_BYCOMPAREHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x19517AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHPRatio_TypeDefinitionIndex = 21741;

	class ByCompareHPRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1576F02E1FFDD53B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_1576F02E1FFDD53B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5BAAA37E5C859879(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_5BAAA37E5C859879_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67930318568B271F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHPRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_67930318568B271F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B0E84FCB5FE5284(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_9B0E84FCB5FE5284_OFFSET))(a1, a2);
		}
	};
}
