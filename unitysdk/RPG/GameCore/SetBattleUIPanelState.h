#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETBATTLEUIPANELSTATE_METHOD_3_DD16B946F620AFB9_OFFSET UNITYSDK_OFFSET(0x19C2C4A0)
#define RPG_GAMECORE_SETBATTLEUIPANELSTATE_METHOD_3_E58CA86274BE6A56_OFFSET UNITYSDK_OFFSET(0x19C2C520)
#define RPG_GAMECORE_SETBATTLEUIPANELSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2C4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleUIPanelState_TypeDefinitionIndex = 21571;

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

		static ::System::Void Method_3_DD16B946F620AFB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleUIPanelState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleUIPanelState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPANELSTATE_METHOD_3_DD16B946F620AFB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E58CA86274BE6A56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleUIPanelState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleUIPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPANELSTATE_METHOD_3_E58CA86274BE6A56_OFFSET))(a1, a2);
		}
	};
}
