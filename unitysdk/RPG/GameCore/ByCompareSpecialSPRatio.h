#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_05557169017AA81D_OFFSET UNITYSDK_OFFSET(0x1BBBD9A0)
#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_0AD23D08ABDAF911_OFFSET UNITYSDK_OFFSET(0x1BBBD740)
#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_C0DFC9AC2E5205BB_OFFSET UNITYSDK_OFFSET(0x1BBBD970)
#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_D4B69E50D0CE3288_OFFSET UNITYSDK_OFFSET(0x1BBBD700)
#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBBD730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSpecialSPRatio_TypeDefinitionIndex = 22738;

	class ByCompareSpecialSPRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D4B69E50D0CE3288(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSpecialSPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSpecialSPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_D4B69E50D0CE3288_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0AD23D08ABDAF911(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSpecialSPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSpecialSPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_0AD23D08ABDAF911_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C0DFC9AC2E5205BB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialSPRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialSPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_C0DFC9AC2E5205BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_05557169017AA81D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialSPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialSPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_05557169017AA81D_OFFSET))(a1, a2);
		}
	};
}
