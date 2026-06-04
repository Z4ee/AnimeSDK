#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_0AD23D08ABDAF911_OFFSET UNITYSDK_OFFSET(0x195331E0)
#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_1AF099FFF0498863_OFFSET UNITYSDK_OFFSET(0x19533110)
#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_261CC8249E45543C_OFFSET UNITYSDK_OFFSET(0x19533490)
#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_CDBFCB8B911A00E7_OFFSET UNITYSDK_OFFSET(0x19533410)
#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x19533190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSpecialSPRatio_TypeDefinitionIndex = 21743;

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

		static ::System::Void Method_4_1AF099FFF0498863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSpecialSPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSpecialSPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_1AF099FFF0498863_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0AD23D08ABDAF911(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSpecialSPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSpecialSPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_0AD23D08ABDAF911_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CDBFCB8B911A00E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialSPRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialSPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_CDBFCB8B911A00E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_261CC8249E45543C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialSPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialSPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_261CC8249E45543C_OFFSET))(a1, a2);
		}
	};
}
