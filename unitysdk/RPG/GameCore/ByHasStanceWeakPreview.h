#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/WeaknessFilterType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_METHOD_4_33DE390C63886E7D_OFFSET UNITYSDK_OFFSET(0x1A8CB570)
#define RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_METHOD_4_4003166403879B72_OFFSET UNITYSDK_OFFSET(0x1A8CB270)
#define RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_METHOD_4_BA8DEEA41E6A0D53_OFFSET UNITYSDK_OFFSET(0x1A8CB5B0)
#define RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_METHOD_4_F10280AC5E116293_OFFSET UNITYSDK_OFFSET(0x1A8CB220)
#define RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CB260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasStanceWeakPreview_TypeDefinitionIndex = 21744;

	class ByHasStanceWeakPreview : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackDamageTypeConfig* WeakType; // 0x28
		::RPG::GameCore::WeaknessFilterType WeaknessFilter; // 0x30
		::System::Boolean AnyTargetMatch; // 0x34
		::System::Boolean PreAddOnly; // 0x35
		::System::Boolean PreAddIgnoreWeaknessDuplicate; // 0x36

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F10280AC5E116293(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasStanceWeakPreview*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasStanceWeakPreview*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_METHOD_4_F10280AC5E116293_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4003166403879B72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasStanceWeakPreview* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasStanceWeakPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_METHOD_4_4003166403879B72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33DE390C63886E7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeakPreview*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeakPreview*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_METHOD_4_33DE390C63886E7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BA8DEEA41E6A0D53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeakPreview* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeakPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_METHOD_4_BA8DEEA41E6A0D53_OFFSET))(a1, a2);
		}
	};
}
