#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_737370D674376C00;
class Class_2_0946524052D5EA18;
namespace MoleMole { class UIControlReference; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_FILTERAUDIOEVENTLIST_OFFSET UNITYSDK_OFFSET(0x149DA9A0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_FORCESTOPPLAYVOICE_OFFSET UNITYSDK_OFFSET(0x149DB720)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_GETLASTPLAYEDROWIDX_OFFSET UNITYSDK_OFFSET(0x149D8AB0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_GET_ISLASTAUDIOFINISH_OFFSET UNITYSDK_OFFSET(0x149D86E0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_GET__ISPLAYINGAUDIO_OFFSET UNITYSDK_OFFSET(0x149DA940)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x149D8D10)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_MUTEBTNCLICKSOUND_OFFSET UNITYSDK_OFFSET(0x149DB770)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONCLICKPLAYSOUND_OFFSET UNITYSDK_OFFSET(0x149DA760)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONCLICKSHOWMODEL_OFFSET UNITYSDK_OFFSET(0x149DA260)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149D94C0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONGAMEPADITEMSELECTED_OFFSET UNITYSDK_OFFSET(0x149D9550)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x149D8B30)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONSTOPAUDIOEVENTLIST_OFFSET UNITYSDK_OFFSET(0x149DB680)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONSTOPVOICE_OFFSET UNITYSDK_OFFSET(0x149DB5E0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_PLAYAUDIOEVENTLIST_OFFSET UNITYSDK_OFFSET(0x149DABA0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x149DAEE0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x149D8C40)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_SETPLAYVOICEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x149DB370)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x149D9600)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_SETVOICEICONSTATE_OFFSET UNITYSDK_OFFSET(0x149D9CF0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_STOPALLAUDIOINSELECTEDROW_OFFSET UNITYSDK_OFFSET(0x149D8770)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x149DB890)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x149DB880)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149DB910)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x149DB9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameReviewRowWidgetController_TypeDefinitionIndex = 79749;

	class UIGalgameReviewRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_lastAudioEventPendingIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x3CAC0);
		}
		static ::System::UInt32* StaticGet_lastItemVoicePendingId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xEDF0);
		}
		static ::System::Int32* StaticGet_lastPlayedRowIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xEDF4);
		}
		static ::System::Boolean* StaticGet_isLastAudioEventListFinish()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xEDF8);
		}
		static ::System::Boolean* StaticGet_isLastVoiceFinish()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xEDF9);
		}
		::Class_2_0946524052D5EA18* _view; // 0x2E8
		::Class_1_737370D674376C00* _item; // 0x2F0
		::System::Int32 _currRowIndex; // 0x2F8
		::System::UInt32 _pendingId; // 0x2FC
		::UnityEngine::Color defaultColor; // 0x300
		::System::Boolean _isPlayingVoice; // 0x310
		::System::Boolean _isPlayingAudioEventList; // 0x311

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_isLastAudioFinish()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_GET_ISLASTAUDIOFINISH_OFFSET))();
		}

		static ::System::Void StopAllAudioInSelectedRow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_STOPALLAUDIOINSELECTEDROW_OFFSET))();
		}

		static ::System::Int32 GetLastPlayedRowIdx()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_GETLASTPLAYEDROWIDX_OFFSET))();
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnGamepadItemSelected(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONGAMEPADITEMSELECTED_OFFSET))(this, isSelect);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void SetVoiceIconState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_SETVOICEICONSTATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void OnClickShowModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONCLICKSHOWMODEL_OFFSET))(this);
		}

		::System::Void OnClickPlaySound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONCLICKPLAYSOUND_OFFSET))(this);
		}

		::System::Void PlayVoice(::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioListPlayAfterVo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_PLAYVOICE_OFFSET))(this, audioListPlayAfterVo);
		}

		::System::Void OnStopVoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONSTOPVOICE_OFFSET))(this);
		}

		::System::Void FilterAudioEventList(::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*& playAtFristList, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*& playAtLastList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*&, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_FILTERAUDIOEVENTLIST_OFFSET))(this, playAtFristList, playAtLastList);
		}

		::System::Void PlayAudioEventList(::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* eventList, ::System::Boolean isPlayedAfterVO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_PLAYAUDIOEVENTLIST_OFFSET))(this, eventList, isPlayedAfterVO);
		}

		::System::Void OnStopAudioEventList(::System::Boolean isPlayedAfterVO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONSTOPAUDIOEVENTLIST_OFFSET))(this, isPlayedAfterVO);
		}

		::System::Void ForceStopPlayVoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_FORCESTOPPLAYVOICE_OFFSET))(this);
		}

		::System::Void SetPlayVoiceBtnState(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_SETPLAYVOICEBTNSTATE_OFFSET))(this, isOn);
		}

		::System::Void MuteBtnClickSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_MUTEBTNCLICKSOUND_OFFSET))(this);
		}

		::System::String* SetText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_SETTEXT_OFFSET))(this);
		}

		::System::Boolean get__isPlayingAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_GET__ISPLAYINGAUDIO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
