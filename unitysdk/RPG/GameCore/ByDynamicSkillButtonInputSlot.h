#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_6A389FE0FC982DF1_OFFSET UNITYSDK_OFFSET(0x19547CC0)
#define RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_82B65F027918B258_OFFSET UNITYSDK_OFFSET(0x19547C40)
#define RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_98F4499802C9B465_OFFSET UNITYSDK_OFFSET(0x195479F0)
#define RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_DF8062560B5EE8BB_OFFSET UNITYSDK_OFFSET(0x19547AC0)
#define RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19547A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDynamicSkillButtonInputSlot_TypeDefinitionIndex = 21601;

	class ByDynamicSkillButtonInputSlot : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ControlSkillType Slot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_98F4499802C9B465(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_98F4499802C9B465_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF8062560B5EE8BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_DF8062560B5EE8BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82B65F027918B258(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_82B65F027918B258_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6A389FE0FC982DF1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_6A389FE0FC982DF1_OFFSET))(a1, a2);
		}
	};
}
