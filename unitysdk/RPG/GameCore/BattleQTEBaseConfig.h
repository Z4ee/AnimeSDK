#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_BATTLEQTEBASECONFIG_METHOD_2_454B3E92A821C610_OFFSET UNITYSDK_OFFSET(0x18703140)
#define RPG_GAMECORE_BATTLEQTEBASECONFIG_METHOD_2_6A4FB82806DB8594_OFFSET UNITYSDK_OFFSET(0x18703AF0)
#define RPG_GAMECORE_BATTLEQTEBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18703D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleQTEBaseConfig_TypeDefinitionIndex = 22313;

	class BattleQTEBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Delay; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInit; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTick; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIClick; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEQTEBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_454B3E92A821C610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleQTEBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleQTEBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEQTEBASECONFIG_METHOD_2_454B3E92A821C610_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6A4FB82806DB8594(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleQTEBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleQTEBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEQTEBASECONFIG_METHOD_2_6A4FB82806DB8594_OFFSET))(a1, a2);
		}
	};
}
