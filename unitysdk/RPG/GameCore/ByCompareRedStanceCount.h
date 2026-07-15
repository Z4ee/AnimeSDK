#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREREDSTANCECOUNT_METHOD_4_29D1F5F8ABB6C806_OFFSET UNITYSDK_OFFSET(0x1A89CEC0)
#define RPG_GAMECORE_BYCOMPAREREDSTANCECOUNT_METHOD_4_79DC4D46E4024E30_OFFSET UNITYSDK_OFFSET(0x1A89CEF0)
#define RPG_GAMECORE_BYCOMPAREREDSTANCECOUNT_METHOD_4_BB65EB8857FB3B13_OFFSET UNITYSDK_OFFSET(0x1A89CC50)
#define RPG_GAMECORE_BYCOMPAREREDSTANCECOUNT_METHOD_4_CADE00AC07AB4576_OFFSET UNITYSDK_OFFSET(0x1A89CC90)
#define RPG_GAMECORE_BYCOMPAREREDSTANCECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A89CC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRedStanceCount_TypeDefinitionIndex = 22646;

	class ByCompareRedStanceCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREREDSTANCECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BB65EB8857FB3B13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRedStanceCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRedStanceCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREREDSTANCECOUNT_METHOD_4_BB65EB8857FB3B13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CADE00AC07AB4576(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRedStanceCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRedStanceCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREREDSTANCECOUNT_METHOD_4_CADE00AC07AB4576_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_29D1F5F8ABB6C806(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRedStanceCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRedStanceCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREREDSTANCECOUNT_METHOD_4_29D1F5F8ABB6C806_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79DC4D46E4024E30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRedStanceCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRedStanceCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREREDSTANCECOUNT_METHOD_4_79DC4D46E4024E30_OFFSET))(a1, a2);
		}
	};
}
