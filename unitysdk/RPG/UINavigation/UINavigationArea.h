#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigation.h"
#include "unitysdk/RPG/UINavigation/UINavigationArea_StartCorner.h"
#include "unitysdk/RPG/UINavigation/UINavigationDirection.h"
#include "unitysdk/RPG/UINavigation/UINavigation_Rule.h"
#include "unitysdk/Struct_2_342392452B5681AE.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_27E062DB46F0D058;
namespace RPG::UINavigation { class UINavigationAreaConfig; }
namespace RPG::UINavigation { class UINavigationArea_FirstSelectableDelegate; }
namespace RPG::UINavigation { class UINavigationBoundaryConfig; }
namespace RPG::UINavigation { class UINavigationExtension; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_UINAVIGATION_UINAVIGATIONAREA_ADDFOCUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19D53070)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_ADD__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x19D51820)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_CALCULATENAVIGATIONSCORE_1_OFFSET UNITYSDK_OFFSET(0x19D55430)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_CALCULATENAVIGATIONSCORE_OFFSET UNITYSDK_OFFSET(0x19D55040)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETBOUNDINGRECT_OFFSET UNITYSDK_OFFSET(0x19D53760)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETDEFAULTFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D52730)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D52570)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONRECTEDGE_OFFSET UNITYSDK_OFFSET(0x19D54380)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONTRANSFORMEDGE_OFFSET UNITYSDK_OFFSET(0x19D54AA0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETPOINTONRECTEDGE_OFFSET UNITYSDK_OFFSET(0x19D55340)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETSTARTCORNERDIR_OFFSET UNITYSDK_OFFSET(0x19D53520)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGAREA_OFFSET UNITYSDK_OFFSET(0x19D517D0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGDOWN_OFFSET UNITYSDK_OFFSET(0x19D51710)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGLEFT_OFFSET UNITYSDK_OFFSET(0x19D51650)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGNEXT_OFFSET UNITYSDK_OFFSET(0x19D51750)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGPREVIOUS_OFFSET UNITYSDK_OFFSET(0x19D51790)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGRIGHT_OFFSET UNITYSDK_OFFSET(0x19D51690)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGUP_OFFSET UNITYSDK_OFFSET(0x19D516D0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_ONCHILDDESELECTED_OFFSET UNITYSDK_OFFSET(0x19D522E0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_ONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0x19D52090)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0x19D51BE0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_REMOVEFOCUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19D53100)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_REMOVE__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x19D51890)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_RESET_OFFSET UNITYSDK_OFFSET(0x19D51900)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SELECTFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D52490)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SETALLBOUNDARYESCAPE_OFFSET UNITYSDK_OFFSET(0x19D532E0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SETALLBOUNDARYSTOP_OFFSET UNITYSDK_OFFSET(0x19D531E0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SETCUSTOMFIRSTSELECTABLEDELEGATE_OFFSET UNITYSDK_OFFSET(0x19D53020)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SETEXPLICITNAVIGATION_OFFSET UNITYSDK_OFFSET(0x19D53330)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SETEXTENSION_OFFSET UNITYSDK_OFFSET(0x19D53190)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D55590)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__DIRECTIONTOVECTOR_OFFSET UNITYSDK_OFFSET(0x19D52D80)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDCLOSESTSELECTABLE_1_OFFSET UNITYSDK_OFFSET(0x19D544A0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDCLOSESTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D52E90)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEAUTOMATIC_OFFSET UNITYSDK_OFFSET(0x19D53EF0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLECLOSESTTOCORNER_OFFSET UNITYSDK_OFFSET(0x19D52950)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLECLOSESTTOSOURCE_OFFSET UNITYSDK_OFFSET(0x19D52BC0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEUNITYNATIVE_OFFSET UNITYSDK_OFFSET(0x19D54160)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D51CF0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDWRAPAROUNDSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D53CD0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETCHILDRENBOUNDINGRECT_OFFSET UNITYSDK_OFFSET(0x19D537D0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETCONFIG_OFFSET UNITYSDK_OFFSET(0x19D533A0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETCORNERDIR_OFFSET UNITYSDK_OFFSET(0x19D53670)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETCUSTOMFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D526D0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETNAVIGATIONCAMERA_OFFSET UNITYSDK_OFFSET(0x19D54F60)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETRECIPIENTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D53BF0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETSAVEDFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D527E0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETWRAPAROUNDSTARTGLOBALPOS_OFFSET UNITYSDK_OFFSET(0x19D54860)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONCHILDDESELECTED_OFFSET UNITYSDK_OFFSET(0x19D52390)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0x19D521E0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONNAVIGATION_OFFSET UNITYSDK_OFFSET(0x19D51F80)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__ISCHILDNAVIGABLE_OFFSET UNITYSDK_OFFSET(0x19D54BC0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__MAPWORLDPOINTTOAREAPLANEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x19D54CB0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__NAVIGATEBOUNDARY_OFFSET UNITYSDK_OFFSET(0x19D51D80)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__SETALLBOUNDARYRULES_OFFSET UNITYSDK_OFFSET(0x19D53230)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__SETFOCUSED_OFFSET UNITYSDK_OFFSET(0x19D52160)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationArea_TypeDefinitionIndex = 49405;

	class UINavigationArea : public ::RPG::UINavigation::UINavigation
	{
	public:
		// static const ::System::Single _THE_BEST_SCORE; // 0x0
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigLeft; // 0x50
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigRight; // 0x58
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigUp; // 0x60
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigDown; // 0x68
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigNext; // 0x70
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigPrevious; // 0x78
		::RPG::UINavigation::UINavigationAreaConfig* _ConfigArea; // 0x80
		::RPG::UINavigation::UINavigationArea_FirstSelectableDelegate* _CustomFirstSelectableDelegate; // 0x88
		::RPG::UINavigation::UINavigation* _SavedNavigation; // 0x90
		::RPG::UINavigation::UINavigationExtension* _Extension; // 0x98
		::System::Action_1<::System::Boolean>* _OnFocusChanged; // 0xA0
		::System::Boolean _IsFocused; // 0xA8

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

		::System::Void add__OnFocusChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ADD__ONFOCUSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove__OnFocusChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_REMOVE__ONFOCUSCHANGED_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_RESET_OFFSET))(this);
		}

		::Struct_2_342392452B5681AE OnNavigation(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ONNAVIGATION_OFFSET))(this, a1);
		}

		::System::Void OnChildSelected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ONCHILDSELECTED_OFFSET))(this, a1);
		}

		::System::Void OnChildDeselected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ONCHILDDESELECTED_OFFSET))(this, a1);
		}

		::System::Void _SetFocused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__SETFOCUSED_OFFSET))(this, a1);
		}

		::System::Void SelectFirstSelectable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SELECTFIRSTSELECTABLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetFirstSelectable(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETFIRSTSELECTABLE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetDefaultFirstSelectable(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETDEFAULTFIRSTSELECTABLE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* _FindSelectableClosestToSource(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLECLOSESTTOSOURCE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* _GetCustomFirstSelectable()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETCUSTOMFIRSTSELECTABLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* _GetSavedFirstSelectable(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETSAVEDFIRSTSELECTABLE_OFFSET))(this, a1);
		}

		::System::Void SetCustomFirstSelectableDelegate(::RPG::UINavigation::UINavigationArea_FirstSelectableDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationArea_FirstSelectableDelegate*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SETCUSTOMFIRSTSELECTABLEDELEGATE_OFFSET))(this, a1);
		}

		::System::Void AddFocusChangedCallback(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ADDFOCUSCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveFocusChangedCallback(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_REMOVEFOCUSCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetExtension(::RPG::UINavigation::UINavigationExtension* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationExtension*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SETEXTENSION_OFFSET))(this, a1);
		}

		::System::Void SetAllBoundaryStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SETALLBOUNDARYSTOP_OFFSET))(this);
		}

		::System::Void SetAllBoundaryEscape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SETALLBOUNDARYESCAPE_OFFSET))(this);
		}

		::System::Void SetExplicitNavigation(::RPG::UINavigation::UINavigationDirection a1, ::RPG::UINavigation::UINavigation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationDirection, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SETEXPLICITNAVIGATION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetStartCornerDir()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETSTARTCORNERDIR_OFFSET))(this);
		}

		::UnityEngine::Rect GetBoundingRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETBOUNDINGRECT_OFFSET))(this);
		}

		::Struct_2_342392452B5681AE _NavigateBoundary(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__NAVIGATEBOUNDARY_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* _FindSelectable(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLE_OFFSET))(this, a1);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* _GetConfig(::RPG::UINavigation::UINavigationDirection a1)
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID, ::RPG::UINavigation::UINavigationDirection))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETCONFIG_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* _FindSelectableClosestToCorner(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLECLOSESTTOCORNER_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _GetCornerDir(::RPG::UINavigation::UINavigationArea_StartCorner a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::UINavigation::UINavigationArea_StartCorner))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETCORNERDIR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _DirectionToVector(::RPG::UINavigation::UINavigationDirection a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::UINavigation::UINavigationDirection))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__DIRECTIONTOVECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* _FindSelectableAutomatic(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEAUTOMATIC_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* _FindSelectableUnityNative(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEUNITYNATIVE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* _GetRecipientSelectable(::RPG::UINavigation::UINavigation* a1, ::Class_1_27E062DB46F0D058* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETRECIPIENTSELECTABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* _FindWrapAroundSelectable(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDWRAPAROUNDSELECTABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _GetWrapAroundStartGlobalPos(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETWRAPAROUNDSTARTGLOBALPOS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rect _GetChildrenBoundingRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETCHILDRENBOUNDINGRECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* _FindClosestSelectable(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::Class_1_27E062DB46F0D058* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDCLOSESTSELECTABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 _MapWorldPointToAreaPlaneIfNeeded(::UnityEngine::Vector3 a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__MAPWORLDPOINTTOAREAPLANEIFNEEDED_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Camera* _GetNavigationCamera(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Camera*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETNAVIGATIONCAMERA_OFFSET))(a1);
		}

		::UnityEngine::GameObject* _FindClosestSelectable_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_1_27E062DB46F0D058* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDCLOSESTSELECTABLE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsChildNavigable(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__ISCHILDNAVIGABLE_OFFSET))(this, a1);
		}

		::System::Void _SetAllBoundaryRules(::RPG::UINavigation::UINavigation_Rule a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation_Rule))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__SETALLBOUNDARYRULES_OFFSET))(this, a1);
		}

		::System::Void _InvokeExtensionPostOnNavigation(::Class_1_27E062DB46F0D058* a1, ::Struct_2_342392452B5681AE& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_27E062DB46F0D058*, ::Struct_2_342392452B5681AE&))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONNAVIGATION_OFFSET))(this, a1, a2);
		}

		::System::Void _InvokeExtensionPostOnChildSelected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONCHILDSELECTED_OFFSET))(this, a1);
		}

		::System::Void _InvokeExtensionPostOnChildDeselected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONCHILDDESELECTED_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 GetGlobalPosOnTransformEdge(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONTRANSFORMEDGE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetGlobalPosOnRectEdge(::UnityEngine::Transform* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Rect, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONRECTEDGE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 GetPointOnRectEdge(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETPOINTONRECTEDGE_OFFSET))(a1, a2);
		}

		static ::System::Single CalculateNavigationScore(::UnityEngine::Vector3 a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_CALCULATENAVIGATIONSCORE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single CalculateNavigationScore_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_CALCULATENAVIGATIONSCORE_1_OFFSET))(a1, a2, a3, a4);
		}
	};
}
