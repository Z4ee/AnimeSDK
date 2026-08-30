#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW_METHOD_3_75C8E7FD74013926_OFFSET UNITYSDK_OFFSET(0x1D036F60)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW_METHOD_3_F41EB76F7B68400F_OFFSET UNITYSDK_OFFSET(0x1D0370A0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D037090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ShowBossPersistentTipsView_TypeDefinitionIndex = 16017;

	class DiceCombatTaskConfig_ShowBossPersistentTipsView : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::Client::TextID TipsTextID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75C8E7FD74013926(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW_METHOD_3_75C8E7FD74013926_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F41EB76F7B68400F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SHOWBOSSPERSISTENTTIPSVIEW_METHOD_3_F41EB76F7B68400F_OFFSET))(a1, a2);
		}
	};
}
