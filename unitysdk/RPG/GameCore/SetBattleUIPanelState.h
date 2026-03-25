#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETBATTLEUIPANELSTATE_METHOD_3_0C26432518CD7DA3_OFFSET UNITYSDK_OFFSET(0x176AAD10)
#define RPG_GAMECORE_SETBATTLEUIPANELSTATE_METHOD_3_4309EF5932473441_OFFSET UNITYSDK_OFFSET(0x176AAD90)
#define RPG_GAMECORE_SETBATTLEUIPANELSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176AAD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleUIPanelState_TypeDefinitionIndex = 21010;

	class SetBattleUIPanelState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleUIPanelType>* PanelTypes; // 0x18
		::System::String* PanelGroup; // 0x20
		::System::Boolean IsActive; // 0x28
		::System::Boolean AllPanel; // 0x29
		::System::String* UniqueKey; // 0x30
		::System::Boolean IsRevert; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPANELSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0C26432518CD7DA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleUIPanelState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleUIPanelState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPANELSTATE_METHOD_3_0C26432518CD7DA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4309EF5932473441(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleUIPanelState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleUIPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPANELSTATE_METHOD_3_4309EF5932473441_OFFSET))(a1, a2);
		}
	};
}
