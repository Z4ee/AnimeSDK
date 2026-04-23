#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"

namespace RPG::Client::UI::UIStateCtrl { class LoadSpritToImageData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_2DDE89C113413F59_OFFSET UNITYSDK_OFFSET(0xB3A4BF0)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0xB3A4940)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_C800B8B11A7C0A62_OFFSET UNITYSDK_OFFSET(0xB3A4A50)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB3A4E10)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A4D70)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int LoadSpriteToImageAction_TypeDefinitionIndex = 68160;

	class LoadSpriteToImageAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::LoadSpritToImageData*>* LoadSpriteToImageDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Sprite*>* _SpriteCache; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_47680E2642F37A1B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_47680E2642F37A1B_OFFSET))(this);
		}

		::System::Void Method_3_C800B8B11A7C0A62(::RPG::Client::UI::UIStateCtrl::LoadSpritToImageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::LoadSpritToImageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_C800B8B11A7C0A62_OFFSET))(this, a1);
		}

		::System::Void Method_3_2DDE89C113413F59()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_2DDE89C113413F59_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
