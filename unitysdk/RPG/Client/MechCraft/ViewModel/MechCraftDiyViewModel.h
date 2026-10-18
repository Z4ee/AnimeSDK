#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
class Class_1_9D920BED3FEFDD0C;
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronEditViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronListViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiyMechatronEditViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiyMechatronListViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiySignal; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiyViewEvent; }
namespace RPG::Client::MechCraft::ViewModel { template <typename T> class MechCraftDiySignal_1; }
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD675C30)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_CONFIRMEXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xD675030)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_DISCARDEXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xD675040)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_EXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xD675020)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_EXITPREVIEWCOMMAND_OFFSET UNITYSDK_OFFSET(0xD675060)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_ISPREVIEWING_OFFSET UNITYSDK_OFFSET(0xD675000)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_MECHATRONEDIT_OFFSET UNITYSDK_OFFSET(0xD674F90)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_MECHATRONLIST_OFFSET UNITYSDK_OFFSET(0xD674F80)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_PREVIEWCOMMAND_OFFSET UNITYSDK_OFFSET(0xD675050)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0xD674FA0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SET_ISPREVIEWING_OFFSET UNITYSDK_OFFSET(0xD675010)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SUBSCRIBECHANGED_OFFSET UNITYSDK_OFFSET(0xD6754D0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SUBSCRIBEVIEWEVENT_OFFSET UNITYSDK_OFFSET(0xD675530)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__COMPLETEEXIT_OFFSET UNITYSDK_OFFSET(0xD675810)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD675070)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONCONFIRMEXIT_OFFSET UNITYSDK_OFFSET(0xD675900)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONDISCARDEXIT_OFFSET UNITYSDK_OFFSET(0xD675A50)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONEXITPREVIEW_OFFSET UNITYSDK_OFFSET(0xD675B80)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONEXIT_OFFSET UNITYSDK_OFFSET(0xD675680)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONPREVIEW_OFFSET UNITYSDK_OFFSET(0xD675AD0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__UPDATEMECHATRONITEM_OFFSET UNITYSDK_OFFSET(0xD6755C0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyViewModel_TypeDefinitionIndex = 79624;

	class MechCraftDiyViewModel : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftDiySignal_1<::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEvent*>* _ViewEvent; // 0x10
		::System::IDisposable* _ExitSaveSucceededSubscription; // 0x18
		::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronListViewModel* _MechatronList; // 0x20
		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEditViewModel* _MechatronEdit_k__BackingField; // 0x28
		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronListViewModel* _MechatronList_k__BackingField; // 0x30
		::Class_0_16E4307DCC419505_397* _ExitCommand_k__BackingField; // 0x38
		::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditViewModel* _MechatronEdit; // 0x40
		::Class_0_16E4307DCC419505_397* _ConfirmExitCommand_k__BackingField; // 0x48
		::Class_0_16E4307DCC419505_397* _ExitPreviewCommand_k__BackingField; // 0x50
		::System::IDisposable* _ListChangedSubscription; // 0x58
		::Class_0_16E4307DCC419505_397* _PreviewCommand_k__BackingField; // 0x60
		::Class_1_9D920BED3FEFDD0C* _GameSessionService; // 0x68
		::Class_0_16E4307DCC419505_397* _DiscardExitCommand_k__BackingField; // 0x70
		::RPG::Client::MechCraft::ViewModel::MechCraftDiySignal* _Changed; // 0x78
		::System::Boolean _ExitRequested; // 0x80
		::System::Boolean _Disposed; // 0x81
		::System::Boolean _IsPreviewing_k__BackingField; // 0x82

		::System::Void _ctor(::Class_1_9D920BED3FEFDD0C* a1, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronListViewModel* a2, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditViewModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D920BED3FEFDD0C*, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronListViewModel*, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronListViewModel* get_MechatronList()
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronListViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_MECHATRONLIST_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEditViewModel* get_MechatronEdit()
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEditViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_MECHATRONEDIT_OFFSET))(this);
		}

		::System::String* get_StateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_STATENAME_OFFSET))(this);
		}

		::System::Boolean get_IsPreviewing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_ISPREVIEWING_OFFSET))(this);
		}

		::System::Void set_IsPreviewing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SET_ISPREVIEWING_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_397* get_ExitCommand()
		{
			return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_EXITCOMMAND_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_397* get_ConfirmExitCommand()
		{
			return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_CONFIRMEXITCOMMAND_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_397* get_DiscardExitCommand()
		{
			return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_DISCARDEXITCOMMAND_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_397* get_PreviewCommand()
		{
			return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_PREVIEWCOMMAND_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_397* get_ExitPreviewCommand()
		{
			return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_GET_EXITPREVIEWCOMMAND_OFFSET))(this);
		}

		::System::IDisposable* SubscribeChanged(::System::Action* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SUBSCRIBECHANGED_OFFSET))(this, a1);
		}

		::System::IDisposable* SubscribeViewEvent(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEvent*>* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEvent*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_SUBSCRIBEVIEWEVENT_OFFSET))(this, a1);
		}

		::System::Void _UpdateMechatronItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__UPDATEMECHATRONITEM_OFFSET))(this);
		}

		::System::Void _OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONEXIT_OFFSET))(this);
		}

		::System::Void _OnConfirmExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONCONFIRMEXIT_OFFSET))(this);
		}

		::System::Void _OnDiscardExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONDISCARDEXIT_OFFSET))(this);
		}

		::System::Void _CompleteExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__COMPLETEEXIT_OFFSET))(this);
		}

		::System::Void _OnPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONPREVIEW_OFFSET))(this);
		}

		::System::Void _OnExitPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL__ONEXITPREVIEW_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWMODEL_DISPOSE_OFFSET))(this);
		}
	};
}
