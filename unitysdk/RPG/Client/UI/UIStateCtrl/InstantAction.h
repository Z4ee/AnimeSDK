#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/BaseAction.h"

namespace System { class String; }

#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xE30A930)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xE30A840)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_BA0DC2F7F154B425_OFFSET UNITYSDK_OFFSET(0xE30AA20)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE309FD0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int InstantAction_TypeDefinitionIndex = 73969;

	class InstantAction : public ::RPG::Client::UI::UIStateCtrl::BaseAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_2_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::String* Method_2_BA0DC2F7F154B425()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_BA0DC2F7F154B425_OFFSET))(this);
		}
	};
}
