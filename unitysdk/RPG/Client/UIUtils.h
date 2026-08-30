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

#define RPG_CLIENT_UIUTILS_CENTERTARGETINSCROLLRECT_OFFSET UNITYSDK_OFFSET(0xE3C7DD0)
#define RPG_CLIENT_UIUTILS_CHANGECANVASSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xE3C60C0)
#define RPG_CLIENT_UIUTILS_CLAMPSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xE3C8750)
#define RPG_CLIENT_UIUTILS_CREATEBLOCKER_OFFSET UNITYSDK_OFFSET(0xE3C89A0)
#define RPG_CLIENT_UIUTILS_DETERMINELEFTSTICKMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xE3C8250)
#define RPG_CLIENT_UIUTILS_DETERMINEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xE3C8180)
#define RPG_CLIENT_UIUTILS_GETANGLEBYPOS_OFFSET UNITYSDK_OFFSET(0xE3C59E0)
#define RPG_CLIENT_UIUTILS_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0xE3C7FB0)
#define RPG_CLIENT_UIUTILS_GETGAMEPADTIPICONBYTYPE_OFFSET UNITYSDK_OFFSET(0xE3C5170)
#define RPG_CLIENT_UIUTILS_GETITEMCORNERWORLDPOSARRAY_OFFSET UNITYSDK_OFFSET(0xE3C8560)
#define RPG_CLIENT_UIUTILS_GETKEYBOARDTIPTEXTIDBYKEYINT_OFFSET UNITYSDK_OFFSET(0xE3C52B0)
#define RPG_CLIENT_UIUTILS_GETKEYBOARDTIPTEXTIDBYKEY_OFFSET UNITYSDK_OFFSET(0xE3C53D0)
#define RPG_CLIENT_UIUTILS_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xE3C7D50)
#define RPG_CLIENT_UIUTILS_GETRECTTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0xE3C5E10)
#define RPG_CLIENT_UIUTILS_GETSUBSTRINGBYCHARCOUNT_OFFSET UNITYSDK_OFFSET(0xE3C8000)
#define RPG_CLIENT_UIUTILS_GETTOUCHPOSITION_OFFSET UNITYSDK_OFFSET(0xE3C7CA0)
#define RPG_CLIENT_UIUTILS_GETWHEELITEMINDEXBYEIGHTWHEEL_OFFSET UNITYSDK_OFFSET(0xE3C5AF0)
#define RPG_CLIENT_UIUTILS_GETWHEELITEMINDEXBYFOURWHEEL_OFFSET UNITYSDK_OFFSET(0xE3C5CC0)
#define RPG_CLIENT_UIUTILS_GET_CANCELBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xE3C50E0)
#define RPG_CLIENT_UIUTILS_GET_ISACCESSGAMEPAD_OFFSET UNITYSDK_OFFSET(0xE3C4420)
#define RPG_CLIENT_UIUTILS_GET_ISADVENTUREPHASE_OFFSET UNITYSDK_OFFSET(0xE3C4AF0)
#define RPG_CLIENT_UIUTILS_GET_ISANDROIDUSEVULKAN_OFFSET UNITYSDK_OFFSET(0xE3C4F90)
#define RPG_CLIENT_UIUTILS_GET_ISBATTLEGAMEPHASE_OFFSET UNITYSDK_OFFSET(0xE3C4C00)
#define RPG_CLIENT_UIUTILS_GET_ISGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0xE3C42E0)
#define RPG_CLIENT_UIUTILS_GET_ISGAMEPADMODE_OFFSET UNITYSDK_OFFSET(0xE3C3E50)
#define RPG_CLIENT_UIUTILS_GET_ISINFIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0xE3C4D10)
#define RPG_CLIENT_UIUTILS_GET_ISINFOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0xE3C4E60)
#define RPG_CLIENT_UIUTILS_GET_ISLOCKINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0xE3C49E0)
#define RPG_CLIENT_UIUTILS_GET_ISMOBILEGAMEPADMODEBYSETTING_OFFSET UNITYSDK_OFFSET(0xE3C80C0)
#define RPG_CLIENT_UIUTILS_GET_ISMOBILEGAMEPADMODE_OFFSET UNITYSDK_OFFSET(0xE3C41D0)
#define RPG_CLIENT_UIUTILS_GET_ISMOBILEUI_OFFSET UNITYSDK_OFFSET(0xE3C4280)
#define RPG_CLIENT_UIUTILS_GET_ISPCMODE_OFFSET UNITYSDK_OFFSET(0xE3C3FB0)
#define RPG_CLIENT_UIUTILS_GET_ISSHOWCURSOR_OFFSET UNITYSDK_OFFSET(0xE3C4930)
#define RPG_CLIENT_UIUTILS_GET_ISSHOWFIVEDIMSETTINGKEY_OFFSET UNITYSDK_OFFSET(0xE3C4DD0)
#define RPG_CLIENT_UIUTILS_GET_SUBMITBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xE3C5050)
#define RPG_CLIENT_UIUTILS_GET_UISCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xE3C3DD0)
#define RPG_CLIENT_UIUTILS_ISMOUSEOVERUI_OFFSET UNITYSDK_OFFSET(0xE3C7AD0)
#define RPG_CLIENT_UIUTILS_RAYCASTALLBYMOUSEORTOUCH_OFFSET UNITYSDK_OFFSET(0xE3C72E0)
#define RPG_CLIENT_UIUTILS_RAYCASTALLBYPOINTPOS_OFFSET UNITYSDK_OFFSET(0xE3C6500)
#define RPG_CLIENT_UIUTILS_RAYCASTBYMOUSEORTOUCH_1_OFFSET UNITYSDK_OFFSET(0xE3C6FD0)
#define RPG_CLIENT_UIUTILS_RAYCASTBYMOUSEORTOUCH_OFFSET UNITYSDK_OFFSET(0xE3C6CC0)
#define RPG_CLIENT_UIUTILS_RAYCASTBYPOINTPOS_OFFSET UNITYSDK_OFFSET(0xE3C6220)
#define RPG_CLIENT_UIUTILS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xE3C8E10)
#define RPG_CLIENT_UIUTILS_REMOVEGAMEOBJECTCLONENAME_OFFSET UNITYSDK_OFFSET(0xE3C6030)
#define RPG_CLIENT_UIUTILS_SETEMISSIONENABLE_OFFSET UNITYSDK_OFFSET(0xE3C5EF0)
#define RPG_CLIENT_UIUTILS_SET_ISANDROIDUSEVULKAN_OFFSET UNITYSDK_OFFSET(0xE3C4FF0)
#define RPG_CLIENT_UIUTILS_SET_ISMOBILEGAMEPADMODEBYSETTING_OFFSET UNITYSDK_OFFSET(0xE3C8120)
#define RPG_CLIENT_UIUTILS_SHOWRETERRORUI_OFFSET UNITYSDK_OFFSET(0xE3C61B0)
#define RPG_CLIENT_UIUTILS_STOPVIBRATION_OFFSET UNITYSDK_OFFSET(0xE3C5830)
#define RPG_CLIENT_UIUTILS_VIBRATE_OFFSET UNITYSDK_OFFSET(0xE3C5670)
#define RPG_CLIENT_UIUTILS_WORLDTOUILOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xE3C85D0)
#define RPG_CLIENT_UIUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xE3C9140)

namespace RPG::Client
{
	inline static constexpr unsigned int UIUtils_TypeDefinitionIndex = 73094;

	class UIUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>** StaticGet_UIRaycastResultCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>**)Il2CppClass::FromTypeDefinitionIndex(UIUtils_TypeDefinitionIndex)->GetStaticField(0x64080);
		}
		static ::System::Boolean* StaticGet__IsMobileGamePadModeBySetting()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIUtils_TypeDefinitionIndex)->GetStaticField(0x14610);
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
