#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AnimatorButtonCheckMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoTabControl_LayoutItem; }
namespace RPG::Client { class MonoTabControl_LayoutParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_MONOTABCONTROL_ADDLAYOUTBUTTON_OFFSET UNITYSDK_OFFSET(0xA9FCC00)
#define RPG_CLIENT_MONOTABCONTROL_CLEARLAYOUTBUTTON_OFFSET UNITYSDK_OFFSET(0xA9FCF40)
#define RPG_CLIENT_MONOTABCONTROL_CLEARTABBUTTON_OFFSET UNITYSDK_OFFSET(0xA9FD6F0)
#define RPG_CLIENT_MONOTABCONTROL_CREATETABBUTTON_OFFSET UNITYSDK_OFFSET(0xA9FD550)
#define RPG_CLIENT_MONOTABCONTROL_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA9FDB40)
#define RPG_CLIENT_MONOTABCONTROL_GET_ANIMATORBTNMODE_OFFSET UNITYSDK_OFFSET(0xA9FE0C0)
#define RPG_CLIENT_MONOTABCONTROL_GET_CURRENTSELECTITEM_OFFSET UNITYSDK_OFFSET(0xA9FE0A0)
#define RPG_CLIENT_MONOTABCONTROL_GET_MSCROLLRECT_OFFSET UNITYSDK_OFFSET(0xA9FD8E0)
#define RPG_CLIENT_MONOTABCONTROL_GET__RECTTRANSFORMREF_OFFSET UNITYSDK_OFFSET(0xA9FD670)
#define RPG_CLIENT_MONOTABCONTROL_ISANIMATORCHECKMODEENABLECLICK_OFFSET UNITYSDK_OFFSET(0xA9FE120)
#define RPG_CLIENT_MONOTABCONTROL_ISANIMATORCHECKMODE_OFFSET UNITYSDK_OFFSET(0xA9FE0D0)
#define RPG_CLIENT_MONOTABCONTROL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA9FDB90)
#define RPG_CLIENT_MONOTABCONTROL_ONITEMINDEXSELECT_OFFSET UNITYSDK_OFFSET(0xA9FD950)
#define RPG_CLIENT_MONOTABCONTROL_SCROLLTOINDEX_OFFSET UNITYSDK_OFFSET(0xA9FDA40)
#define RPG_CLIENT_MONOTABCONTROL_SETSCROLLRECT_OFFSET UNITYSDK_OFFSET(0xA9FD900)
#define RPG_CLIENT_MONOTABCONTROL_SET_CURRENTSELECTITEM_OFFSET UNITYSDK_OFFSET(0xA9FE0B0)
#define RPG_CLIENT_MONOTABCONTROL_SET_MSCROLLRECT_OFFSET UNITYSDK_OFFSET(0xA9FD8F0)
#define RPG_CLIENT_MONOTABCONTROL_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA9FDB00)
#define RPG_CLIENT_MONOTABCONTROL_UPDATELAYOUT_OFFSET UNITYSDK_OFFSET(0xA9FCFB0)
#define RPG_CLIENT_MONOTABCONTROL__ADDHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA9FCDE0)
#define RPG_CLIENT_MONOTABCONTROL__ADDVERTICAL_OFFSET UNITYSDK_OFFSET(0xA9FCC80)
#define RPG_CLIENT_MONOTABCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FE170)
#define RPG_CLIENT_MONOTABCONTROL__REFRESHSCROLLBORDERTIPS_OFFSET UNITYSDK_OFFSET(0xA9FDBE0)
#define RPG_CLIENT_MONOTABCONTROL__SAFEGETLAYOUTPARAM_OFFSET UNITYSDK_OFFSET(0xA9FD850)
#define RPG_CLIENT_MONOTABCONTROL__UPDATEHORIZONTALLAYOUT_OFFSET UNITYSDK_OFFSET(0xA9FD2B0)
#define RPG_CLIENT_MONOTABCONTROL__UPDATEVERTICALLAYOUT_OFFSET UNITYSDK_OFFSET(0xA9FD010)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTabControl_TypeDefinitionIndex = 66900;

	class MonoTabControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::ScrollRect* m_ScrollRect; // 0x18
		::System::UInt32 _CurrentSelectItem_k__BackingField; // 0x20
		::UnityEngine::RectTransform_Axis _Axis; // 0x24
		::System::Collections::Generic::List_1<::RPG::Client::MonoTabControl_LayoutParam*>* _LayoutParams; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _TabButtonPrefabs; // 0x30
		::RPG::Client::AnimatorButtonCheckMode animatorBtnConfigMode; // 0x38
		::UnityEngine::RectTransform* _rtRef; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::MonoTabControl_LayoutItem*>* _LayoutItem; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _TabButtonList; // 0x50
		::UnityEngine::Vector2 _VERTICAL_PIVOT; // 0x58
		::UnityEngine::Vector2 _HORIZONTAL_PIVOT; // 0x60
		::UnityEngine::Vector2 _VERTICAL_MIN; // 0x68
		::UnityEngine::Vector2 _HORIZONTAL_MIN; // 0x70
		::UnityEngine::Vector2 _VERTICAL_MAX; // 0x78
		::UnityEngine::Vector2 _HORIZONTAL_MAX; // 0x80
		::UnityEngine::UI::ScrollRect* _BorderScrollRect; // 0x88
		::UnityEngine::Transform* _TopOrLeftTransform; // 0x90
		::UnityEngine::Transform* _BottomOrRightTransform; // 0x98
		::Il2CppArray<::UnityEngine::Vector3>* tempPoints; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void AddLayoutButton(::UnityEngine::Transform* button, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_ADDLAYOUTBUTTON_OFFSET))(this, button, layerIndex);
		}

		::System::Void ClearLayoutButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_CLEARLAYOUTBUTTON_OFFSET))(this);
		}

		::System::Void UpdateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_UPDATELAYOUT_OFFSET))(this);
		}

		::UnityEngine::Transform* CreateTabButton(::System::Int32 prefabIndex)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_CREATETABBUTTON_OFFSET))(this, prefabIndex);
		}

		::System::Void ClearTabButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_CLEARTABBUTTON_OFFSET))(this);
		}

		::System::Void _AddHorizontal(::UnityEngine::Transform* item, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL__ADDHORIZONTAL_OFFSET))(this, item, layer);
		}

		::System::Void _AddVertical(::UnityEngine::Transform* item, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL__ADDVERTICAL_OFFSET))(this, item, layer);
		}

		::System::Void _UpdateHorizontalLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL__UPDATEHORIZONTALLAYOUT_OFFSET))(this);
		}

		::System::Void _UpdateVerticalLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL__UPDATEVERTICALLAYOUT_OFFSET))(this);
		}

		::RPG::Client::MonoTabControl_LayoutParam* _SafeGetLayoutParam(::System::Int32 index)
		{
			return ((::RPG::Client::MonoTabControl_LayoutParam*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL__SAFEGETLAYOUTPARAM_OFFSET))(this, index);
		}

		::UnityEngine::UI::ScrollRect* get_mScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_GET_MSCROLLRECT_OFFSET))(this);
		}

		::System::Void set_mScrollRect(::UnityEngine::UI::ScrollRect* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_SET_MSCROLLRECT_OFFSET))(this, value);
		}

		::System::Void SetScrollRect(::UnityEngine::UI::ScrollRect* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_SETSCROLLRECT_OFFSET))(this, rect);
		}

		::System::Void OnItemIndexSelect(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_ONITEMINDEXSELECT_OFFSET))(this, index);
		}

		::System::Void ScrollToIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_SCROLLTOINDEX_OFFSET))(this, index);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_DESPAWNED_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _RefreshScrollBorderTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL__REFRESHSCROLLBORDERTIPS_OFFSET))(this);
		}

		::System::UInt32 get_CurrentSelectItem()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_GET_CURRENTSELECTITEM_OFFSET))(this);
		}

		::System::Void set_CurrentSelectItem(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_SET_CURRENTSELECTITEM_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get__RectTransformRef()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_GET__RECTTRANSFORMREF_OFFSET))(this);
		}

		::RPG::Client::AnimatorButtonCheckMode get_AnimatorBtnMode()
		{
			return ((::RPG::Client::AnimatorButtonCheckMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_GET_ANIMATORBTNMODE_OFFSET))(this);
		}

		::System::Boolean IsAnimatorCheckMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_ISANIMATORCHECKMODE_OFFSET))(this);
		}

		::System::Boolean IsAnimatorCheckModeEnableClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_ISANIMATORCHECKMODEENABLECLICK_OFFSET))(this);
		}
	};
}
