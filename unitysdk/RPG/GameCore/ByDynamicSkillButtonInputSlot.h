#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_36E3BC990138A0D1_OFFSET UNITYSDK_OFFSET(0x1BBD72C0)
#define RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_A6B93B3EA29C3FC2_OFFSET UNITYSDK_OFFSET(0x1BBD7100)
#define RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_DA6A8BFCD927CD9E_OFFSET UNITYSDK_OFFSET(0x1BBD72F0)
#define RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_DF8062560B5EE8BB_OFFSET UNITYSDK_OFFSET(0x1BBD7140)
#define RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD7130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDynamicSkillButtonInputSlot_TypeDefinitionIndex = 22590;

	class ByDynamicSkillButtonInputSlot : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ControlSkillType Slot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A6B93B3EA29C3FC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_A6B93B3EA29C3FC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF8062560B5EE8BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_DF8062560B5EE8BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_36E3BC990138A0D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_36E3BC990138A0D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DA6A8BFCD927CD9E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICSKILLBUTTONINPUTSLOT_METHOD_4_DA6A8BFCD927CD9E_OFFSET))(a1, a2);
		}
	};
}
