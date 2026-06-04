#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Motions/TextMotionState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TextMotionTyperType.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_8.h"
#include "unitysdk/UnityEngine/CharacterInfo.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/TextFormatFlag.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_B4D062A3AA74182F;
class Class_2_9C4E0E0141829F67;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::Motions { class MonoTextMotion_LineInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_APPLYSHADOWZEROALLOC_OFFSET UNITYSDK_OFFSET(0xC1A3910)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1A00D0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xC19FFF0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_FORCEREDRAW_OFFSET UNITYSDK_OFFSET(0xC19F650)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_HASMOTIONNOTFINISH_OFFSET UNITYSDK_OFFSET(0xC19F4F0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_IMMEDIATEFINISHALLMOTIONS_OFFSET UNITYSDK_OFFSET(0xC19F5D0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_IMMEDIATEFINISHEXITINGMOTIONS_OFFSET UNITYSDK_OFFSET(0xC19F6A0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xC19E670)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1A0210)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC1A0260)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_PAUSE_OFFSET UNITYSDK_OFFSET(0xC19FF30)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_RESUME_OFFSET UNITYSDK_OFFSET(0xC19FF70)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_SHOWTEXTIDWITHMOTIONWITHTYPERTYPE_OFFSET UNITYSDK_OFFSET(0xC19FE80)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_SHOWTEXTIDWITHMOTION_OFFSET UNITYSDK_OFFSET(0xC19F970)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_SHOWTEXTWITHMOTION_OFFSET UNITYSDK_OFFSET(0xC19F880)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_SPAWNED_OFFSET UNITYSDK_OFFSET(0xC19FFB0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_UPDATEOUTLINE_OFFSET UNITYSDK_OFFSET(0xC19EAF0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xC1A0360)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CLEARMOTIONDATA_OFFSET UNITYSDK_OFFSET(0xC1A0070)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATECHARMOTIONINRANGE_OFFSET UNITYSDK_OFFSET(0xC1A1950)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATECHARMOTION_OFFSET UNITYSDK_OFFSET(0xC1A3600)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATENOUSCHARMOTIONINRANGE_OFFSET UNITYSDK_OFFSET(0xC1A46F0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATENOUSCHARMOTION_OFFSET UNITYSDK_OFFSET(0xC1A5190)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATENOUSRUBYCHARMOTION_1_OFFSET UNITYSDK_OFFSET(0xC1A53C0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATENOUSRUBYCHARMOTION_OFFSET UNITYSDK_OFFSET(0xC1A4A80)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATENOUSTYPERMOTION_OFFSET UNITYSDK_OFFSET(0xC1A1080)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATERSE1CHARMOTIONINRANGE_OFFSET UNITYSDK_OFFSET(0xC1A20C0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATERSE1CHARMOTION_OFFSET UNITYSDK_OFFSET(0xC1A3FE0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATERUBYCHARMOTION_OFFSET UNITYSDK_OFFSET(0xC1A1BE0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATETEXTEFFECTMOTION_OFFSET UNITYSDK_OFFSET(0xC1A0D80)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATETEXTEXITINGMOTION_OFFSET UNITYSDK_OFFSET(0xC1A0B50)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATETYPERMOTION_OFFSET UNITYSDK_OFFSET(0xC1A1560)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATEWRAPMOTION_OFFSET UNITYSDK_OFFSET(0xC1A23D0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC1A5630)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETLASTLINEBOTTOMPOSY_OFFSET UNITYSDK_OFFSET(0xC1A2E50)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETLINEBOTTOMPOSY_OFFSET UNITYSDK_OFFSET(0xC1A3230)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETMASKCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0xC1A4500)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETRECTBOTTOMPOSY_OFFSET UNITYSDK_OFFSET(0xC1A2DE0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETSUBSTR_OFFSET UNITYSDK_OFFSET(0xC1A3130)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETTOTALBOTTOMVISIBLECHARCOUNT_OFFSET UNITYSDK_OFFSET(0xC1A42A0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETVISIBLECHARCOUNT_OFFSET UNITYSDK_OFFSET(0xC1A31C0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__IMMEDIATELYSHOWNEXTSENTENCE_OFFSET UNITYSDK_OFFSET(0xC19F6F0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__MODIFYMESH_B__0_0_OFFSET UNITYSDK_OFFSET(0xC1A56E0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__PARSEVISIBLECHARINDEXTOLINEINDEX_OFFSET UNITYSDK_OFFSET(0xC1A3800)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__PROCESSLINEINFOFORRUBY_OFFSET UNITYSDK_OFFSET(0xC1A3750)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__PROCESSLINEINFOS_OFFSET UNITYSDK_OFFSET(0xC1A04D0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__PROCESSONELINE_OFFSET UNITYSDK_OFFSET(0xC1A0900)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__RESETTEXTMOVEMENT_OFFSET UNITYSDK_OFFSET(0xC1A0C50)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__SHOWNEXTSENTENCE_OFFSET UNITYSDK_OFFSET(0xC1A0C00)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION__TRYFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xC1A02F0)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1A5800)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1A5810)
#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC1A5820)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoTextMotion_TypeDefinitionIndex = 68638;

	class MonoTextMotion : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		// static const ::System::String* _IgnoreChars; // 0x0
		::System::Boolean IsPause; // 0x20
		::System::Boolean showOutline; // 0x21
		::UnityEngine::Color effectColor; // 0x24
		::UnityEngine::Vector2 effectDistance; // 0x34
		::System::Boolean useGraphicAlpha; // 0x3C
		::System::Single FadeInDuration; // 0x40
		::System::Single FadeOutDuration; // 0x44
		::RPG::GameCore::TextMotionTyperType TyperType; // 0x48
		::System::Single _WrapDuration; // 0x4C
		::RPG::Client::LocalizedText* _TextCmpt; // 0x50
		::UnityEngine::RectTransform* _RectTransform; // 0x58
		::System::Boolean _ForceRedraw; // 0x60
		::System::Boolean _WaitingToFinishCallback; // 0x61
		::RPG::Client::Motions::TextMotionState _TextMotionState; // 0x64
		::System::String* _NextSentenceStr; // 0x68
		::RPG::Client::TextID _NextSentenceTextID; // 0x70
		::System::Boolean _WaitSetNextSentence; // 0x80
		::System::Action* _LuaFunctionCallback; // 0x88
		::System::Collections::Generic::List_1<::Struct_2_4C8453486C91E3A1_8>* _RubyDatas; // 0x90
		::Class_1_B4D062A3AA74182F* _MotionVertexHelper; // 0x98
		::Class_2_9C4E0E0141829F67* _TextEffectMotion; // 0xA0
		::Class_2_9C4E0E0141829F67* _TextWrapMotion; // 0xA8
		::Class_2_9C4E0E0141829F67* _TextExitingMotion; // 0xB0
		::System::Single _CharInterval; // 0xB8
		::System::Single _TotalWrapMovement; // 0xBC
		::UnityEngine::Color32 _TextColorWhite; // 0xC0
		::UnityEngine::Color32 _TextColorRogueAeon; // 0xC4
		::UnityEngine::Color32 _TextColorNousTalk; // 0xC8
		::System::Boolean ForbidEndLineCharMotion; // 0xCC
		::System::Collections::Generic::List_1<::RPG::Client::Motions::MonoTextMotion_LineInfo*>* _LineInfos; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CTOR_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_MODIFYMESH_OFFSET))(this, a1);
		}

		::System::Boolean HasMotionNotFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_HASMOTIONNOTFINISH_OFFSET))(this);
		}

		::System::Void ImmediateFinishAllMotions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_IMMEDIATEFINISHALLMOTIONS_OFFSET))(this);
		}

		::System::Void ImmediateFinishExitingMotions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_IMMEDIATEFINISHEXITINGMOTIONS_OFFSET))(this);
		}

		::System::Void ShowTextWithMotion(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_SHOWTEXTWITHMOTION_OFFSET))(this, a1, a2);
		}

		::System::Void ShowTextIDWithMotion(::System::Single a1, ::System::Action* a2, ::RPG::Client::TextID a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_SHOWTEXTIDWITHMOTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ShowTextIDWithMotionWithTyperType(::System::Single a1, ::System::Action* a2, ::RPG::GameCore::TextMotionTyperType a3, ::RPG::Client::TextID a4, ::Il2CppArray<::System::Object*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::RPG::GameCore::TextMotionTyperType, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_SHOWTEXTIDWITHMOTIONWITHTYPERTYPE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_RESUME_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_DESPAWNED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void ForceRedraw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_FORCEREDRAW_OFFSET))(this);
		}

		::System::Void _TryFinishCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__TRYFINISHCALLBACK_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_UPDATE_OFFSET))(this);
		}

		::System::Void _ProcessLineInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__PROCESSLINEINFOS_OFFSET))(this);
		}

		::System::Void _ProcessOneLine(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextFormatFlag>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32& a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextFormatFlag>*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__PROCESSONELINE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Class_2_9C4E0E0141829F67* _CreateTextExitingMotion()
		{
			return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATETEXTEXITINGMOTION_OFFSET))(this);
		}

		::System::Void _ShowNextSentence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__SHOWNEXTSENTENCE_OFFSET))(this);
		}

		::System::Void _ImmediatelyShowNextSentence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__IMMEDIATELYSHOWNEXTSENTENCE_OFFSET))(this);
		}

		::System::Void _ResetTextMovement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__RESETTEXTMOVEMENT_OFFSET))(this);
		}

		::Class_2_9C4E0E0141829F67* _CreateTextEffectMotion(::System::String* a1, ::System::Single a2)
		{
			return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATETEXTEFFECTMOTION_OFFSET))(this, a1, a2);
		}

		::Class_2_9C4E0E0141829F67* _CreateTyperMotion(::System::String* a1, ::System::Single a2)
		{
			return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATETYPERMOTION_OFFSET))(this, a1, a2);
		}

		::Class_2_9C4E0E0141829F67* _CreateWrapMotion(::System::Single a1)
		{
			return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATEWRAPMOTION_OFFSET))(this, a1);
		}

		::System::Single _GetRectBottomPosY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETRECTBOTTOMPOSY_OFFSET))(this);
		}

		::System::Single _GetLastLineBottomPosY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETLASTLINEBOTTOMPOSY_OFFSET))(this);
		}

		::System::Single _GetLineBottomPosY(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETLINEBOTTOMPOSY_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::Class_2_9C4E0E0141829F67*>* _CreateCharMotionInRange(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4, ::System::Single& a5, ::System::Single a6)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_9C4E0E0141829F67*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATECHARMOTIONINRANGE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::Generic::List_1<::Class_2_9C4E0E0141829F67*>* _CreateRubyCharMotion(::System::String* a1, ::Struct_2_4C8453486C91E3A1_8 a2, ::System::Int32& a3, ::System::Single& a4, ::System::Single a5)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_9C4E0E0141829F67*>*(*)(::PVOID, ::System::String*, ::Struct_2_4C8453486C91E3A1_8, ::System::Int32&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATERUBYCHARMOTION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* _GetSubStr(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETSUBSTR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 _GetVisibleCharCount(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETVISIBLECHARCOUNT_OFFSET))(a1);
		}

		::Class_2_9C4E0E0141829F67* _CreateCharMotion(::System::Int32 a1, ::System::Single a2)
		{
			return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATECHARMOTION_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessLineInfoForRuby(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__PROCESSLINEINFOFORRUBY_OFFSET))(this, a1, a2);
		}

		::System::Int32 _ParseVisibleCharIndexToLineIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__PARSEVISIBLECHARINDEXTOLINEINDEX_OFFSET))(this, a1);
		}

		::System::Void _ClearMotionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CLEARMOTIONDATA_OFFSET))(this);
		}

		::System::Void UpdateOutline(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Color a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Color, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_UPDATEOUTLINE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ApplyShadowZeroAlloc(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Color32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_APPLYSHADOWZEROALLOC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::Generic::List_1<::Class_2_9C4E0E0141829F67*>* _CreateRSE1CharMotionInRange(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4, ::System::Single& a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_9C4E0E0141829F67*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Single&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATERSE1CHARMOTIONINRANGE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::Class_2_9C4E0E0141829F67* _CreateRSE1CharMotion(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::Color32 a6, ::UnityEngine::Color32 a7)
		{
			return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATERSE1CHARMOTION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::Class_2_9C4E0E0141829F67* _CreateNousTyperMotion(::System::String* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATENOUSTYPERMOTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 _GetTotalBottomVisibleCharCount(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETTOTALBOTTOMVISIBLECHARCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_2_9C4E0E0141829F67*>* _CreateNousCharMotionInRange(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4, ::System::Int32& a5, ::System::Single a6, ::UnityEngine::CharacterInfo a7, ::System::Int32 a8)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_9C4E0E0141829F67*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Single, ::UnityEngine::CharacterInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATENOUSCHARMOTIONINRANGE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Collections::Generic::List_1<::Class_2_9C4E0E0141829F67*>* _CreateNousRubyCharMotion(::System::String* a1, ::Struct_2_4C8453486C91E3A1_8 a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Single a5, ::UnityEngine::CharacterInfo a6, ::System::Int32 a7)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_9C4E0E0141829F67*>*(*)(::PVOID, ::System::String*, ::Struct_2_4C8453486C91E3A1_8, ::System::Int32&, ::System::Int32&, ::System::Single, ::UnityEngine::CharacterInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATENOUSRUBYCHARMOTION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::Class_2_9C4E0E0141829F67* _CreateNousCharMotion(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::Color32 a5, ::UnityEngine::CharacterInfo a6)
		{
			return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::UnityEngine::Color32, ::UnityEngine::CharacterInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATENOUSCHARMOTION_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Class_2_9C4E0E0141829F67* _CreateNousRubyCharMotion_1(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::Color32 a6, ::UnityEngine::CharacterInfo a7)
		{
			return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::UnityEngine::Color32, ::UnityEngine::CharacterInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__CREATENOUSRUBYCHARMOTION_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::CharacterInfo _GetMaskCharacterInfo()
		{
			return ((::UnityEngine::CharacterInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__GETMASKCHARACTERINFO_OFFSET))(this);
		}

		::System::Void _ModifyMesh_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION__MODIFYMESH_B__0_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
		}
	};
}
