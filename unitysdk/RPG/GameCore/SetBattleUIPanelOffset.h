#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETBATTLEUIPANELOFFSET_METHOD_3_9C241240AFC344FB_OFFSET UNITYSDK_OFFSET(0x176AAB30)
#define RPG_GAMECORE_SETBATTLEUIPANELOFFSET_METHOD_3_EE1C0BC2687B901F_OFFSET UNITYSDK_OFFSET(0x176AABB0)
#define RPG_GAMECORE_SETBATTLEUIPANELOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x176AAB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleUIPanelOffset_TypeDefinitionIndex = 21477;

	class SetBattleUIPanelOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleUIPanelType PanelType; // 0x18
		::RPG::MVector2 Offset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPANELOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C241240AFC344FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleUIPanelOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleUIPanelOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPANELOFFSET_METHOD_3_9C241240AFC344FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE1C0BC2687B901F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleUIPanelOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleUIPanelOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPANELOFFSET_METHOD_3_EE1C0BC2687B901F_OFFSET))(a1, a2);
		}
	};
}
