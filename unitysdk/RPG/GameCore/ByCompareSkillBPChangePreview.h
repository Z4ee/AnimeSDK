#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_04F8727BE56DAA96_OFFSET UNITYSDK_OFFSET(0x1A8A27D0)
#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_2D8B74C0AB2099EA_OFFSET UNITYSDK_OFFSET(0x1A8A2480)
#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_60A5D96F47A38267_OFFSET UNITYSDK_OFFSET(0x1A8A24C0)
#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_CF0F80A55FB203F9_OFFSET UNITYSDK_OFFSET(0x1A8A27A0)
#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A24B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSkillBPChangePreview_TypeDefinitionIndex = 22666;

	class ByCompareSkillBPChangePreview : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseCurrentSkill; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x24
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::String* MatchedModifierName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2D8B74C0AB2099EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSkillBPChangePreview*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_2D8B74C0AB2099EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_60A5D96F47A38267(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSkillBPChangePreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_60A5D96F47A38267_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF0F80A55FB203F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillBPChangePreview*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_CF0F80A55FB203F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_04F8727BE56DAA96(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillBPChangePreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_04F8727BE56DAA96_OFFSET))(a1, a2);
		}
	};
}
