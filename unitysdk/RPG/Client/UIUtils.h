#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_UIUTILS_CENTERTARGETINSCROLLRECT_OFFSET UNITYSDK_OFFSET(0xCBA2730)
#define RPG_CLIENT_UIUTILS_CHANGECANVASSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xCBA0BD0)
#define RPG_CLIENT_UIUTILS_CLAMPSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xCBA3060)
#define RPG_CLIENT_UIUTILS_CREATEBLOCKER_OFFSET UNITYSDK_OFFSET(0xCBA32B0)
#define RPG_CLIENT_UIUTILS_DETERMINELEFTSTICKMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xCBA2B60)
#define RPG_CLIENT_UIUTILS_DETERMINEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xCBA2A90)
#define RPG_CLIENT_UIUTILS_GETANGLEBYPOS_OFFSET UNITYSDK_OFFSET(0xCBA04F0)
#define RPG_CLIENT_UIUTILS_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0xCBA2910)
#define RPG_CLIENT_UIUTILS_GETGAMEPADTIPICONBYTYPE_OFFSET UNITYSDK_OFFSET(0xCB9FDC0)
#define RPG_CLIENT_UIUTILS_GETITEMCORNERWORLDPOSARRAY_OFFSET UNITYSDK_OFFSET(0xCBA2E70)
#define RPG_CLIENT_UIUTILS_GETKEYBOARDTIPTEXTIDBYKEYINT_OFFSET UNITYSDK_OFFSET(0xCB9FF00)
#define RPG_CLIENT_UIUTILS_GETKEYBOARDTIPTEXTIDBYKEY_OFFSET UNITYSDK_OFFSET(0xCB9FFC0)
#define RPG_CLIENT_UIUTILS_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xCBA26B0)
#define RPG_CLIENT_UIUTILS_GETRECTTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0xCBA0920)
#define RPG_CLIENT_UIUTILS_GETSUBSTRINGBYCHARCOUNT_OFFSET UNITYSDK_OFFSET(0xCBA2960)
#define RPG_CLIENT_UIUTILS_GETTOUCHPOSITION_OFFSET UNITYSDK_OFFSET(0xCBA2600)
#define RPG_CLIENT_UIUTILS_GETWHEELITEMINDEXBYEIGHTWHEEL_OFFSET UNITYSDK_OFFSET(0xCBA0600)
#define RPG_CLIENT_UIUTILS_GETWHEELITEMINDEXBYFOURWHEEL_OFFSET UNITYSDK_OFFSET(0xCBA07D0)
#define RPG_CLIENT_UIUTILS_GET_CANCELBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xCB9FD30)
#define RPG_CLIENT_UIUTILS_GET_ISACCESSGAMEPAD_OFFSET UNITYSDK_OFFSET(0xCB9F200)
#define RPG_CLIENT_UIUTILS_GET_ISADVENTUREPHASE_OFFSET UNITYSDK_OFFSET(0xCB9F7A0)
#define RPG_CLIENT_UIUTILS_GET_ISANDROIDUSEVULKAN_OFFSET UNITYSDK_OFFSET(0xCB9FC10)
#define RPG_CLIENT_UIUTILS_GET_ISBATTLEGAMEPHASE_OFFSET UNITYSDK_OFFSET(0xCB9F8B0)
#define RPG_CLIENT_UIUTILS_GET_ISGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0xCB62DF0)
#define RPG_CLIENT_UIUTILS_GET_ISGAMEPADMODE_OFFSET UNITYSDK_OFFSET(0xCB9EFC0)
#define RPG_CLIENT_UIUTILS_GET_ISINFIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0xCB9F9C0)
#define RPG_CLIENT_UIUTILS_GET_ISINFOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0xCB9FAE0)
#define RPG_CLIENT_UIUTILS_GET_ISLOCKINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCB9F690)
#define RPG_CLIENT_UIUTILS_GET_ISMOBILEGAMEPADMODEBYSETTING_OFFSET UNITYSDK_OFFSET(0xCBA2A20)
#define RPG_CLIENT_UIUTILS_GET_ISMOBILEGAMEPADMODE_OFFSET UNITYSDK_OFFSET(0xCB9F120)
#define RPG_CLIENT_UIUTILS_GET_ISMOBILEUI_OFFSET UNITYSDK_OFFSET(0xCB9F1D0)
#define RPG_CLIENT_UIUTILS_GET_ISPCMODE_OFFSET UNITYSDK_OFFSET(0xCB62190)
#define RPG_CLIENT_UIUTILS_GET_ISSHOWCURSOR_OFFSET UNITYSDK_OFFSET(0xCB9F5E0)
#define RPG_CLIENT_UIUTILS_GET_ISSHOWFIVEDIMSETTINGKEY_OFFSET UNITYSDK_OFFSET(0xCB9FA50)
#define RPG_CLIENT_UIUTILS_GET_SUBMITBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xCB9FCA0)
#define RPG_CLIENT_UIUTILS_GET_UISCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xCB9EF40)
#define RPG_CLIENT_UIUTILS_ISMOUSEOVERUI_OFFSET UNITYSDK_OFFSET(0xCBA2430)
#define RPG_CLIENT_UIUTILS_RAYCASTALLBYMOUSEORTOUCH_OFFSET UNITYSDK_OFFSET(0xCBA1D20)
#define RPG_CLIENT_UIUTILS_RAYCASTALLBYPOINTPOS_OFFSET UNITYSDK_OFFSET(0xCBA1010)
#define RPG_CLIENT_UIUTILS_RAYCASTBYMOUSEORTOUCH_1_OFFSET UNITYSDK_OFFSET(0xCBA1A10)
#define RPG_CLIENT_UIUTILS_RAYCASTBYMOUSEORTOUCH_OFFSET UNITYSDK_OFFSET(0xCBA1700)
#define RPG_CLIENT_UIUTILS_RAYCASTBYPOINTPOS_OFFSET UNITYSDK_OFFSET(0xCBA0D30)
#define RPG_CLIENT_UIUTILS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xCBA36C0)
#define RPG_CLIENT_UIUTILS_REMOVEGAMEOBJECTCLONENAME_OFFSET UNITYSDK_OFFSET(0xCBA0B40)
#define RPG_CLIENT_UIUTILS_SETEMISSIONENABLE_OFFSET UNITYSDK_OFFSET(0xCBA0A00)
#define RPG_CLIENT_UIUTILS_SET_ISANDROIDUSEVULKAN_OFFSET UNITYSDK_OFFSET(0xCB9FC40)
#define RPG_CLIENT_UIUTILS_SET_ISMOBILEGAMEPADMODEBYSETTING_OFFSET UNITYSDK_OFFSET(0xCBA2A60)
#define RPG_CLIENT_UIUTILS_SHOWRETERRORUI_OFFSET UNITYSDK_OFFSET(0xCBA0CC0)
#define RPG_CLIENT_UIUTILS_STOPVIBRATION_OFFSET UNITYSDK_OFFSET(0xCBA03B0)
#define RPG_CLIENT_UIUTILS_VIBRATE_OFFSET UNITYSDK_OFFSET(0xCBA0260)
#define RPG_CLIENT_UIUTILS_WORLDTOUILOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xCBA2EE0)
#define RPG_CLIENT_UIUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBA39F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIUtils_TypeDefinitionIndex = 68347;

	class UIUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>** StaticGet_UIRaycastResultCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>**)Il2CppClass::FromTypeDefinitionIndex(UIUtils_TypeDefinitionIndex)->GetStaticField(0x442E0);
		}
		static ::System::Boolean* StaticGet__IsMobileGamePadModeBySetting()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIUtils_TypeDefinitionIndex)->GetStaticField(0xC250);
		}
		// static const ::System::Int32 _NON_ALLOC_HIT_BUFFER_SIZE = 0xA; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS__CCTOR_OFFSET))();
		}

		static ::System::Single get_UIScaleFactor()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_UISCALEFACTOR_OFFSET))();
		}

		static ::System::Boolean get_IsGamePadMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISGAMEPADMODE_OFFSET))();
		}

		static ::System::Boolean get_IsMobileUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISMOBILEUI_OFFSET))();
		}

		static ::System::Boolean get_IsPCMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISPCMODE_OFFSET))();
		}

		static ::System::Boolean get_IsMobileGamePadMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISMOBILEGAMEPADMODE_OFFSET))();
		}

		static ::System::Boolean get_IsGamePadInput()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISGAMEPADINPUT_OFFSET))();
		}

		static ::System::Boolean get_IsAccessGamePad()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISACCESSGAMEPAD_OFFSET))();
		}

		static ::System::Boolean get_IsShowCursor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISSHOWCURSOR_OFFSET))();
		}

		static ::System::Boolean get_IsLockInputController()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISLOCKINPUTCONTROLLER_OFFSET))();
		}

		static ::System::Boolean get_IsAdventurePhase()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISADVENTUREPHASE_OFFSET))();
		}

		static ::System::Boolean get_IsBattleGamePhase()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISBATTLEGAMEPHASE_OFFSET))();
		}

		static ::System::Boolean get_IsInFiveDimGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISINFIVEDIMGAME_OFFSET))();
		}

		static ::System::Boolean get_IsShowFiveDimSettingKey()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISSHOWFIVEDIMSETTINGKEY_OFFSET))();
		}

		static ::System::Boolean get_IsInFourRotateVoxelGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISINFOURROTATEVOXELGAME_OFFSET))();
		}

		static ::System::Boolean get_IsAndroidUseVulkan()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISANDROIDUSEVULKAN_OFFSET))();
		}

		static ::System::Void set_IsAndroidUseVulkan(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_SET_ISANDROIDUSEVULKAN_OFFSET))(a1);
		}

		static ::InControl::InputControlType get_SubmitButtonType()
		{
			return ((::InControl::InputControlType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_SUBMITBUTTONTYPE_OFFSET))();
		}

		static ::InControl::InputControlType get_CancelButtonType()
		{
			return ((::InControl::InputControlType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_CANCELBUTTONTYPE_OFFSET))();
		}

		static ::System::String* GetGamepadTipIconByType(::System::String* a1, ::InControl::InputDeviceStyle a2)
		{
			return ((::System::String*(*)(::System::String*, ::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETGAMEPADTIPICONBYTYPE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TextID GetKeyboardTipTextIDByKeyInt(::System::Int32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETKEYBOARDTIPTEXTIDBYKEYINT_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetKeyboardTipTextIDByKey(::System::String* a1)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETKEYBOARDTIPTEXTIDBYKEY_OFFSET))(a1);
		}

		static ::System::Void Vibrate(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_VIBRATE_OFFSET))(a1);
		}

		static ::System::Void StopVibration()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_STOPVIBRATION_OFFSET))();
		}

		static ::System::Single GetAngleByPos(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETANGLEBYPOS_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetWheelItemIndexByEightWheel(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETWHEELITEMINDEXBYEIGHTWHEEL_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetWheelItemIndexByFourWheel(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETWHEELITEMINDEXBYFOURWHEEL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetRectTransformPosition(::UnityEngine::RectTransform* a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETRECTTRANSFORMPOSITION_OFFSET))(a1);
		}

		static ::System::Void SetEmissionEnable(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_SETEMISSIONENABLE_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveGameObjectCloneName(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_REMOVEGAMEOBJECTCLONENAME_OFFSET))(a1);
		}

		static ::System::Void ChangeCanvasSortingOrder(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_CHANGECANVASSORTINGORDER_OFFSET))(a1, a2);
		}

		static ::System::Void ShowRetErrorUI(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_SHOWRETERRORUI_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* RaycastByPointPos(::System::String* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCASTBYPOINTPOS_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* RaycastAllByPointPos(::System::String* a1, ::UnityEngine::Vector2 a2, ::System::String* a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::System::String*, ::UnityEngine::Vector2, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCASTALLBYPOINTPOS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Transform* RaycastByMouseOrTouch(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCASTBYMOUSEORTOUCH_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 RaycastByMouseOrTouch_1()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCASTBYMOUSEORTOUCH_1_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* RaycastAllByMouseOrTouch(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCASTALLBYMOUSEORTOUCH_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMouseOverUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_ISMOUSEOVERUI_OFFSET))();
		}

		static ::System::Void GetTouchPosition(::System::Int32 a1, ::System::Boolean a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETTOUCHPOSITION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetMousePosition(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETMOUSEPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void CenterTargetInScrollRect(::UnityEngine::UI::ScrollRect* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ScrollRect*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_CENTERTARGETINSCROLLRECT_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetCharCount(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETCHARCOUNT_OFFSET))(a1);
		}

		static ::System::String* GetSubStringByCharCount(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETSUBSTRINGBYCHARCOUNT_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_IsMobileGamePadModeBySetting()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISMOBILEGAMEPADMODEBYSETTING_OFFSET))();
		}

		static ::System::Void set_IsMobileGamePadModeBySetting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_SET_ISMOBILEGAMEPADMODEBYSETTING_OFFSET))(a1);
		}

		static ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_DETERMINEMOVEDIRECTION_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::EventSystems::MoveDirection DetermineLeftStickMoveDirection(::System::Single a1)
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_DETERMINELEFTSTICKMOVEDIRECTION_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetItemCornerWorldPosArray(::UnityEngine::RectTransform* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETITEMCORNERWORLDPOSARRAY_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 WorldToUILocalPosition(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_WORLDTOUILOCALPOSITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 ClampScreenPoint(::UnityEngine::Vector2 a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_CLAMPSCREENPOINT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* CreateBlocker(::UnityEngine::Canvas* a1, ::UnityEngine::Events::UnityAction* a2, ::UnityEngine::Canvas* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Canvas*, ::UnityEngine::Events::UnityAction*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_CREATEBLOCKER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Raycast(::UnityEngine::RaycastHit& a1, ::System::Single a2, ::System::Int32 a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCAST_OFFSET))(a1, a2, a3, a4);
		}
	};
}
