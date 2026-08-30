#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class LoadSpritToImageData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_2309BA5762001099_OFFSET UNITYSDK_OFFSET(0x1B11DCB0)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x1B11DEF0)
#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11E110)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int LoadSpriteToImageAction_TypeDefinitionIndex = 73951;

	class LoadSpriteToImageAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::LoadSpritToImageData*>* LoadSpriteToImageDatas; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_2309BA5762001099(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_2309BA5762001099_OFFSET))(this, a1);
		}

		::System::Void Method_3_AC7CD4175E0A3EF8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOIMAGEACTION_METHOD_3_AC7CD4175E0A3EF8_OFFSET))(this);
		}
	};
}
