#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_A34C2405751BD2E0_OFFSET UNITYSDK_OFFSET(0x1A8E3E70)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_AAC00323463F8DA0_OFFSET UNITYSDK_OFFSET(0x1A8E3CD0)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_BBB14A4284876633_OFFSET UNITYSDK_OFFSET(0x1A8E3D00)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_C55DD720A5241369_OFFSET UNITYSDK_OFFSET(0x1A8E3E40)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B299930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsHealCallBackStack_TypeDefinitionIndex = 22655;

	class ByIsHealCallBackStack : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AAC00323463F8DA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsHealCallBackStack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsHealCallBackStack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_AAC00323463F8DA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BBB14A4284876633(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsHealCallBackStack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsHealCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_BBB14A4284876633_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C55DD720A5241369(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHealCallBackStack*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHealCallBackStack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_C55DD720A5241369_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A34C2405751BD2E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHealCallBackStack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHealCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_A34C2405751BD2E0_OFFSET))(a1, a2);
		}
	};
}
