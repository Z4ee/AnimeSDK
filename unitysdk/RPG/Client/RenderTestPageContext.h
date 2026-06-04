#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RenderTestMode.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9E8CD0C1037EB98E_3;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class RenderTestPageContext_AnimationDropDownItem; }
namespace RPG::Client { class RenderTestPageContext_PlayerDropDownItem; }
namespace RPG::GameCore { class ShaderTestPreloadConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_RENDERTESTPAGECONTEXT_GETCAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0xC712470)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xC700AC0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC7004A0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC700540)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__GETCURRENTCHARACTERANIMATOR_OFFSET UNITYSDK_OFFSET(0xC711A80)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__GETTRANSITFOV_OFFSET UNITYSDK_OFFSET(0xC70BD60)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__GETTRANSITOFFSET_OFFSET UNITYSDK_OFFSET(0xC70BB90)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITANIMATIONDROPDOWN_OFFSET UNITYSDK_OFFSET(0xC7045A0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITAVATARDROPDOWN_OFFSET UNITYSDK_OFFSET(0xC70C660)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITBASELINEAVATARDROPDOWN_OFFSET UNITYSDK_OFFSET(0xC702C20)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITDEBUGCAMCONFIGPANEL_OFFSET UNITYSDK_OFFSET(0xC7027B0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITLIGHTINGDROPDOWN_OFFSET UNITYSDK_OFFSET(0xC7094F0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITMONSTERDROPDOWN_OFFSET UNITYSDK_OFFSET(0xC70D4B0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITNPCDROPDOWN_OFFSET UNITYSDK_OFFSET(0xC70DBE0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITNPCMONSTERDROPDOWN_OFFSET UNITYSDK_OFFSET(0xC70CD90)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITPLAYERDROPDOWN_OFFSET UNITYSDK_OFFSET(0xC70BF30)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__INITSHADERTESTDROPDOWN_OFFSET UNITYSDK_OFFSET(0xC703A30)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONANIMATIONPLAYED_OFFSET UNITYSDK_OFFSET(0xC711670)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONANIMATIONSLIDERCHANGED_OFFSET UNITYSDK_OFFSET(0xC7118F0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONAPPLYCAMECONFIG_OFFSET UNITYSDK_OFFSET(0xC70EC70)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONBACKGROUNDTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0xC7111E0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEAVATAR_OFFSET UNITYSDK_OFFSET(0xC70E4F0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINEAVATAR_OFFSET UNITYSDK_OFFSET(0xC703810)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINEMONSTER_OFFSET UNITYSDK_OFFSET(0xC710050)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINENPC_OFFSET UNITYSDK_OFFSET(0xC70FE40)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATECHARACTER_OFFSET UNITYSDK_OFFSET(0xC709A80)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0xC70E8B0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATENPCMONSTER_OFFSET UNITYSDK_OFFSET(0xC70E6D0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATENPC_OFFSET UNITYSDK_OFFSET(0xC70EA90)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEPLAYER_OFFSET UNITYSDK_OFFSET(0xC70E310)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONEXITBTN_OFFSET UNITYSDK_OFFSET(0xC709BA0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONEXPORTCAMECONFIG_OFFSET UNITYSDK_OFFSET(0xC70F160)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0xC711BC0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONHIDERIGHTUI_OFFSET UNITYSDK_OFFSET(0xC709EC0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONHIDEUI_OFFSET UNITYSDK_OFFSET(0xC709C20)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLIGHTDIRECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xC7113C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLODLEVELCHANGE_OFFSET UNITYSDK_OFFSET(0xC70FD10)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLOOKATTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0xC7120B0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHEND_OFFSET UNITYSDK_OFFSET(0xC70BA30)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHIN_OFFSET UNITYSDK_OFFSET(0xC70B710)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHOUT_OFFSET UNITYSDK_OFFSET(0xC70B8A0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONREFRESHMATERIALS_OFFSET UNITYSDK_OFFSET(0xC710290)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONRESETBTN_OFFSET UNITYSDK_OFFSET(0xC70A170)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONRESETROTBTN_OFFSET UNITYSDK_OFFSET(0xC70A270)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSCREENDRAGING_OFFSET UNITYSDK_OFFSET(0xC70A370)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSCROLL_OFFSET UNITYSDK_OFFSET(0xC70B040)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALAVATAR_OFFSET UNITYSDK_OFFSET(0xC710550)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALMONSTER_OFFSET UNITYSDK_OFFSET(0xC710830)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALNPC_OFFSET UNITYSDK_OFFSET(0xC7106C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIAL_OFFSET UNITYSDK_OFFSET(0xC7109A0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSHOWCAPTUREPANEL_OFFSET UNITYSDK_OFFSET(0xC711010)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSWITCHMODE_OFFSET UNITYSDK_OFFSET(0xC710B00)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0xC7098C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__REFRESHCHARDROPDOWN_OFFSET UNITYSDK_OFFSET(0xC702740)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__SAVETOLOCAL_OFFSET UNITYSDK_OFFSET(0xC712310)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__SCROLLCAMERA_OFFSET UNITYSDK_OFFSET(0xC70B1C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC700B20)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__TAKEMULTISCREENSHOT_OFFSET UNITYSDK_OFFSET(0xC711F80)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__TAKESINGLESCREENSHOT_OFFSET UNITYSDK_OFFSET(0xC712010)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC709990)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC712660)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xC712720)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC7126C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC712780)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___SETUPVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0xC712650)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderTestPageContext_TypeDefinitionIndex = 68065;

	class RenderTestPageContext : public ::RPG::Client::UIController
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _NPCDropDownNameList; // 0x180
		::System::Collections::Generic::List_1<::System::String*>* _MaterialList; // 0x188
		::UnityEngine::GameObject* GreenBlockObject; // 0x190
		::System::Collections::Generic::List_1<::System::String*>* _ShaderTestMonsters; // 0x198
		::UnityEngine::Texture2D* CaptureTexture; // 0x1A0
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _MonsterDropDownList; // 0x1A8
		::System::Collections::Generic::List_1<::System::String*>* _BaselineNPCDropDownNameList; // 0x1B0
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _BaselineMonsterDropDownList; // 0x1B8
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _NPCMonsterDropDownList; // 0x1C0
		::System::Collections::Generic::List_1<::System::String*>* _AvatarDropDownNameList; // 0x1C8
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _NPCDropDownList; // 0x1D0
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _BaselineAvatarDropDownList; // 0x1D8
		::System::Collections::Generic::List_1<::System::String*>* _MonsterDropDownNameList; // 0x1E0
		::System::Collections::Generic::List_1<::System::String*>* _ShaderTestAvatars; // 0x1E8
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _BaselineNPCDropDownList; // 0x1F0
		::System::Collections::Generic::List_1<::System::String*>* _BaselineAvatarDropDownNameList; // 0x1F8
		::RPG::GameCore::ShaderTestPreloadConfig* shaderTestPreloadConfig; // 0x200
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_AnimationDropDownItem*>* _AnimStateList; // 0x208
		::System::Collections::Generic::List_1<::System::String*>* _ShaderTestNpcs; // 0x210
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _PlayerDropDownList; // 0x218
		::System::Collections::Generic::List_1<::RPG::Client::RenderTestPageContext_PlayerDropDownItem*>* _AvatarDropDownList; // 0x220
		::System::Collections::Generic::List_1<::System::String*>* _PlayerDropDownNameList; // 0x228
		::System::Collections::Generic::List_1<::System::String*>* _NPCMonsterDropDownNameList; // 0x230
		::System::Collections::Generic::List_1<::System::String*>* _BaselineMonsterDropDownNameList; // 0x238
		::System::Single CaptureFrameFreeLookMinDistance; // 0x240
		::UnityEngine::Vector3 _Offset; // 0x244
		::System::Single CaptureFrameFreeLookMaxDistance; // 0x250
		::UnityEngine::Vector3 _InitLookAtPos; // 0x254
		::RPG::Client::RenderTestMode _RenderTestMode; // 0x260
		::System::Boolean _IsHideRightUI; // 0x264
		::System::Boolean ShowingCapturePanel; // 0x265
		::System::Boolean _IsHideUI; // 0x266
		::System::Boolean CapturingFrame; // 0x267
		::System::Int32 ModeNum; // 0x268

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _OnCreateCharacter(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATECHARACTER_OFFSET))(this, a1);
		}

		::System::Void _OnExitBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONEXITBTN_OFFSET))(this);
		}

		::System::Void _OnHideUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONHIDEUI_OFFSET))(this);
		}

		::System::Void _OnHideRightUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONHIDERIGHTUI_OFFSET))(this);
		}

		::System::Void _OnResetBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONRESETBTN_OFFSET))(this);
		}

		::System::Void _OnResetRotBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONRESETROTBTN_OFFSET))(this);
		}

		::System::Void _OnScreenDraging(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSCREENDRAGING_OFFSET))(this, a1);
		}

		::System::Void _OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSCROLL_OFFSET))(this, a1);
		}

		::System::Void _OnPinchIn(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHIN_OFFSET))(this, a1);
		}

		::System::Void _OnPinchOut(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHOUT_OFFSET))(this, a1);
		}

		::System::Void _OnPinchEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONPINCHEND_OFFSET))(this, a1);
		}

		::System::Single _GetTransitOffset(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__GETTRANSITOFFSET_OFFSET))(this, a1);
		}

		::System::Single _GetTransitFOV(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__GETTRANSITFOV_OFFSET))(this, a1);
		}

		::System::Void _ScrollCamera(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__SCROLLCAMERA_OFFSET))(this, a1);
		}

		::System::Void _RefreshCharDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__REFRESHCHARDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitPlayerDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITPLAYERDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitAvatarDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITAVATARDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitNPCMonsterDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITNPCMONSTERDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitMonsterDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITMONSTERDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitNPCDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITNPCDROPDOWN_OFFSET))(this);
		}

		::System::Void _OnCreatePlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEPLAYER_OFFSET))(this);
		}

		::System::Void _OnCreateAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEAVATAR_OFFSET))(this);
		}

		::System::Void _OnCreateNPCMonster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATENPCMONSTER_OFFSET))(this);
		}

		::System::Void _OnCreateMonster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEMONSTER_OFFSET))(this);
		}

		::System::Void _OnCreateNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATENPC_OFFSET))(this);
		}

		::System::Void _OnApplyCameConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONAPPLYCAMECONFIG_OFFSET))(this);
		}

		::System::Void _InitDebugCamConfigPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITDEBUGCAMCONFIGPANEL_OFFSET))(this);
		}

		::System::Void _OnExportCameConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONEXPORTCAMECONFIG_OFFSET))(this);
		}

		::System::Void _InitBaselineAvatarDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITBASELINEAVATARDROPDOWN_OFFSET))(this);
		}

		::System::Void _OnLodLevelChange(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLODLEVELCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnCreateBaselineAvatar(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnCreateBaselineNPC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINENPC_OFFSET))(this, a1);
		}

		::System::Void _OnCreateBaselineMonster(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONCREATEBASELINEMONSTER_OFFSET))(this, a1);
		}

		::System::Void _InitShaderTestDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITSHADERTESTDROPDOWN_OFFSET))(this);
		}

		::System::Void _OnSetMaterialAvatar(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnSetMaterialNPC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALNPC_OFFSET))(this, a1);
		}

		::System::Void _OnSetMaterialMonster(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIALMONSTER_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshMaterials(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONREFRESHMATERIALS_OFFSET))(this, a1);
		}

		::System::Void _OnSetMaterial(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSETMATERIAL_OFFSET))(this, a1);
		}

		::System::Void _OnSwitchMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSWITCHMODE_OFFSET))(this);
		}

		::System::Void _OnShowCapturePanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONSHOWCAPTUREPANEL_OFFSET))(this);
		}

		::System::Void _OnBackgroundToggleChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONBACKGROUNDTOGGLECHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnLightDirectionChanged(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLIGHTDIRECTIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnAnimationPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONANIMATIONPLAYED_OFFSET))(this);
		}

		::System::Void _OnAnimationSliderChanged(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONANIMATIONSLIDERCHANGED_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* _GetCurrentCharacterAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__GETCURRENTCHARACTERANIMATOR_OFFSET))(this);
		}

		::System::Void _InitAnimationDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITANIMATIONDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitLightingDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__INITLIGHTINGDROPDOWN_OFFSET))(this);
		}

		::System::Void _OnFrameCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONFRAMECAPTURE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _TakeMultiScreenShot()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__TAKEMULTISCREENSHOT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _TakeSingleScreenShot(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__TAKESINGLESCREENSHOT_OFFSET))(this, a1, a2);
		}

		::System::Void _OnLookAtToggleChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__ONLOOKATTOGGLECHANGED_OFFSET))(this, a1);
		}

		::System::Void _SaveToLocal(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT__SAVETOLOCAL_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Texture2D* GetCaptureTexture(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT_GETCAPTURETEXTURE_OFFSET))(this, a1, a2);
		}

		::Class_2_9E8CD0C1037EB98E_3* get_View()
		{
			return ((::Class_2_9E8CD0C1037EB98E_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT_GET_VIEW_OFFSET))(this);
		}

		::System::Void __SetupView_b__4_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___SETUPVIEW_B__4_0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
		}
	};
}
