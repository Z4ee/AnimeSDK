#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIStickerShowWidgetController; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_CONTEXT_GET_STICKERID_OFFSET UNITYSDK_OFFSET(0x15F51480)
#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_CONTEXT_GET_STICKERINDEX_OFFSET UNITYSDK_OFFSET(0x15F517F0)
#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F51B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoStickerControlPopWindowController_Context_TypeDefinitionIndex = 81084;

	class UIPhotoStickerControlPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_3<::System::Int32, ::System::Int32, ::MoleMole::UIStickerShowWidgetController*>* GetStickerWidgetCtrl; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_StickerId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_CONTEXT_GET_STICKERID_OFFSET))(this);
		}

		::System::Int32 get_StickerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_CONTEXT_GET_STICKERINDEX_OFFSET))(this);
		}
	};
}
