#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletView.h"

class Class_0_16E4307DCC419505_873;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class BookletPageView; }
namespace RPG::Client { class UIAutoFlipMonoPlugin; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIPageTurnMonoPlugin; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_ADJUSTUIADAPTATION_OFFSET UNITYSDK_OFFSET(0x91F90F0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_DESTROY_OFFSET UNITYSDK_OFFSET(0x91F8990)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GETPAGE_OFFSET UNITYSDK_OFFSET(0x91F89F0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GET_LEFTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0x91F8880)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GET_RIGHTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0x91F88A0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x91F88C0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_LEFTFLIP_OFFSET UNITYSDK_OFFSET(0x91F8AE0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_RIGHTFLIP_OFFSET UNITYSDK_OFFSET(0x91F8F50)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_LEFTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0x91F8890)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_RIGHTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0x91F88B0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x91F99E0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__DESTROYEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x91F9410)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__DESTROYPAGES_OFFSET UNITYSDK_OFFSET(0x91F97A0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__INITEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x91F92F0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__INITPAGES_OFFSET UNITYSDK_OFFSET(0x91F9520)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__ONNEXTFLIPPED_OFFSET UNITYSDK_OFFSET(0x91F9220)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__ONPREVIOUSFLIPPED_OFFSET UNITYSDK_OFFSET(0x91F9150)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW___IFIXBASEPROXY_ADJUSTUIADAPTATION_OFFSET UNITYSDK_OFFSET(0x91F9CC0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW___IFIXBASEPROXY_DESTROY_OFFSET UNITYSDK_OFFSET(0x91F9C10)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x91F9B10)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletFlippableView_TypeDefinitionIndex = 59296;

	class BookletFlippableView : public ::RPG::Client::BookletView
	{
	public:
		// static const ::System::Int32 AbovePageIndex = 0xFFFFFFFF; // 0x0
		::RPG::Client::BookletPageView* AbovePage; // 0x48
		::RPG::Client::UIAutoFlipMonoPlugin* AutoFlipPlugin; // 0x50
		::RPG::Client::UIPageTurnMonoPlugin* PageTurnPlugin; // 0x58
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_873*>* _Pages; // 0x60
		::System::String* _LeftFlipAudioEventName_k__BackingField; // 0x68
		::System::String* _RightFlipAudioEventName_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__CTOR_OFFSET))(this);
		}

		::System::String* get_LeftFlipAudioEventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GET_LEFTFLIPAUDIOEVENTNAME_OFFSET))(this);
		}

		::System::Void set_LeftFlipAudioEventName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_LEFTFLIPAUDIOEVENTNAME_OFFSET))(this, value);
		}

		::System::String* get_RightFlipAudioEventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GET_RIGHTFLIPAUDIOEVENTNAME_OFFSET))(this);
		}

		::System::Void set_RightFlipAudioEventName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_RIGHTFLIPAUDIOEVENTNAME_OFFSET))(this, value);
		}

		::System::Void Init(::RPG::Client::UIController* owner, ::RPG::Client::Booklet* context, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* panelCreator, ::System::Action_1<::System::UInt32>* panelDestroyer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::Booklet*, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_INIT_OFFSET))(this, owner, context, panelCreator, panelDestroyer);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_DESTROY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_873* GetPage(::System::Int32 index)
		{
			return ((::Class_0_16E4307DCC419505_873*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GETPAGE_OFFSET))(this, index);
		}

		::System::Void LeftFlip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_LEFTFLIP_OFFSET))(this);
		}

		::System::Void RightFlip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_RIGHTFLIP_OFFSET))(this);
		}

		::System::Void AdjustUIAdaptation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_ADJUSTUIADAPTATION_OFFSET))(this);
		}

		::System::Void _OnPreviousFlipped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__ONPREVIOUSFLIPPED_OFFSET))(this);
		}

		::System::Void _OnNextFlipped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__ONNEXTFLIPPED_OFFSET))(this);
		}

		::System::Void _InitEventListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__INITEVENTLISTENER_OFFSET))(this);
		}

		::System::Void _DestroyEventListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__DESTROYEVENTLISTENER_OFFSET))(this);
		}

		::System::Void _InitPages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__INITPAGES_OFFSET))(this);
		}

		::System::Void _DestroyPages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW__DESTROYPAGES_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::RPG::Client::UIController* P0, ::RPG::Client::Booklet* P1, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* P2, ::System::Action_1<::System::UInt32>* P3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::Booklet*, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __iFixBaseProxy_Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW___IFIXBASEPROXY_DESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AdjustUIAdaptation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW___IFIXBASEPROXY_ADJUSTUIADAPTATION_OFFSET))(this);
		}
	};
}
