#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"

namespace RPG::Client::UI::UIStateCtrl { class LoadSpritToImageData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_7E9C4D81D04C3024_OFFSET UNITYSDK_OFFSET(0xA64CEC0)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_7EDE9E9E9F847110_OFFSET UNITYSDK_OFFSET(0xA64D1E0)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA64D450)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_E068A59BAB9D06D1_OFFSET UNITYSDK_OFFSET(0xA64D010)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA64D390)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int LoadSpriteToImageAction_TypeDefinitionIndex = 60718;

	class LoadSpriteToImageAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::LoadSpritToImageData*>* LoadSpriteToImageDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Sprite*>* _SpriteCache; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_7E9C4D81D04C3024()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_7E9C4D81D04C3024_OFFSET))(this);
		}

		::System::Void Method_3_E068A59BAB9D06D1(::RPG::Client::UI::UIStateCtrl::LoadSpritToImageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::LoadSpritToImageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_E068A59BAB9D06D1_OFFSET))(this, a1);
		}

		::System::Void Method_3_7EDE9E9E9F847110()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_7EDE9E9E9F847110_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
