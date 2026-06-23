#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_53DDAF81FA4D5748;
class Class_1_9CFBC14B74B66E2C;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class UIGalgamePageController_UIRoleInfo; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARASSEMBLYNPCGO_OFFSET UNITYSDK_OFFSET(0x177777C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARAVATARVIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x17776DA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEAREFFECTENTITIES_OFFSET UNITYSDK_OFFSET(0x17777A10)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARFILTER_OFFSET UNITYSDK_OFFSET(0x177779C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARROLEINFO_1_OFFSET UNITYSDK_OFFSET(0x177771D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARROLEINFO_OFFSET UNITYSDK_OFFSET(0x17776FA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARUIWIDGET_OFFSET UNITYSDK_OFFSET(0x17777FC0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARWINKITEM_OFFSET UNITYSDK_OFFSET(0x17776EC0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEAR_OFFSET UNITYSDK_OFFSET(0x17778140)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_ASSEMBLYNPCGO_OFFSET UNITYSDK_OFFSET(0x17776510)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_CHARACTERTEXTURESHEETNAME_OFFSET UNITYSDK_OFFSET(0x17776680)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_FACIALKEY_OFFSET UNITYSDK_OFFSET(0x15B9C5B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x177766A0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_INITSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x177766C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_ISASSEMBLYNPC_OFFSET UNITYSDK_OFFSET(0x17776530)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_ISUSINGTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x17776640)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_ISVIDEO_OFFSET UNITYSDK_OFFSET(0x17776500)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_POSEKEY_OFFSET UNITYSDK_OFFSET(0x15B9C590)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_ROLEINFO_OFFSET UNITYSDK_OFFSET(0x15B9C570)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_TEXTURESHEETNODEPATH_OFFSET UNITYSDK_OFFSET(0x17776660)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_VIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x177764E0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_WINKITEM_OFFSET UNITYSDK_OFFSET(0x15B9C550)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_INITTEXTURESHEETUSING_OFFSET UNITYSDK_OFFSET(0x17776750)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETASSEMBLYNPCGO_OFFSET UNITYSDK_OFFSET(0x17776C50)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETAVATARVIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x17776C00)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x17776A80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETFACIALKEY_OFFSET UNITYSDK_OFFSET(0x17776D00)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETFILTER_OFFSET UNITYSDK_OFFSET(0x17776D50)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETINITSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x177766E0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETPOSEKEY_OFFSET UNITYSDK_OFFSET(0x17776CB0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETROLEINFO_OFFSET UNITYSDK_OFFSET(0x17776BA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETUIWIDGET_OFFSET UNITYSDK_OFFSET(0x17776AF0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETWINKITEM_OFFSET UNITYSDK_OFFSET(0x17776B40)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_ASSEMBLYNPCGO_OFFSET UNITYSDK_OFFSET(0x17776520)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_CHARACTERTEXTURESHEETNAME_OFFSET UNITYSDK_OFFSET(0x17776690)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_FACIALKEY_OFFSET UNITYSDK_OFFSET(0x177764D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x177766B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_INITSHOWSETTING_OFFSET UNITYSDK_OFFSET(0x177766D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_ISUSINGTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x17776650)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_POSEKEY_OFFSET UNITYSDK_OFFSET(0x15B9C5A0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_ROLEINFO_OFFSET UNITYSDK_OFFSET(0x15B9C580)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_TEXTURESHEETNODEPATH_OFFSET UNITYSDK_OFFSET(0x17776670)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_VIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x177764F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_WINKITEM_OFFSET UNITYSDK_OFFSET(0x15B9C560)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_TRYRESETGENERALTEXTURESHEETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17777260)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x17776730)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_AvatarDisplaySetting_TypeDefinitionIndex = 54899;

	class UIGalgamePageController_AvatarDisplaySetting : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::UIGalgamePageController_UIRoleInfo*>* roleInfoRetrieveAction; // 0x10
		::UnityEngine::GameObject* _assemblyNpcGO_k__BackingField; // 0x18
		::MoleMole::UIGalgamePageController_UIRoleInfo* _roleInfo_k__BackingField; // 0x20
		::System::String* _poseKey_k__BackingField; // 0x28
		::System::String* _CharacterTextureSheetName_k__BackingField; // 0x30
		::Class_1_9CFBC14B74B66E2C* _winkItem_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* longLiveEffectEntities; // 0x40
		::MoleMole::UIWidgetController* uiWidget; // 0x48
		::MoleMole::IVideoPlayer* _videoPlayer_k__BackingField; // 0x50
		::System::Action* OnClear; // 0x58
		::MoleMole::AvatarShowSetting* _initShowSetting_k__BackingField; // 0x60
		::System::Action_1<::Class_1_9CFBC14B74B66E2C*>* winkItemRetrieveAction; // 0x68
		::System::String* _TextureSheetNodePath_k__BackingField; // 0x70
		::Class_1_53DDAF81FA4D5748* _filter_k__BackingField; // 0x78
		::System::String* _facialKey_k__BackingField; // 0x80
		::System::Int32 emotionIdx; // 0x88
		::System::Boolean isAvatarShowing; // 0x8C
		::System::Boolean _IsUsingTextureSheet_k__BackingField; // 0x8D
		::System::Boolean enableForbiddenMaterialEffect; // 0x8E
		::System::Boolean _NPCGoUseSelfLightSetting; // 0x8F
		::System::Int32 actorId; // 0x90
		::System::UInt32 entityID; // 0x94
		::System::Int32 stageNodeIdx; // 0x98

		::System::Void _ctor(::System::Int32 actorId, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING__CTOR_OFFSET))(this, actorId, index);
		}

		::Class_1_9CFBC14B74B66E2C* get_winkItem()
		{
			return ((::Class_1_9CFBC14B74B66E2C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_WINKITEM_OFFSET))(this);
		}

		::System::Void set_winkItem(::Class_1_9CFBC14B74B66E2C* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9CFBC14B74B66E2C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_WINKITEM_OFFSET))(this, value);
		}

		::MoleMole::UIGalgamePageController_UIRoleInfo* get_roleInfo()
		{
			return ((::MoleMole::UIGalgamePageController_UIRoleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_ROLEINFO_OFFSET))(this);
		}

		::System::Void set_roleInfo(::MoleMole::UIGalgamePageController_UIRoleInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgamePageController_UIRoleInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_ROLEINFO_OFFSET))(this, value);
		}

		::System::String* get_poseKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_POSEKEY_OFFSET))(this);
		}

		::System::Void set_poseKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_POSEKEY_OFFSET))(this, value);
		}

		::System::String* get_facialKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_FACIALKEY_OFFSET))(this);
		}

		::System::Void set_facialKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_FACIALKEY_OFFSET))(this, value);
		}

		::MoleMole::IVideoPlayer* get_videoPlayer()
		{
			return ((::MoleMole::IVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_VIDEOPLAYER_OFFSET))(this);
		}

		::System::Void set_videoPlayer(::MoleMole::IVideoPlayer* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_VIDEOPLAYER_OFFSET))(this, value);
		}

		::System::Boolean get_IsVideo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_ISVIDEO_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_assemblyNpcGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_ASSEMBLYNPCGO_OFFSET))(this);
		}

		::System::Void set_assemblyNpcGO(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_ASSEMBLYNPCGO_OFFSET))(this, value);
		}

		::System::Boolean get_IsAssemblyNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_ISASSEMBLYNPC_OFFSET))(this);
		}

		::System::Boolean get_IsUsingTextureSheet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_ISUSINGTEXTURESHEET_OFFSET))(this);
		}

		::System::Void set_IsUsingTextureSheet(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_ISUSINGTEXTURESHEET_OFFSET))(this, value);
		}

		::System::String* get_TextureSheetNodePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_TEXTURESHEETNODEPATH_OFFSET))(this);
		}

		::System::Void set_TextureSheetNodePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_TEXTURESHEETNODEPATH_OFFSET))(this, value);
		}

		::System::String* get_CharacterTextureSheetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_CHARACTERTEXTURESHEETNAME_OFFSET))(this);
		}

		::System::Void set_CharacterTextureSheetName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_CHARACTERTEXTURESHEETNAME_OFFSET))(this, value);
		}

		::Class_1_53DDAF81FA4D5748* get_filter()
		{
			return ((::Class_1_53DDAF81FA4D5748*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_FILTER_OFFSET))(this);
		}

		::System::Void set_filter(::Class_1_53DDAF81FA4D5748* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53DDAF81FA4D5748*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_FILTER_OFFSET))(this, value);
		}

		::MoleMole::AvatarShowSetting* get_initShowSetting()
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_GET_INITSHOWSETTING_OFFSET))(this);
		}

		::System::Void set_initShowSetting(::MoleMole::AvatarShowSetting* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AvatarShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SET_INITSHOWSETTING_OFFSET))(this, value);
		}

		::System::Void SetInitShowSetting(::MoleMole::AvatarShowSetting* setting)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AvatarShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETINITSHOWSETTING_OFFSET))(this, setting);
		}

		::System::Void InitTextureSheetUsing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_INITTEXTURESHEETUSING_OFFSET))(this);
		}

		::System::Void SetEffectList(::System::UInt32 entityID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* effectEntities, ::System::Boolean enableForbiddenMaterialEffect)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETEFFECTLIST_OFFSET))(this, entityID, effectEntities, enableForbiddenMaterialEffect);
		}

		::System::Void SetUIWidget(::MoleMole::UIWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETUIWIDGET_OFFSET))(this, ctrl);
		}

		::System::Void SetWinkItem(::Class_1_9CFBC14B74B66E2C* item, ::System::Action_1<::Class_1_9CFBC14B74B66E2C*>* itemRetrieveAction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9CFBC14B74B66E2C*, ::System::Action_1<::Class_1_9CFBC14B74B66E2C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETWINKITEM_OFFSET))(this, item, itemRetrieveAction);
		}

		::System::Void SetRoleInfo(::MoleMole::UIGalgamePageController_UIRoleInfo* roleInfo, ::System::Action_1<::MoleMole::UIGalgamePageController_UIRoleInfo*>* infoRetrieveAction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgamePageController_UIRoleInfo*, ::System::Action_1<::MoleMole::UIGalgamePageController_UIRoleInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETROLEINFO_OFFSET))(this, roleInfo, infoRetrieveAction);
		}

		::System::Void SetAvatarVideoPlayer(::MoleMole::IVideoPlayer* iVideoPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETAVATARVIDEOPLAYER_OFFSET))(this, iVideoPlayer);
		}

		::System::Void SetAssemblyNpcGO(::UnityEngine::GameObject* go, ::System::Boolean useSelfLightSetting)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETASSEMBLYNPCGO_OFFSET))(this, go, useSelfLightSetting);
		}

		::System::Void SetPoseKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETPOSEKEY_OFFSET))(this, key);
		}

		::System::Void SetFacialKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETFACIALKEY_OFFSET))(this, key);
		}

		::System::Void SetFilter(::Class_1_53DDAF81FA4D5748* filter)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53DDAF81FA4D5748*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_SETFILTER_OFFSET))(this, filter);
		}

		::System::Void ClearAvatarVideoPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARAVATARVIDEOPLAYER_OFFSET))(this);
		}

		::System::Void ClearWinkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARWINKITEM_OFFSET))(this);
		}

		::System::Void ClearRoleInfo(::System::Boolean immediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARROLEINFO_OFFSET))(this, immediately);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ClearRoleInfo_1(::System::Action* onClear, ::MoleMole::UIGalgamePageController_UIRoleInfo* currRoleInfo)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Action*, ::MoleMole::UIGalgamePageController_UIRoleInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARROLEINFO_1_OFFSET))(this, onClear, currRoleInfo);
		}

		::System::Void TryResetGeneralTextureSheetComponent(::MoleMole::UIGalgamePageController_UIRoleInfo* currRoleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgamePageController_UIRoleInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_TRYRESETGENERALTEXTURESHEETCOMPONENT_OFFSET))(this, currRoleInfo);
		}

		::System::Void ClearAssemblyNpcGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARASSEMBLYNPCGO_OFFSET))(this);
		}

		::System::Void ClearFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARFILTER_OFFSET))(this);
		}

		::System::Void ClearEffectEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEAREFFECTENTITIES_OFFSET))(this);
		}

		::System::Void ClearUIWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEARUIWIDGET_OFFSET))(this);
		}

		::System::Void Clear(::System::Action* OnClear, ::System::Boolean immediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING_CLEAR_OFFSET))(this, OnClear, immediately);
		}
	};
}
