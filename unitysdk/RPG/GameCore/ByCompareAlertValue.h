#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlertValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREALERTVALUE_METHOD_4_0D5D4F1525F83EF1_OFFSET UNITYSDK_OFFSET(0x1CEB07A0)
#define RPG_GAMECORE_BYCOMPAREALERTVALUE_METHOD_4_27B2CA02A6F3E344_OFFSET UNITYSDK_OFFSET(0x1CEB0AC0)
#define RPG_GAMECORE_BYCOMPAREALERTVALUE_METHOD_4_F27D961655DEB5AB_OFFSET UNITYSDK_OFFSET(0x1CEB0A90)
#define RPG_GAMECORE_BYCOMPAREALERTVALUE_METHOD_4_FE3E1B0F91D61ED6_OFFSET UNITYSDK_OFFSET(0x1CEB07E0)
#define RPG_GAMECORE_BYCOMPAREALERTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB07D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAlertValue_TypeDefinitionIndex = 20536;

	class ByCompareAlertValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 GroupNpcMonsterID; // 0x24
		::RPG::GameCore::AlertValueCompareType CompareType; // 0x28
		::System::Single AlertValueMin; // 0x2C
		::System::Single AlertValueMax; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALERTVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0D5D4F1525F83EF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAlertValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAlertValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALERTVALUE_METHOD_4_0D5D4F1525F83EF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE3E1B0F91D61ED6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAlertValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALERTVALUE_METHOD_4_FE3E1B0F91D61ED6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F27D961655DEB5AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAlertValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAlertValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALERTVALUE_METHOD_4_F27D961655DEB5AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_27B2CA02A6F3E344(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAlertValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALERTVALUE_METHOD_4_27B2CA02A6F3E344_OFFSET))(a1, a2);
		}
	};
}
