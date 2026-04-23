#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_60A5D96F47A38267_OFFSET UNITYSDK_OFFSET(0x1873B050)
#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_EADAF30390E0F6E9_OFFSET UNITYSDK_OFFSET(0x1873AF80)
#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1873B000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSkillBPChangePreview_TypeDefinitionIndex = 22477;

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

		static ::System::Void Method_4_EADAF30390E0F6E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSkillBPChangePreview*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_EADAF30390E0F6E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_60A5D96F47A38267(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSkillBPChangePreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_METHOD_4_60A5D96F47A38267_OFFSET))(a1, a2);
		}
	};
}
