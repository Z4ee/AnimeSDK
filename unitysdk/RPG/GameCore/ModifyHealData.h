#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFYHEALDATA_METHOD_3_2CF4CF3E39AAE3A3_OFFSET UNITYSDK_OFFSET(0x1D1BC120)
#define RPG_GAMECORE_MODIFYHEALDATA_METHOD_3_6C97B3E56D7B0942_OFFSET UNITYSDK_OFFSET(0x1D1BC3E0)
#define RPG_GAMECORE_MODIFYHEALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BC160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyHealData_TypeDefinitionIndex = 23305;

	class ModifyHealData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Healer_Attack; // 0x18
		::RPG::GameCore::DynamicFloat* Healer_AttackAddedRatio; // 0x20
		::RPG::GameCore::DynamicFloat* Healer_AttackDelta; // 0x28
		::RPG::GameCore::DynamicFloat* Healer_AttackConvert; // 0x30
		::RPG::GameCore::DynamicFloat* Healer_HealRatio; // 0x38
		::RPG::GameCore::DynamicFloat* Target_HealTakenRatio; // 0x40
		::RPG::GameCore::DynamicFloat* Task_HealPercentage; // 0x48
		::RPG::GameCore::DynamicFloat* Task_HealValue; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYHEALDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2CF4CF3E39AAE3A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyHealData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyHealData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYHEALDATA_METHOD_3_2CF4CF3E39AAE3A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C97B3E56D7B0942(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyHealData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyHealData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYHEALDATA_METHOD_3_6C97B3E56D7B0942_OFFSET))(a1, a2);
		}
	};
}
