#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_B7A012A804BEA677;
namespace MoleMole { class UIStickerShowWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWFRAME_OFFSET UNITYSDK_OFFSET(0x16888AF0)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWSETTINGSCOPEDFRONT_OFFSET UNITYSDK_OFFSET(0x16888AD0)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWSTICKER_OFFSET UNITYSDK_OFFSET(0x16888B10)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWVOLUME_OFFSET UNITYSDK_OFFSET(0x16888AB0)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_GET_RESETSETTINGTABINDEX_OFFSET UNITYSDK_OFFSET(0x16888B30)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWFRAME_OFFSET UNITYSDK_OFFSET(0x16888B00)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWSETTINGSCOPEDFRONT_OFFSET UNITYSDK_OFFSET(0x16888AE0)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWSTICKER_OFFSET UNITYSDK_OFFSET(0x16888B20)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWVOLUME_OFFSET UNITYSDK_OFFSET(0x16888AC0)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_SET_RESETSETTINGTABINDEX_OFFSET UNITYSDK_OFFSET(0x16888B40)
#define MOLEMOLE_PHOTOSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16888B50)

namespace MoleMole
{
	inline static constexpr unsigned int PhotoSettingContext_TypeDefinitionIndex = 72962;

	class PhotoSettingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::MoleMole::InputActionEvent, ::System::Boolean>* OnInputActiveHandle; // 0x28
		::System::Func_1<::UnityEngine::RectTransform*>* GetStickerRoot; // 0x30
		::System::Func_1<::System::Collections::Generic::IList_1<::MoleMole::UIStickerShowWidgetController*>*>* GetActiveStickerWidgetCtrlList; // 0x38
		::Class_1_B7A012A804BEA677* SpecialGestureData; // 0x40
		::System::Boolean _IsShowSticker_k__BackingField; // 0x48
		::System::Boolean _IsShowVolume_k__BackingField; // 0x49
		::System::Boolean _IsShowSettingScopedFront_k__BackingField; // 0x4A
		::System::Boolean _ResetSettingTabIndex_k__BackingField; // 0x4B
		::System::Boolean _IsShowFrame_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShowVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWVOLUME_OFFSET))(this);
		}

		::System::Void set_IsShowVolume(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWVOLUME_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowSettingScopedFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWSETTINGSCOPEDFRONT_OFFSET))(this);
		}

		::System::Void set_IsShowSettingScopedFront(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWSETTINGSCOPEDFRONT_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWFRAME_OFFSET))(this);
		}

		::System::Void set_IsShowFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowSticker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWSTICKER_OFFSET))(this);
		}

		::System::Void set_IsShowSticker(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWSTICKER_OFFSET))(this, value);
		}

		::System::Boolean get_ResetSettingTabIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_GET_RESETSETTINGTABINDEX_OFFSET))(this);
		}

		::System::Void set_ResetSettingTabIndex(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_SET_RESETSETTINGTABINDEX_OFFSET))(this, value);
		}
	};
}
