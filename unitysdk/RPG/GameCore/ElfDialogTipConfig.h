#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELFDIALOGTIPCONFIG_METHOD_2_7150A0925107552F_OFFSET UNITYSDK_OFFSET(0x1BB35FA0)
#define RPG_GAMECORE_ELFDIALOGTIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB361F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfDialogTipConfig_TypeDefinitionIndex = 17735;

	class ElfDialogTipConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CookingBusyTip; // 0x10
		::System::String* CookingIdleTip; // 0x18
		::System::String* WaiterBusyTip; // 0x20
		::System::String* HeadWaiterBusyTip; // 0x28
		::System::String* WaiterClickTip; // 0x30
		::System::String* DropFoodTip; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDIALOGTIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7150A0925107552F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfDialogTipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfDialogTipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDIALOGTIPCONFIG_METHOD_2_7150A0925107552F_OFFSET))(a1, a2);
		}
	};
}
