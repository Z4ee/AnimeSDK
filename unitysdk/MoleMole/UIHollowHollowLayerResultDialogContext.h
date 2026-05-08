#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UILevelResultPageContext; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWHOLLOWLAYERRESULTDIALOGCONTEXT_EXECUTECLOSE_OFFSET UNITYSDK_OFFSET(0x150C7060)
#define MOLEMOLE_UIHOLLOWHOLLOWLAYERRESULTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150C7050)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowHollowLayerResultDialogContext_TypeDefinitionIndex = 38700;

	class UIHollowHollowLayerResultDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* _onClose; // 0x28
		::MoleMole::UILevelResultPageContext* _pageContext; // 0x30
		::System::Boolean ShowBlackMask; // 0x38

		::System::Void _ctor(::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWHOLLOWLAYERRESULTDIALOGCONTEXT__CTOR_OFFSET))(this, onClose);
		}

		::System::Void ExecuteClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWHOLLOWLAYERRESULTDIALOGCONTEXT_EXECUTECLOSE_OFFSET))(this);
		}
	};
}
