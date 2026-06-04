#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class LoadSpritToImageData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_441B5D44C1E2CE97_OFFSET UNITYSDK_OFFSET(0xCB04730)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_8A1C979A2319B852_OFFSET UNITYSDK_OFFSET(0xCB04C80)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xCB049D0)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCB04C30)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int LoadSpriteToImageAction_TypeDefinitionIndex = 69133;

	class LoadSpriteToImageAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::LoadSpritToImageData*>* LoadSpriteToImageDatas; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_441B5D44C1E2CE97(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_441B5D44C1E2CE97_OFFSET))(this, a1);
		}

		::System::Void Method_3_CD8EB704BDED69B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_CD8EB704BDED69B6_OFFSET))(this);
		}

		::System::Void Method_3_8A1C979A2319B852(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_8A1C979A2319B852_OFFSET))(this, a1);
		}
	};
}
