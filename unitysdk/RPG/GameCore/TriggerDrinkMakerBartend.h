#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND_METHOD_3_BE306024692CB6E0_OFFSET UNITYSDK_OFFSET(0x1D5F26A0)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND_METHOD_3_EE523BA3205AE9A3_OFFSET UNITYSDK_OFFSET(0x1D5F2660)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F2690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerDrinkMakerBartend_TypeDefinitionIndex = 21466;

	class TriggerDrinkMakerBartend : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggered; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE523BA3205AE9A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerDrinkMakerBartend*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerDrinkMakerBartend*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND_METHOD_3_EE523BA3205AE9A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE306024692CB6E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerDrinkMakerBartend* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerDrinkMakerBartend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND_METHOD_3_BE306024692CB6E0_OFFSET))(a1, a2);
		}
	};
}
