#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ComicConfig; }
namespace MoleMole { class ComicImgStyle; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class BubbleEvent; }
namespace UnityEngine::Timeline { class ImageExchangeEvent; }
namespace UnityEngine::Timeline { class ImageExchangeEventZoneVer; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset_SpriteItem; }
namespace UnityEngine::Timeline { class Marker; }
namespace UnityEngine::Timeline { class PictureDecorateEvent; }
namespace UnityEngine::Timeline { class SplitScreenEvent; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine::Timeline { class VoiceDecorateEvent; }

#define MOLEMOLE_COMIC_REFLECTMETHODS_BUBBLE_ADAPTIVEWIDGET_OFFSET UNITYSDK_OFFSET(0x1F39D540)
#define MOLEMOLE_COMIC_REFLECTMETHODS_BUBBLE_MAKEDRAWARROW_OFFSET UNITYSDK_OFFSET(0x1F39D700)
#define MOLEMOLE_COMIC_REFLECTMETHODS_CALCULATEARROWLENGTHINSIDEFRAME_OFFSET UNITYSDK_OFFSET(0x1F39F380)
#define MOLEMOLE_COMIC_REFLECTMETHODS_CREATEBUBBLE_OFFSET UNITYSDK_OFFSET(0x1F39D1D0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_EDITORPREVIEWINITPS5BUTTON_OFFSET UNITYSDK_OFFSET(0x1F39F890)
#define MOLEMOLE_COMIC_REFLECTMETHODS_GETCOMICCONFIGASSETBYNAME_OFFSET UNITYSDK_OFFSET(0x1F39F6F0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_GETCOMICSHAKETEMPLATEKEYDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1F39FA20)
#define MOLEMOLE_COMIC_REFLECTMETHODS_GETTALKERNAMEBYIDBYTIMELINEASSET_OFFSET UNITYSDK_OFFSET(0x1F39EE90)
#define MOLEMOLE_COMIC_REFLECTMETHODS_GETTALKERNAMEBYID_OFFSET UNITYSDK_OFFSET(0x1F39ECF0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_GET_ADAPTERTYPE_OFFSET UNITYSDK_OFFSET(0x1F39CA60)
#define MOLEMOLE_COMIC_REFLECTMETHODS_GET_SPLITIMGCOM_INIT_DELEGATE_OFFSET UNITYSDK_OFFSET(0x1F39CA70)
#define MOLEMOLE_COMIC_REFLECTMETHODS_GET_SPLITIMGCOM_RESET_DELEGATE_OFFSET UNITYSDK_OFFSET(0x1F39CE40)
#define MOLEMOLE_COMIC_REFLECTMETHODS_GET_SPLITIMGCOM_SIMULATE_DELEGATE_OFFSET UNITYSDK_OFFSET(0x1F39CC50)
#define MOLEMOLE_COMIC_REFLECTMETHODS_IMAGEEXCHANGE_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1F39DDD0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_IMAGEEXCHANGE_TRIGGER_ZONEVER_OFFSET UNITYSDK_OFFSET(0x1F39DF80)
#define MOLEMOLE_COMIC_REFLECTMETHODS_INITBUBBLE_OFFSET UNITYSDK_OFFSET(0x1F39D380)
#define MOLEMOLE_COMIC_REFLECTMETHODS_ISAUDIOEDITMODE_OFFSET UNITYSDK_OFFSET(0x1F39F550)
#define MOLEMOLE_COMIC_REFLECTMETHODS_ISMALE_OFFSET UNITYSDK_OFFSET(0x1F39F040)
#define MOLEMOLE_COMIC_REFLECTMETHODS_ONTALKERNAMEIDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1F39EB50)
#define MOLEMOLE_COMIC_REFLECTMETHODS_ONTRACKADDCLIP_OFFSET UNITYSDK_OFFSET(0x1F39E490)
#define MOLEMOLE_COMIC_REFLECTMETHODS_ONTRACKADDMARKER_OFFSET UNITYSDK_OFFSET(0x1F39E640)
#define MOLEMOLE_COMIC_REFLECTMETHODS_ONTRACKDELETECLIP_OFFSET UNITYSDK_OFFSET(0x1F39E7F0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_ONTRACKDELETEMARKER_OFFSET UNITYSDK_OFFSET(0x1F39E9A0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_PICTUREDECORATIONCOM_INIT_OFFSET UNITYSDK_OFFSET(0x1F39E130)
#define MOLEMOLE_COMIC_REFLECTMETHODS_PICTUREDECORATIONCOM_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1F39E2E0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_SETRANGEINFOVAL_OFFSET UNITYSDK_OFFSET(0x1F39D010)
#define MOLEMOLE_COMIC_REFLECTMETHODS_SHOWMAXRANGEBUBBLE_OFFSET UNITYSDK_OFFSET(0x1F39F1E0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_SPLITIMGCOM_INIT_OFFSET UNITYSDK_OFFSET(0x1F39CBE0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_SPLITIMGCOM_RESET_OFFSET UNITYSDK_OFFSET(0x1F39CFB0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_SPLITIMGCOM_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1F39CDC0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_VOICEDECORATIONCOM_INIT_OFFSET UNITYSDK_OFFSET(0x1F39D8D0)
#define MOLEMOLE_COMIC_REFLECTMETHODS_VOICEDECORATIONCOM_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1F39DC20)
#define MOLEMOLE_COMIC_REFLECTMETHODS_VOICEDECORATIONCOM_TOFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x1F39DA80)
#define MOLEMOLE_COMIC_REFLECTMETHODS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F39FBC0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int ReflectMethods_TypeDefinitionIndex = 32768;

	class ReflectMethods : public ::System::Object
	{
	public:
		static ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>** StaticGet_m_fcCalculateArrowLengthInsideFrame()
		{
			return (::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28350);
		}
		static ::System::Action_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::TimelineClip*>** StaticGet_m_fcOnTrackDeleteClip()
		{
			return (::System::Action_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::TimelineClip*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28358);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::Timeline::PictureDecorateEvent*>** StaticGet_m_fcPictureDecorationCom_Init()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::Timeline::PictureDecorateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28360);
		}
		static ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::Timeline::SplitScreenEvent*, ::System::Single>** StaticGet_m_fcSplitImgCom_Simulate()
		{
			return (::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::Timeline::SplitScreenEvent*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28368);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_m_fcGetComicShakeTemplateKeyDropdown()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28370);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet_m_fcIsAudioEditMode()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28378);
		}
		static ::System::Action_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::TimelineClip*>** StaticGet_m_fcOnTrackAddClip()
		{
			return (::System::Action_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::TimelineClip*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28380);
		}
		static ::System::Action_1<::UnityEngine::GameObject*>** StaticGet_m_fcVoiceDecorationCom_ToFinishState()
		{
			return (::System::Action_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28388);
		}
		static ::System::Func_3<::UnityEngine::Timeline::TimelineAsset*, ::System::Int32, ::System::String*>** StaticGet_m_fcGetTalkerNameByIDByTimelineAsset()
		{
			return (::System::Func_3<::UnityEngine::Timeline::TimelineAsset*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28390);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::System::Single>** StaticGet_m_fcPictureDecorationCom_Simulate()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28398);
		}
		static ::System::Type** StaticGet_m_stAdapterType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283A0);
		}
		static ::System::Action** StaticGet_m_fcEditorPreviewInitPS5Button()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283A8);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::Timeline::VoiceDecorateEvent*>** StaticGet_m_fcVoiceDecorationCom_Init()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::Timeline::VoiceDecorateEvent*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283B0);
		}
		static ::System::Action_3<::UnityEngine::GameObject*, ::MoleMole::ComicImgStyle*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>*>** StaticGet_m_fcSplitImgCom_Init()
		{
			return (::System::Action_3<::UnityEngine::GameObject*, ::MoleMole::ComicImgStyle*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283B8);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet_m_fcIsMale()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283C0);
		}
		static ::System::Action_3<::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Timeline::BubbleEvent*>** StaticGet_m_fcInitBubble()
		{
			return (::System::Action_3<::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Timeline::BubbleEvent*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283C8);
		}
		static ::System::Func_3<::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Transform*>** StaticGet_m_fcCreateBubble()
		{
			return (::System::Func_3<::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283D0);
		}
		static ::System::Action_2<::System::Single, ::System::Single>** StaticGet_m_fcSetRangeInfoVal()
		{
			return (::System::Action_2<::System::Single, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283D8);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::System::Single>** StaticGet_m_fcVoiceDecorationCom_Simulate()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283E0);
		}
		static ::System::Func_4<::UnityEngine::Transform*, ::UnityEngine::Timeline::BubbleEvent*, ::System::Boolean, ::UnityEngine::Vector2>** StaticGet_m_fcBubble_AdaptiveWidget()
		{
			return (::System::Func_4<::UnityEngine::Transform*, ::UnityEngine::Timeline::BubbleEvent*, ::System::Boolean, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283E8);
		}
		static ::System::Func_1<::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*>** StaticGet_m_fcOnTalkerNameIDDropDown()
		{
			return (::System::Func_1<::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283F0);
		}
		static ::System::Action_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::Marker*>** StaticGet_m_fcOnTrackDeleteMarker()
		{
			return (::System::Action_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::Marker*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x283F8);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet_m_fcShowMaxRangeBubble()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28400);
		}
		static ::System::Action_4<::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Timeline::BubbleEvent*, ::System::Boolean>** StaticGet_m_fcBubble_MakeDrawArrow()
		{
			return (::System::Action_4<::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Timeline::BubbleEvent*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28408);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::Timeline::ImageExchangeEvent*>** StaticGet_m_fcImageExchangeEvent_Trigger()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::Timeline::ImageExchangeEvent*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28410);
		}
		static ::System::Func_2<::System::String*, ::MoleMole::ComicConfig*>** StaticGet_m_fcGetComicConfigAssetByName()
		{
			return (::System::Func_2<::System::String*, ::MoleMole::ComicConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28418);
		}
		static ::System::Action_1<::UnityEngine::GameObject*>** StaticGet_m_fcSplitImgCom_Reset()
		{
			return (::System::Action_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28420);
		}
		static ::System::Action_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::Marker*>** StaticGet_m_fcOnTrackAddMarker()
		{
			return (::System::Action_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::Marker*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28428);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet_m_fcGetTalkerNameByID()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28430);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::Timeline::ImageExchangeEventZoneVer*>** StaticGet_m_fcImageExchange_Trigger_ZoneVer()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::UnityEngine::Timeline::ImageExchangeEventZoneVer*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectMethods_TypeDefinitionIndex)->GetStaticField(0x28438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS__CCTOR_OFFSET))();
		}

		static ::System::Type* get_adapterType()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_GET_ADAPTERTYPE_OFFSET))();
		}

		static ::System::Action_3<::UnityEngine::GameObject*, ::MoleMole::ComicImgStyle*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>*>* get_SplitImgCom_Init_Delegate()
		{
			return ((::System::Action_3<::UnityEngine::GameObject*, ::MoleMole::ComicImgStyle*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_GET_SPLITIMGCOM_INIT_DELEGATE_OFFSET))();
		}

		static ::System::Void SplitImgCom_Init(::UnityEngine::GameObject* go, ::MoleMole::ComicImgStyle* styleData, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>* spriteItems)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::MoleMole::ComicImgStyle*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_SPLITIMGCOM_INIT_OFFSET))(go, styleData, spriteItems);
		}

		static ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::Timeline::SplitScreenEvent*, ::System::Single>* get_SplitImgCom_Simulate_Delegate()
		{
			return ((::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::Timeline::SplitScreenEvent*, ::System::Single>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_GET_SPLITIMGCOM_SIMULATE_DELEGATE_OFFSET))();
		}

		static ::System::Void SplitImgCom_Simulate(::UnityEngine::GameObject* go, ::UnityEngine::Timeline::SplitScreenEvent* e, ::System::Single progress)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Timeline::SplitScreenEvent*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_SPLITIMGCOM_SIMULATE_OFFSET))(go, e, progress);
		}

		static ::System::Action_1<::UnityEngine::GameObject*>* get_SplitImgCom_Reset_Delegate()
		{
			return ((::System::Action_1<::UnityEngine::GameObject*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_GET_SPLITIMGCOM_RESET_DELEGATE_OFFSET))();
		}

		static ::System::Void SplitImgCom_Reset(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_SPLITIMGCOM_RESET_OFFSET))(go);
		}

		static ::System::Void SetRangeInfoVal(::System::Single width, ::System::Single height)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_SETRANGEINFOVAL_OFFSET))(width, height);
		}

		static ::UnityEngine::Transform* CreateBubble(::UnityEngine::Transform* root, ::System::String* key)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_CREATEBUBBLE_OFFSET))(root, key);
		}

		static ::System::Void InitBubble(::UnityEngine::Transform* root, ::UnityEngine::Transform* bubbleObj, ::UnityEngine::Timeline::BubbleEvent* info)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_INITBUBBLE_OFFSET))(root, bubbleObj, info);
		}

		static ::UnityEngine::Vector2 Bubble_AdaptiveWidget(::UnityEngine::Transform* bubbleTran, ::UnityEngine::Timeline::BubbleEvent* info, ::System::Boolean isMaxRangeBubble)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Transform*, ::UnityEngine::Timeline::BubbleEvent*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_BUBBLE_ADAPTIVEWIDGET_OFFSET))(bubbleTran, info, isMaxRangeBubble);
		}

		static ::System::Void Bubble_MakeDrawArrow(::UnityEngine::RectTransform* rootPartTran, ::UnityEngine::Vector2 dirVec, ::UnityEngine::Timeline::BubbleEvent* be, ::System::Boolean isMaxRangeBubble)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Timeline::BubbleEvent*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_BUBBLE_MAKEDRAWARROW_OFFSET))(rootPartTran, dirVec, be, isMaxRangeBubble);
		}

		static ::System::Void VoiceDecorationCom_Init(::UnityEngine::GameObject* go, ::UnityEngine::Timeline::VoiceDecorateEvent* voiceDecorateEvent)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Timeline::VoiceDecorateEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_VOICEDECORATIONCOM_INIT_OFFSET))(go, voiceDecorateEvent);
		}

		static ::System::Void VoiceDecorationCom_ToFinishState(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_VOICEDECORATIONCOM_TOFINISHSTATE_OFFSET))(go);
		}

		static ::System::Void VoiceDecorationCom_Simulate(::UnityEngine::GameObject* go, ::System::Single progress)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_VOICEDECORATIONCOM_SIMULATE_OFFSET))(go, progress);
		}

		static ::System::Void ImageExchange_Trigger(::UnityEngine::GameObject* go, ::UnityEngine::Timeline::ImageExchangeEvent* e)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Timeline::ImageExchangeEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_IMAGEEXCHANGE_TRIGGER_OFFSET))(go, e);
		}

		static ::System::Void ImageExchange_Trigger_ZoneVer(::UnityEngine::GameObject* go, ::UnityEngine::Timeline::ImageExchangeEventZoneVer* e)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Timeline::ImageExchangeEventZoneVer*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_IMAGEEXCHANGE_TRIGGER_ZONEVER_OFFSET))(go, e);
		}

		static ::System::Void PictureDecorationCom_Init(::UnityEngine::GameObject* go, ::UnityEngine::Timeline::PictureDecorateEvent* e)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Timeline::PictureDecorateEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_PICTUREDECORATIONCOM_INIT_OFFSET))(go, e);
		}

		static ::System::Void PictureDecorationCom_Simulate(::UnityEngine::GameObject* go, ::System::Single progress)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_PICTUREDECORATIONCOM_SIMULATE_OFFSET))(go, progress);
		}

		static ::System::Void OnTrackAddClip(::UnityEngine::Timeline::TrackAsset* trackAsset, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_ONTRACKADDCLIP_OFFSET))(trackAsset, clip);
		}

		static ::System::Void OnTrackAddMarker(::UnityEngine::Timeline::TrackAsset* trackAsset, ::UnityEngine::Timeline::Marker* marker)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::Marker*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_ONTRACKADDMARKER_OFFSET))(trackAsset, marker);
		}

		static ::System::Void OnTrackDeleteClip(::UnityEngine::Timeline::TrackAsset* trackAsset, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_ONTRACKDELETECLIP_OFFSET))(trackAsset, clip);
		}

		static ::System::Void OnTrackDeleteMarker(::UnityEngine::Timeline::TrackAsset* trackAsset, ::UnityEngine::Timeline::Marker* marker)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::Marker*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_ONTRACKDELETEMARKER_OFFSET))(trackAsset, marker);
		}

		static ::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* OnTalkerNameIDDropDown()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_ONTALKERNAMEIDDROPDOWN_OFFSET))();
		}

		static ::System::String* GetTalkerNameByID(::System::Int32 id)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_GETTALKERNAMEBYID_OFFSET))(id);
		}

		static ::System::String* GetTalkerNameByIDByTimelineAsset(::UnityEngine::Timeline::TimelineAsset* tlAsset, ::System::Int32 id)
		{
			return ((::System::String*(*)(::UnityEngine::Timeline::TimelineAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_GETTALKERNAMEBYIDBYTIMELINEASSET_OFFSET))(tlAsset, id);
		}

		static ::System::Boolean IsMale()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_ISMALE_OFFSET))();
		}

		static ::System::Boolean ShowMaxRangeBubble()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_SHOWMAXRANGEBUBBLE_OFFSET))();
		}

		static ::System::Single CalculateArrowLengthInsideFrame(::System::Single width, ::System::Single height, ::System::Single angle)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_CALCULATEARROWLENGTHINSIDEFRAME_OFFSET))(width, height, angle);
		}

		static ::System::Boolean IsAudioEditMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_ISAUDIOEDITMODE_OFFSET))();
		}

		static ::MoleMole::ComicConfig* GetComicConfigAssetByName(::System::String* tlName)
		{
			return ((::MoleMole::ComicConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_GETCOMICCONFIGASSETBYNAME_OFFSET))(tlName);
		}

		static ::System::Void EditorPreviewInitPS5Button()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_EDITORPREVIEWINITPS5BUTTON_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetComicShakeTemplateKeyDropdown()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_REFLECTMETHODS_GETCOMICSHAKETEMPLATEKEYDROPDOWN_OFFSET))();
		}
	};
}
