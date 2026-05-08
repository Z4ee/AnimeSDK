#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_1824EF69C8E376A3;
namespace Code::Logic::UI::UIComponent { class MonoMindscapeLenticular; }
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoLinearTransition; }
namespace MoleMole { class MonoMindscapeController; }
namespace MoleMole { class UIMindscapeLevelRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x147C6CE0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETAVATARCOLOR_OFFSET UNITYSDK_OFFSET(0x147C43E0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETMINDSCAPELENTICULAR_OFFSET UNITYSDK_OFFSET(0x147C6850)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_HIDEMASKANI_OFFSET UNITYSDK_OFFSET(0x147C4FC0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x147C2130)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONLEVELROWCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x147C45B0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONTALENTUNLOCKHANDLE_OFFSET UNITYSDK_OFFSET(0x147C4B50)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147C6ED0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYBGFADEIN_OFFSET UNITYSDK_OFFSET(0x147C62F0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYBGUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x147C4CE0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYCHANGEAVATARFADEIN_OFFSET UNITYSDK_OFFSET(0x147C6410)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYLEVELROWUNLOCK_OFFSET UNITYSDK_OFFSET(0x147C6530)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x147C5120)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_RESETCUSTOMLISTMANAGEITEMS_OFFSET UNITYSDK_OFFSET(0x147C55F0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETAVATARCOLOR_OFFSET UNITYSDK_OFFSET(0x147C4440)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETAVATAR_OFFSET UNITYSDK_OFFSET(0x147C50A0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLENTICULARSTATE_1_OFFSET UNITYSDK_OFFSET(0x147C41E0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLENTICULARSTATE_OFFSET UNITYSDK_OFFSET(0x147C68A0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLEVELROWSTATE_OFFSET UNITYSDK_OFFSET(0x147C47F0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETMASKBGSTATE_1_OFFSET UNITYSDK_OFFSET(0x147C5A00)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETMASKBGSTATE_OFFSET UNITYSDK_OFFSET(0x147C5660)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETUNLOCKOVERHANDLE_OFFSET UNITYSDK_OFFSET(0x147C4B00)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x147C6810)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147C7090)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147C7460)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeCutBgController_TypeDefinitionIndex = 82259;

	class UIMindscapeCutBgController : public ::MoleMole::UIMonoController
	{
	public:
		// static const ::System::String* FadeInName; // 0x0
		// static const ::System::String* ChangeAvatarFadeInName; // 0x0
		::MoleMole::MonoMindscapeController* maskBgRootController; // 0x80
		::Code::Logic::UI::UIComponent::MonoMindscapeLenticular* _mindscapeLenticular; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* maskBgRootList; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::MonoLinearTransition*>* MaskLinearTransitionList; // 0x98
		::UnityEngine::RectTransform* levelRoot; // 0xA0
		::UnityEngine::RectTransform* AniRoot; // 0xA8
		::UnityEngine::RectTransform* AniChangeRoot; // 0xB0
		::UnityEngine::Color AvatarColor; // 0xB8
		::UnityEngine::Vector2 LevelRowOffset2; // 0xC8
		::UnityEngine::Vector2 m_MaxRotation; // 0xD0
		::UnityEngine::GameObject* _rootObj; // 0xD8
		::UnityEngine::Animation* SkinAni; // 0xE0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _levelRootList; // 0xE8
		::System::Collections::Generic::List_1<::MoleMole::UIMindscapeLevelRowWidgetController*>* _levelRowWidgetList; // 0xF0
		::System::Collections::Generic::List_1<::MoleMole::UIMindscapeLevelRowWidgetController*>* _levelRowSpaceWidgetList; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*>* maskBgDir; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* maskAniList; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* maskChangeAniList; // 0x110
		::System::Boolean _previewMode; // 0x118
		::System::Boolean _friendPreviewMode; // 0x119
		::System::String* ModelName; // 0x120
		::Class_2_1824EF69C8E376A3* _avatarData; // 0x128
		::System::Int32 _selectSlot; // 0x130
		::System::Action_1<::System::Int32>* _talentUnlockOverHandle; // 0x138
		::UnityEngine::RectTransform* _levelRootRect; // 0x140
		::System::Boolean _isShowLevelRow; // 0x148
		::System::Boolean isShowLenticular; // 0x149

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::UnityEngine::Color GetAvatarColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETAVATARCOLOR_OFFSET))(this);
		}

		::System::Void SetAvatarColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETAVATARCOLOR_OFFSET))(this);
		}

		::System::Void OnLevelRowClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONLEVELROWCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void SetUnlockOverHandle(::System::Action_1<::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETUNLOCKOVERHANDLE_OFFSET))(this, action);
		}

		::System::Void OnTalentUnlockHandle(::System::Boolean isUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONTALENTUNLOCKHANDLE_OFFSET))(this, isUnlock);
		}

		::System::Single PlayBgUnLockAni(::System::Int32 slot)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYBGUNLOCKANI_OFFSET))(this, slot);
		}

		::System::Void HideMaskAni()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_HIDEMASKANI_OFFSET))(this);
		}

		::System::Void SetAvatar(::Class_2_1824EF69C8E376A3* _avatar, ::System::Boolean previewMode, ::System::Boolean friendPreviewMode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETAVATAR_OFFSET))(this, _avatar, previewMode, friendPreviewMode);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ResetCustomListManageItems(::MoleMole::MonoGamepadCustomList* customList, ::System::Int32 defaultSelectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadCustomList*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_RESETCUSTOMLISTMANAGEITEMS_OFFSET))(this, customList, defaultSelectIndex);
		}

		::System::Single SetMaskBgState(::Il2CppArray<::System::Boolean>* tabState, ::System::Boolean withAni, ::System::Int32 changeAniIndex)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::System::Boolean>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETMASKBGSTATE_OFFSET))(this, tabState, withAni, changeAniIndex);
		}

		::System::Void SetMaskBgState_1(::Il2CppArray<::System::Boolean>* tabState)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETMASKBGSTATE_1_OFFSET))(this, tabState);
		}

		::System::Single SetLevelRowState(::System::Boolean isShow, ::System::Boolean isInit)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLEVELROWSTATE_OFFSET))(this, isShow, isInit);
		}

		::System::Single PlayBgFadeIn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYBGFADEIN_OFFSET))(this);
		}

		::System::Single PlayChangeAvatarFadeIn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYCHANGEAVATARFADEIN_OFFSET))(this);
		}

		::System::Void PlayLevelRowUnlock(::System::Int32 slot, ::System::Action* unlockCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYLEVELROWUNLOCK_OFFSET))(this, slot, unlockCallback);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_UPDATE_OFFSET))(this);
		}

		::Code::Logic::UI::UIComponent::MonoMindscapeLenticular* GetMindscapeLenticular()
		{
			return ((::Code::Logic::UI::UIComponent::MonoMindscapeLenticular*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETMINDSCAPELENTICULAR_OFFSET))(this);
		}

		::System::Void SetLenticularState(::UnityEngine::Vector2 mousePos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLENTICULARSTATE_OFFSET))(this, mousePos);
		}

		::System::Void SetLenticularState_1(::System::Boolean isLenticular)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLENTICULARSTATE_1_OFFSET))(this, isLenticular);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
