#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEBGMSTATECONFIG_METHOD_2_D1CBEA4180F1CD76_OFFSET UNITYSDK_OFFSET(0x194C37A0)
#define RPG_GAMECORE_BATTLEBGMSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194C38C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleBGMStateConfig_TypeDefinitionIndex = 17227;

	class BattleBGMStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Priority; // 0x10
		::Il2CppArray<::System::String*>* BGMStateList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D1CBEA4180F1CD76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleBGMStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleBGMStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMSTATECONFIG_METHOD_2_D1CBEA4180F1CD76_OFFSET))(a1, a2);
		}
	};
}
