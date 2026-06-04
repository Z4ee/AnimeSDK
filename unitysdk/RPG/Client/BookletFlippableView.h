#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletView.h"

class Class_0_16E4307DCC419505_1039;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class BookletPageView; }
namespace RPG::Client { class UIAutoFlipMonoPlugin; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIPageTurnMonoPlugin; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_ADJUSTUIADAPTATION_OFFSET UNITYSDK_OFFSET(0xB43F4F0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_DESTROY_OFFSET UNITYSDK_OFFSET(0xB43E9E0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GETPAGE_OFFSET UNITYSDK_OFFSET(0xB43EDF0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GET_LEFTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0xB43E480)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GET_RIGHTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0xB43E4A0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_INIT_OFFSET UNITYSDK_OFFSET(0xB43E4C0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_LEFTFLIP_OFFSET UNITYSDK_OFFSET(0xB43EEC0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_RIGHTFLIP_OFFSET UNITYSDK_OFFSET(0xB43F350)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_LEFTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0xB43E490)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_RIGHTFLIPAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0xB43E4B0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xB43F790)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__DESTROYEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xB43EC80)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__DESTROYPAGES_OFFSET UNITYSDK_OFFSET(0xB43EA60)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__INITEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xB43E8A0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__INITPAGES_OFFSET UNITYSDK_OFFSET(0xB43E610)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__ONNEXTFLIPPED_OFFSET UNITYSDK_OFFSET(0xB43F620)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW__ONPREVIOUSFLIPPED_OFFSET UNITYSDK_OFFSET(0xB43F550)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW___IFIXBASEPROXY_ADJUSTUIADAPTATION_OFFSET UNITYSDK_OFFSET(0xB43F9A0)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW___IFIXBASEPROXY_DESTROY_OFFSET UNITYSDK_OFFSET(0xB43F940)
#define RPG_CLIENT_BOOKLETFLIPPABLEVIEW___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB43F8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletFlippableView_TypeDefinitionIndex = 67631;

	class BookletFlippableView : public ::RPG::Client::BookletView
	{
	public:
		// static const ::System::Int32 AbovePageIndex = 0xFFFFFFFF; // 0x0
		::RPG::Client::BookletPageView* AbovePage; // 0x48
		::RPG::Client::UIAutoFlipMonoPlugin* AutoFlipPlugin; // 0x50
		::RPG::Client::UIPageTurnMonoPlugin* PageTurnPlugin; // 0x58
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1039*>* _Pages; // 0x60
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

		::System::Void set_LeftFlipAudioEventName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_LEFTFLIPAUDIOEVENTNAME_OFFSET))(this, a1);
		}

		::System::String* get_RightFlipAudioEventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GET_RIGHTFLIPAUDIOEVENTNAME_OFFSET))(this);
		}

		::System::Void set_RightFlipAudioEventName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_SET_RIGHTFLIPAUDIOEVENTNAME_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::Client::UIController* a1, ::RPG::Client::Booklet* a2, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* a3, ::System::Action_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::Booklet*, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_DESTROY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1039* GetPage(::System::Int32 a1)
		{
			return ((::Class_0_16E4307DCC419505_1039*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW_GETPAGE_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_Init(::RPG::Client::UIController* a1, ::RPG::Client::Booklet* a2, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* a3, ::System::Action_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::Booklet*, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETFLIPPABLEVIEW___IFIXBASEPROXY_INIT_OFFSET))(this, a1, a2, a3, a4);
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
