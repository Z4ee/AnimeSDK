#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Comic/ComicBubbleImgType.h"
#include "unitysdk/MoleMole/Comic/MonoComicKeyEventBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Timeline/ArrowDir.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkCallbackInfo;
class MonoUITableScrollV2;
class PopText;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole::Comic { class ComicBubbleImgTypePicConfig; }
namespace MoleMole::Comic { class MonoComicBubble_Class_1_4F7EA480540242DA; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine::Timeline { class BubbleEvent; }
namespace UnityEngine::Timeline { class ComicEventBase; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ADD_ONINITFINISH_OFFSET UNITYSDK_OFFSET(0x172786A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ADD_ONSHRINKFINISH_OFFSET UNITYSDK_OFFSET(0x172787A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x172788A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLEARBUBBLERANGELIST_OFFSET UNITYSDK_OFFSET(0x17279FE0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x1727BFA0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_FINISHTEXTPLAY_OFFSET UNITYSDK_OFFSET(0x1727CA20)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x1727BE00)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETFADEOUTANIMTIME_OFFSET UNITYSDK_OFFSET(0x1727C380)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETHIDEINDEX_OFFSET UNITYSDK_OFFSET(0x1727A630)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_GO_OFFSET UNITYSDK_OFFSET(0x1727A1D0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_HIDEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x1727D5A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_MOVEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x1727D5B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_RECTTRAN_OFFSET UNITYSDK_OFFSET(0x1727A0A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_SCROLLVIEWACTIVE_OFFSET UNITYSDK_OFFSET(0x1727D5C0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITIMGCONFIG_OFFSET UNITYSDK_OFFSET(0x1727A260)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITRANGEINFO_OFFSET UNITYSDK_OFFSET(0x1727A1E0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x172793C0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ISAUTOFINISH_OFFSET UNITYSDK_OFFSET(0x17279F80)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ISPLAYTEXT_OFFSET UNITYSDK_OFFSET(0x1727C8B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_JUMPTOFINALSTATE_OFFSET UNITYSDK_OFFSET(0x1727D3A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1727E0A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_218124418542E081_OFFSET UNITYSDK_OFFSET(0x17280F20)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_261DF843E298B71B_OFFSET UNITYSDK_OFFSET(0x1727A510)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_2647E951B1CB6A20_OFFSET UNITYSDK_OFFSET(0x1727F100)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_27419209AD7EE29A_OFFSET UNITYSDK_OFFSET(0x17279CD0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_2BCDDB2C8831E231_OFFSET UNITYSDK_OFFSET(0x1727AFB0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_2DF7969B85DC261B_OFFSET UNITYSDK_OFFSET(0x1727B260)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_31C12715685B9E2F_OFFSET UNITYSDK_OFFSET(0x1727DAD0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_36AC4BD395BFF6C6_OFFSET UNITYSDK_OFFSET(0x1727E010)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17281430)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_4755BFE651CF9635_OFFSET UNITYSDK_OFFSET(0x1727A480)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x17281160)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_61C393831AD81194_OFFSET UNITYSDK_OFFSET(0x17280920)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_70A280A8B20B1E91_OFFSET UNITYSDK_OFFSET(0x172795A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_712AD358A3B4473E_OFFSET UNITYSDK_OFFSET(0x1727EC60)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_771A6E6C128346EF_OFFSET UNITYSDK_OFFSET(0x1727E140)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1727A2B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_98BB0311A6AA1302_OFFSET UNITYSDK_OFFSET(0x172804E0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_9E0A3606DECE56CE_OFFSET UNITYSDK_OFFSET(0x1727E8A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1727E090)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x17281420)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1727D3F0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1727D540)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_DAAF2880478C42FF_OFFSET UNITYSDK_OFFSET(0x1727EB70)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x17281480)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1727BB50)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_E92926B6DBE538C8_OFFSET UNITYSDK_OFFSET(0x1727FFD0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_EC188688BC2EC74F_OFFSET UNITYSDK_OFFSET(0x1727DED0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_EC9F8B8EC6EF4CAF_OFFSET UNITYSDK_OFFSET(0x17280CF0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1727D590)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_FF396CC145481CA0_OFFSET UNITYSDK_OFFSET(0x17280D10)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1727C520)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x1727B9B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x1727BFF0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFOCUSANIM_OFFSET UNITYSDK_OFFSET(0x1727D0B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYLOSEFOCUSANIM_OFFSET UNITYSDK_OFFSET(0x1727D230)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_REMOVE_ONINITFINISH_OFFSET UNITYSDK_OFFSET(0x17278720)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_REMOVE_ONSHRINKFINISH_OFFSET UNITYSDK_OFFSET(0x17278820)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1727D400)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETHIDEINDEX_OFFSET UNITYSDK_OFFSET(0x1727A5E0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETMOVEPARAMS_OFFSET UNITYSDK_OFFSET(0x1727CF60)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1727A0B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETVOICEPARAM_OFFSET UNITYSDK_OFFSET(0x1727A590)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SHOWARROW_OFFSET UNITYSDK_OFFSET(0x1727B8A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SHOWBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x17279960)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SIMULATEMOVEPROCESS_OFFSET UNITYSDK_OFFSET(0x1727ADB0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x1727B960)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x1727A680)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x17279D30)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1727D690)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1727D5D0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x1727D720)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x1727D7B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x1727D840)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_ISAUTOFINISH_OFFSET UNITYSDK_OFFSET(0x1727D850)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x1727D860)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1727D8F0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x1727D9A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x1727DA30)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBubble_TypeDefinitionIndex = 71733;

	class MonoComicBubble : public ::MoleMole::Comic::MonoComicKeyEventBase
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA*>** StaticGet_Field_7_18()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA*>**)Il2CppClass::FromTypeDefinitionIndex(MonoComicBubble_TypeDefinitionIndex)->GetStaticField(0x3F360);
		}
		// static const ::System::Single textSpeed; // 0x0
		// static const ::System::Single distanceBetweenBubble; // 0x0
		// static const ::System::Single shrinkAnimDuration; // 0x0
		::UnityEngine::Animation* bubbleAnim; // 0x50
		::UnityEngine::UI::Text* text; // 0x58
		::UnityEngine::RectTransform* arrowRoot; // 0x60
		::UnityEngine::RectTransform* content; // 0x68
		::UnityEngine::RectTransform* root; // 0x70
		::Il2CppArray<::UnityEngine::GameObject*>* arrows; // 0x78
		::UnityEngine::GameObject* Arrow; // 0x80
		::UnityEngine::RectTransform* scrollerContent; // 0x88
		::UnityEngine::Transform* scrollViewGO; // 0x90
		::UnityEngine::AnimationCurve* shrinkAnimCurve; // 0x98
		::System::Action* Field_7_13; // 0xA0
		::System::Action* Field_7_12; // 0xA8
		::Foundation::AssetRequestHandle Field_7_19; // 0xB0
		::UnityEngine::Timeline::BubbleEvent* Field_7_17; // 0xD0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>* Field_7_16; // 0xD8
		::System::Boolean Field_7_23; // 0xE0
		::System::Boolean Field_7_22; // 0xE1
		::System::Single Field_7_21; // 0xE4
		::System::Single Field_7_20; // 0xE8
		::System::Single Field_7_27; // 0xEC
		::System::Single Field_7_26; // 0xF0
		::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA* Field_7_25; // 0xF8
		::System::Single Field_7_24; // 0x100
		::System::Int32 Field_7_31; // 0x104
		::System::Single Field_7_30; // 0x108
		::UnityEngine::UI::HorizontalLayoutGroup* Field_7_29; // 0x110
		::UnityEngine::UI::HorizontalLayoutGroup* Field_7_28; // 0x118
		::UnityEngine::UI::HorizontalLayoutGroup* Field_7_35; // 0x120
		::Foundation::Coroutine::CoroutineHandle Field_7_34; // 0x128
		::UnityEngine::WaitForEndOfFrame* Field_7_33; // 0x130
		::Foundation::Coroutine::CoroutineHandle Field_7_32; // 0x138
		::System::Boolean Field_7_39; // 0x13C
		::System::Single Field_7_38; // 0x140
		::UnityEngine::Vector3 Field_7_37; // 0x144
		::UnityEngine::Vector2 Field_7_36; // 0x150
		::UnityEngine::RectTransform* Field_7_43; // 0x158
		::Il2CppArray<::UnityEngine::CanvasGroup*>* Field_7_42; // 0x160
		::MoleMole::MonoGamepadSelectable* Field_7_41; // 0x168
		::UnityEngine::Material* Field_7_40; // 0x170
		::UnityEngine::UI::Image* Field_7_47; // 0x178
		::PopText* Field_7_46; // 0x180
		::MonoUITableScrollV2* Field_7_45; // 0x188
		::System::String* Field_7_44; // 0x190
		::UnityEngine::Color Field_7_51; // 0x198
		::System::Boolean Field_7_50; // 0x1A8
		::System::Boolean Field_7_49; // 0x1A9
		::System::Single Field_7_48; // 0x1AC
		::UnityEngine::RectTransform* Field_7_55; // 0x1B0
		::System::Single Field_7_54; // 0x1B8
		::System::Single Field_7_53; // 0x1BC
		::System::String* Field_7_52; // 0x1C0
		::System::Action_1<::System::UInt32>* playExternalCB; // 0x1C8
		::System::Boolean Field_7_58; // 0x1D0
		::System::Int32 Field_7_57; // 0x1D4
		::System::Boolean Field_7_56; // 0x1D8
		::System::Boolean Field_7_63; // 0x1D9
		::UnityEngine::Vector2 Field_7_62; // 0x1DC
		::UnityEngine::Vector2 Field_7_61; // 0x1E4
		::UnityEngine::Vector2 Field_7_60; // 0x1EC
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_7_67; // 0x1F8
		::System::Int32 Field_7_66; // 0x200
		::System::Single Field_7_65; // 0x204
		::System::Single Field_7_64; // 0x208
		::UnityEngine::AnimationCurve* Field_7_71; // 0x210
		::System::Boolean Field_7_70; // 0x218
		::System::Single Field_7_69; // 0x21C
		::Il2CppArray<::System::Single>* Field_7_68; // 0x220
		::Il2CppArray<::System::Single>* Field_7_75; // 0x228
		::UnityEngine::Vector2 Field_7_74; // 0x230
		::UnityEngine::Vector2 Field_7_73; // 0x238
		::UnityEngine::Vector2 Field_7_72; // 0x240
		::System::Boolean Field_7_79; // 0x248
		::System::Boolean Field_7_78; // 0x249

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE__CCTOR_OFFSET))();
		}

		::System::Void add_OnInitFinish(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ADD_ONINITFINISH_OFFSET))(this, a1);
		}

		::System::Void remove_OnInitFinish(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_REMOVE_ONINITFINISH_OFFSET))(this, a1);
		}

		::System::Void add_OnShrinkFinish(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ADD_ONSHRINKFINISH_OFFSET))(this, a1);
		}

		::System::Void remove_OnShrinkFinish(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_REMOVE_ONSHRINKFINISH_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_AWAKE_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_UPDATE_OFFSET))(this);
		}

		::System::Boolean IsAutoFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ISAUTOFINISH_OFFSET))(this);
		}

		static ::System::Void ClearBubbleRangeList()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLEARBUBBLERANGELIST_OFFSET))();
		}

		::UnityEngine::RectTransform* get_RectTran()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_RECTTRAN_OFFSET))(this);
		}

		::System::Void SetParent(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETPARENT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* get_go()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_GO_OFFSET))(this);
		}

		::System::Void InitRangeInfo(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITRANGEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void InitImgConfig(::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITIMGCONFIG_OFFSET))(this, a1);
		}

		::System::Void ShowBubbleWidget(::UnityEngine::Timeline::BubbleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SHOWBUBBLEWIDGET_OFFSET))(this, a1);
		}

		::System::Void SetVoiceParam(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETVOICEPARAM_OFFSET))(this, a1);
		}

		::System::Void SetHideIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETHIDEINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetHideIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETHIDEINDEX_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void ShowArrow(::UnityEngine::Timeline::ArrowDir a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ArrowDir))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SHOWARROW_OFFSET))(this, a1);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_STARTPLAY_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Single GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ENDPLAY_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFADEOUTANIM_OFFSET))(this);
		}

		::System::Single GetFadeOutAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETFADEOUTANIMTIME_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean IsPlayText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ISPLAYTEXT_OFFSET))(this);
		}

		::System::Void FinishTextPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_FINISHTEXTPLAY_OFFSET))(this);
		}

		::System::Void SetMoveParams(::UnityEngine::Vector2 a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETMOVEPARAMS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SimulateMoveProcess(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SIMULATEMOVEPROCESS_OFFSET))(this, a1);
		}

		::System::Void PlayFocusAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFOCUSANIM_OFFSET))(this);
		}

		::System::Void PlayLoseFocusAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYLOSEFOCUSANIM_OFFSET))(this);
		}

		::System::Void JumpToFinalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_JUMPTOFINALSTATE_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Boolean Method_7_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_7_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Boolean get_hideWhenSplitScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_HIDEWHENSPLITSCREEN_OFFSET))(this);
		}

		::System::Boolean get_moveWhenSplitScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_MOVEWHENSPLITSCREEN_OFFSET))(this);
		}

		::System::Boolean get_scrollViewActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_SCROLLVIEWACTIVE_OFFSET))(this);
		}

		::System::Void __base_EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_ENDPLAY_OFFSET))(this);
		}

		::System::Single __base_GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Void __base_InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Boolean __base_IsAutoFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_ISAUTOFINISH_OFFSET))(this);
		}

		::System::Void __base_PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Void __base_ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __base_StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_STARTPLAY_OFFSET))(this);
		}

		::System::Void __base_UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE___BASE_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void Method_7_31C12715685B9E2F(::UnityEngine::Timeline::BubbleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_31C12715685B9E2F_OFFSET))(this, a1);
		}

		::System::Int32 Method_7_36AC4BD395BFF6C6(::UnityEngine::Timeline::BubbleEvent* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_36AC4BD395BFF6C6_OFFSET))(this, a1);
		}

		::System::Void Method_7_2DF7969B85DC261B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_2DF7969B85DC261B_OFFSET))(this, a1);
		}

		::System::Void Method_7_C74E50CBD41F0264_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_C74E50CBD41F0264_1_OFFSET))(this, a1);
		}

		::System::Void Method_7_1B9CC121BDC8766D(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_1B9CC121BDC8766D_OFFSET))(this, a1);
		}

		::System::Void Method_7_771A6E6C128346EF(::UnityEngine::Timeline::BubbleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_771A6E6C128346EF_OFFSET))(this, a1);
		}

		::System::Void Method_7_712AD358A3B4473E(::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_712AD358A3B4473E_OFFSET))(this, a1);
		}

		::System::Int32 Method_7_2647E951B1CB6A20(::UnityEngine::Timeline::BubbleEvent* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_2647E951B1CB6A20_OFFSET))(this, a1);
		}

		::System::Void Method_7_937F8473216A3162()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_937F8473216A3162_OFFSET))(this);
		}

		::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA* Method_7_98BB0311A6AA1302(::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA* a1)
		{
			return ((::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA*(*)(::PVOID, ::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_98BB0311A6AA1302_OFFSET))(this, a1);
		}

		::System::Void Method_7_EC9F8B8EC6EF4CAF(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_EC9F8B8EC6EF4CAF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_7_61C393831AD81194(::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA* a1, ::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA*, ::MoleMole::Comic::MonoComicBubble_Class_1_4F7EA480540242DA*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_61C393831AD81194_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_7_EC188688BC2EC74F()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_EC188688BC2EC74F_OFFSET))(this);
		}

		::System::Void Method_7_218124418542E081()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_218124418542E081_OFFSET))(this);
		}

		::System::Void Method_7_27419209AD7EE29A(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_27419209AD7EE29A_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_7_261DF843E298B71B()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_261DF843E298B71B_OFFSET))(this);
		}

		::System::Void Method_7_70A280A8B20B1E91(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_70A280A8B20B1E91_OFFSET))(this, a1);
		}

		::System::Void Method_7_C74E50CBD41F0264_2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_C74E50CBD41F0264_2_OFFSET))(this, a1);
		}

		::System::Void Method_7_E693A0026D178D8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_E693A0026D178D8E_OFFSET))(this);
		}

		::System::Void Method_7_FF396CC145481CA0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_FF396CC145481CA0_OFFSET))(this, a1);
		}

		::System::Boolean Method_7_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_7_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_497833CF065C1894_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_7_4755BFE651CF9635(::UnityEngine::Timeline::BubbleEvent* a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_4755BFE651CF9635_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_7_E92926B6DBE538C8(::System::Int32& a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_E92926B6DBE538C8_OFFSET))(this, a1);
		}

		::System::Void Method_7_2BCDDB2C8831E231(::UnityEngine::Timeline::BubbleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_2BCDDB2C8831E231_OFFSET))(this, a1);
		}

		::System::Void Method_7_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_7_E52129E82CD2D7F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_E52129E82CD2D7F8_OFFSET))(this);
		}

		::System::Void Method_7_9E0A3606DECE56CE(::UnityEngine::Timeline::BubbleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_9E0A3606DECE56CE_OFFSET))(this, a1);
		}

		::System::Void Method_7_DAAF2880478C42FF(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_METHOD_7_DAAF2880478C42FF_OFFSET))(this, a1);
		}
	};
}
