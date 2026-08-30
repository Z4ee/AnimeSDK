#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_5BAAA37E5C859879_OFFSET UNITYSDK_OFFSET(0x1CECB330)
#define RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_5CE7B5072F997BB0_OFFSET UNITYSDK_OFFSET(0x1CECB2F0)
#define RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_637C8FF4D1E08CE5_OFFSET UNITYSDK_OFFSET(0x1CECB590)
#define RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_A26551549B5D42D3_OFFSET UNITYSDK_OFFSET(0x1CECB560)
#define RPG_GAMECORE_BYCOMPAREHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECB320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHPRatio_TypeDefinitionIndex = 22736;

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

		static ::System::Void Method_4_5CE7B5072F997BB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_5CE7B5072F997BB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5BAAA37E5C859879(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_5BAAA37E5C859879_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A26551549B5D42D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHPRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_A26551549B5D42D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_637C8FF4D1E08CE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_637C8FF4D1E08CE5_OFFSET))(a1, a2);
		}
	};
}
