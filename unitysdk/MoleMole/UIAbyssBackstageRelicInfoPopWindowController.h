#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_3BBFBFA80E3DB6CF;
class Class_2_541EA3F0D78A7596;
class Class_2_DD0C18373FC569C0;
namespace MoleMole { class UIAbyssBackstageRelicInfoPopContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIYorozuyaAbyssS3RoleBigItemRowWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x197AA9F0)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET__RELICDIC_OFFSET UNITYSDK_OFFSET(0x197AD530)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET__RELICLIST_OFFSET UNITYSDK_OFFSET(0x197ADA70)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_INITTAB_OFFSET UNITYSDK_OFFSET(0x197AAC80)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197ACB10)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONLEFTTABCLICK_OFFSET UNITYSDK_OFFSET(0x197ACE50)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONRIGHTBTNCLICK_OFFSET UNITYSDK_OFFSET(0x197AD5B0)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197ACBA0)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197AAA00)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197AAB90)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_SETAVATARBTNSELECT_OFFSET UNITYSDK_OFFSET(0x197AD750)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_TRYGETDEFAULTTABINDEXBYRELICID_OFFSET UNITYSDK_OFFSET(0x197ACC10)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197ADBB0)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER__ONLEFTTABCLICK_B__9_0_OFFSET UNITYSDK_OFFSET(0x197ADCE0)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197ADD00)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197ADD90)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197ADDA0)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197ADDB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssBackstageRelicInfoPopWindowController_TypeDefinitionIndex = 63366;

	class UIAbyssBackstageRelicInfoPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_DD0C18373FC569C0* _view; // 0x318
		::MoleMole::UIAbyssBackstageRelicInfoPopContext* _context; // 0x320
		::System::Int32 _pendingRightTabIndex; // 0x328
		::System::Int32 _leftTabIndex; // 0x32C
		::System::Int32 _rightTabIndex; // 0x330
		::System::Collections::Generic::List_1<::Class_2_541EA3F0D78A7596*>* _genreList; // 0x338
		::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>* _relicDicList; // 0x340
		::System::Collections::Generic::List_1<::System::Int32>* _avatarList; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaAbyssS3RoleBigItemRowWidgetController*>* _avatarBtnList; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_INITTAB_OFFSET))(this);
		}

		::System::Boolean TryGetDefaultTabIndexByRelicID(::System::Int32 relicID, ::System::Int32& leftIndex, ::System::Int32& rightIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_TRYGETDEFAULTTABINDEXBYRELICID_OFFSET))(this, relicID, leftIndex, rightIndex);
		}

		::System::Void OnLeftTabClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONLEFTTABCLICK_OFFSET))(this, index);
		}

		::System::Void OnRightBtnClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_ONRIGHTBTNCLICK_OFFSET))(this, index);
		}

		::System::Void SetAvatarBtnSelect(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_SETAVATARBTNSELECT_OFFSET))(this, index);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* get__relicDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET__RELICDIC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get__relicList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER_GET__RELICLIST_OFFSET))(this);
		}

		::System::Void _OnLeftTabClick_b__9_0(::Class_1_3BBFBFA80E3DB6CF* _data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3BBFBFA80E3DB6CF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER__ONLEFTTABCLICK_B__9_0_OFFSET))(this, _data);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
