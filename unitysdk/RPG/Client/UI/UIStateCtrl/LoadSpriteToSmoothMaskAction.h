#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class LoadSpriteToSmoothMaskData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_METHOD_3_9B36D76C2F40A70E_OFFSET UNITYSDK_OFFSET(0xE34A390)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_METHOD_3_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xE34A5F0)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_METHOD_3_E0BF35412B33FA89_OFFSET UNITYSDK_OFFSET(0xE34A920)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE34A9A0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int LoadSpriteToSmoothMaskAction_TypeDefinitionIndex = 74050;

	class LoadSpriteToSmoothMaskAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::LoadSpriteToSmoothMaskData*>* LoadSpriteToSmoothMaskDatas; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_9B36D76C2F40A70E(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_METHOD_3_9B36D76C2F40A70E_OFFSET))(this, a1);
		}

		::System::Void Method_3_B43C848B078B3C34()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_METHOD_3_B43C848B078B3C34_OFFSET))(this);
		}

		static ::System::Void Method_3_E0BF35412B33FA89(::UnityEngine::UI::SmoothMask* a1, ::UnityEngine::Sprite* a2)
		{
			return ((::System::Void(*)(::UnityEngine::UI::SmoothMask*, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKACTION_METHOD_3_E0BF35412B33FA89_OFFSET))(a1, a2);
		}
	};
}
