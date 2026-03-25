#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigation.h"
#include "unitysdk/RPG/UINavigation/UINavigationArea_StartCorner.h"
#include "unitysdk/RPG/UINavigation/UINavigationDirection.h"
#include "unitysdk/Struct_2_342392452B5681AE.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A8F358278D5B9235;
namespace RPG::UINavigation { class UINavigationAreaConfig; }
namespace RPG::UINavigation { class UINavigationArea_FirstSelectableDelegate; }
namespace RPG::UINavigation { class UINavigationBoundaryConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_UINAVIGATION_UINAVIGATIONAREA_CALCULATENAVIGATIONSCORE_OFFSET UNITYSDK_OFFSET(0xAB09270)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETBOUNDINGRECT_OFFSET UNITYSDK_OFFSET(0xAB07730)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xAB06D70)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONRECTEDGE_OFFSET UNITYSDK_OFFSET(0xAB08040)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONTRANSFORMEDGE_OFFSET UNITYSDK_OFFSET(0xAB08D60)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETPOINTONRECTEDGE_OFFSET UNITYSDK_OFFSET(0xAB093F0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETSTARTCORNERDIR_OFFSET UNITYSDK_OFFSET(0xAB074F0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGAREA_OFFSET UNITYSDK_OFFSET(0xAB06530)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGDOWN_OFFSET UNITYSDK_OFFSET(0xAB06500)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGLEFT_OFFSET UNITYSDK_OFFSET(0xAB064D0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGNEXT_OFFSET UNITYSDK_OFFSET(0xAB06510)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGPREVIOUS_OFFSET UNITYSDK_OFFSET(0xAB06520)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGRIGHT_OFFSET UNITYSDK_OFFSET(0xAB064E0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGUP_OFFSET UNITYSDK_OFFSET(0xAB064F0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_ONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0xAB06C80)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0xAB06830)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_RESET_OFFSET UNITYSDK_OFFSET(0xAB06540)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SELECTFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xAB06CF0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SETCUSTOMFIRSTSELECTABLEDELEGATE_OFFSET UNITYSDK_OFFSET(0xAB074A0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB094E0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__DIRECTIONTOVECTOR3_OFFSET UNITYSDK_OFFSET(0xAB08C50)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDCLOSESTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xAB08280)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEAUTOMATIC_OFFSET UNITYSDK_OFFSET(0xAB087C0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLECLOSESTTOCORNER_OFFSET UNITYSDK_OFFSET(0xAB071C0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEUNITYNATIVE_OFFSET UNITYSDK_OFFSET(0xAB08B50)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLE_OFFSET UNITYSDK_OFFSET(0xAB06910)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDWRAPAROUNDSELECTABLE_OFFSET UNITYSDK_OFFSET(0xAB07D60)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETCHILDRENBOUNDINGRECT_OFFSET UNITYSDK_OFFSET(0xAB077A0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETCONFIG_OFFSET UNITYSDK_OFFSET(0xAB07C50)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETCORNERDIR_OFFSET UNITYSDK_OFFSET(0xAB07640)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETRECIPIENTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xAB07CF0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETWRAPAROUNDSTARTGLOBALPOS_OFFSET UNITYSDK_OFFSET(0xAB09030)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__NAVIGATEBOUNDARY_OFFSET UNITYSDK_OFFSET(0xAB069A0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xAB096F0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_ONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0xAB096A0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0xAB09600)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationArea_TypeDefinitionIndex = 41822;

	class UINavigationArea : public ::RPG::UINavigation::UINavigation
	{
	public:
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigLeft; // 0x58
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigRight; // 0x60
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigUp; // 0x68
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigDown; // 0x70
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigNext; // 0x78
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigPrevious; // 0x80
		::RPG::UINavigation::UINavigationAreaConfig* _ConfigArea; // 0x88
		::RPG::UINavigation::UINavigationArea_FirstSelectableDelegate* _CustomFirstSelectableDelegate; // 0x90
		::RPG::UINavigation::UINavigation* _SavedNavigation; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__CTOR_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigLeft()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGLEFT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigRight()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGRIGHT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigUp()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGUP_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigDown()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGDOWN_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigNext()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGNEXT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigPrevious()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGPREVIOUS_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationAreaConfig* get_ConfigArea()
		{
			return ((::RPG::UINavigation::UINavigationAreaConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGAREA_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_RESET_OFFSET))(this);
		}

		::Struct_2_342392452B5681AE OnNavigation(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ONNAVIGATION_OFFSET))(this, naviEvent);
		}

		::System::Void OnChildSelected(::RPG::UINavigation::UINavigation* child)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ONCHILDSELECTED_OFFSET))(this, child);
		}

		::System::Void SelectFirstSelectable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SELECTFIRSTSELECTABLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetFirstSelectable()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETFIRSTSELECTABLE_OFFSET))(this);
		}

		::System::Void SetCustomFirstSelectableDelegate(::RPG::UINavigation::UINavigationArea_FirstSelectableDelegate* firstSelectableDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationArea_FirstSelectableDelegate*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SETCUSTOMFIRSTSELECTABLEDELEGATE_OFFSET))(this, firstSelectableDelegate);
		}

		::UnityEngine::Vector3 GetStartCornerDir()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETSTARTCORNERDIR_OFFSET))(this);
		}

		::UnityEngine::Rect GetBoundingRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETBOUNDINGRECT_OFFSET))(this);
		}

		::Struct_2_342392452B5681AE _NavigateBoundary(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__NAVIGATEBOUNDARY_OFFSET))(this, naviEvent);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* _GetConfig(::RPG::UINavigation::UINavigationDirection direction)
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID, ::RPG::UINavigation::UINavigationDirection))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETCONFIG_OFFSET))(this, direction);
		}

		::UnityEngine::GameObject* _FindSelectableClosestToCorner()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLECLOSESTTOCORNER_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetCornerDir(::RPG::UINavigation::UINavigationArea_StartCorner startCorner)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::UINavigation::UINavigationArea_StartCorner))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETCORNERDIR_OFFSET))(this, startCorner);
		}

		::UnityEngine::GameObject* _FindSelectable(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLE_OFFSET))(this, naviEvent);
		}

		::UnityEngine::Vector3 _DirectionToVector3(::RPG::UINavigation::UINavigationDirection direction)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::UINavigation::UINavigationDirection))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__DIRECTIONTOVECTOR3_OFFSET))(this, direction);
		}

		::UnityEngine::GameObject* _FindSelectableAutomatic(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEAUTOMATIC_OFFSET))(this, naviEvent);
		}

		::UnityEngine::GameObject* _FindSelectableUnityNative(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEUNITYNATIVE_OFFSET))(this, naviEvent);
		}

		::UnityEngine::GameObject* _GetRecipientSelectable(::RPG::UINavigation::UINavigation* recipient)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETRECIPIENTSELECTABLE_OFFSET))(this, recipient);
		}

		::UnityEngine::GameObject* _FindWrapAroundSelectable(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDWRAPAROUNDSELECTABLE_OFFSET))(this, naviEvent);
		}

		::UnityEngine::Vector3 _GetWrapAroundStartGlobalPos(::UnityEngine::Transform* trans, ::UnityEngine::Vector3 dir)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETWRAPAROUNDSTARTGLOBALPOS_OFFSET))(this, trans, dir);
		}

		::UnityEngine::Rect _GetChildrenBoundingRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETCHILDRENBOUNDINGRECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* _FindClosestSelectable(::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>* children, ::UnityEngine::Vector3 startGlobalPos, ::UnityEngine::Vector3 dir)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDCLOSESTSELECTABLE_OFFSET))(this, children, startGlobalPos, dir);
		}

		static ::UnityEngine::Vector3 GetGlobalPosOnTransformEdge(::UnityEngine::Transform* trans, ::UnityEngine::Vector3 dir)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONTRANSFORMEDGE_OFFSET))(trans, dir);
		}

		static ::UnityEngine::Vector3 GetGlobalPosOnRectEdge(::UnityEngine::Transform* trans, ::UnityEngine::Vector3 dir, ::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONRECTEDGE_OFFSET))(trans, dir, rect);
		}

		static ::UnityEngine::Vector3 GetPointOnRectEdge(::UnityEngine::Rect rect, ::UnityEngine::Vector2 dir)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETPOINTONRECTEDGE_OFFSET))(rect, dir);
		}

		static ::System::Single CalculateNavigationScore(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Vector3 dir, ::System::Single directivity)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_CALCULATENAVIGATIONSCORE_OFFSET))(start, end, dir, directivity);
		}

		::Struct_2_342392452B5681AE __iFixBaseProxy_OnNavigation(::Class_1_A8F358278D5B9235* P0)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_ONNAVIGATION_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnChildSelected(::RPG::UINavigation::UINavigation* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_ONCHILDSELECTED_OFFSET))(this, P0);
		}

		::UnityEngine::GameObject* __iFixBaseProxy_GetFirstSelectable()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_GETFIRSTSELECTABLE_OFFSET))(this);
		}
	};
}
