#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D0F2373931CC685D_2.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_2179242C7F6B0780;
class Class_2_1A39E1B51756BF41;
class Class_2_79AE422BA06F6D26_118;
class Class_3_1FE4CD675C5ACADB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Config { class MonoDataFixNodeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_CLEARNULLCOLOR_OFFSET UNITYSDK_OFFSET(0x17F7C070)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F7AAE0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_CLICK_OFFSET UNITYSDK_OFFSET(0x17F7DA30)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_DESELECT_OFFSET UNITYSDK_OFFSET(0x17F7D8C0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_GET_NEEDUNLOCK_OFFSET UNITYSDK_OFFSET(0x17F7B290)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_GET_NODE_OFFSET UNITYSDK_OFFSET(0x17F7A870)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x17F7B0A0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x17F7DA80)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F7BED0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONNODERESET_OFFSET UNITYSDK_OFFSET(0x17F7D5A0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17F7C730)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F7C8B0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F7B330)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F7BFA0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x17F7F6C0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_READCOLOR_OFFSET UNITYSDK_OFFSET(0x17F7BC30)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17F7C690)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_REVERSENODE_OFFSET UNITYSDK_OFFSET(0x17F7D680)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ROTATENODE_OFFSET UNITYSDK_OFFSET(0x17F7DE70)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SELECT_OFFSET UNITYSDK_OFFSET(0x17F7D700)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SETSTATE_OFFSET UNITYSDK_OFFSET(0x17F7D0F0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SETTERMCOLOR_OFFSET UNITYSDK_OFFSET(0x17F7C930)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SET_NODE_OFFSET UNITYSDK_OFFSET(0x17F7A880)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SWITCHLIGHT_OFFSET UNITYSDK_OFFSET(0x17F7F7D0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_TOGGLENODEACTIVE_OFFSET UNITYSDK_OFFSET(0x17F7F180)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_TOGGLESTATEPANEL_OFFSET UNITYSDK_OFFSET(0x17F7F970)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F7FA70)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7FA10)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__INITVIEW_G__INITNODE_46_1_OFFSET UNITYSDK_OFFSET(0x17F7E5F0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__INITVIEW_G__INITNULL_46_0_OFFSET UNITYSDK_OFFSET(0x17F7DF00)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__SETSTATE_B__51_0_OFFSET UNITYSDK_OFFSET(0x17F7FA90)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F7FAD0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17F7FB60)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F7FB70)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F7FC00)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F7FC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixNodeWidgetController_TypeDefinitionIndex = 75652;

	class UIDataFixNodeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Single* StaticGet_NullNodeCompensation()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIDataFixNodeWidgetController_TypeDefinitionIndex)->GetStaticField(0xC5C0);
		}
		static ::System::Single* StaticGet_UpdateInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIDataFixNodeWidgetController_TypeDefinitionIndex)->GetStaticField(0xC5C4);
		}
		static ::System::Single* StaticGet_NullNodeTotalTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIDataFixNodeWidgetController_TypeDefinitionIndex)->GetStaticField(0xC5C8);
		}
		::Class_2_79AE422BA06F6D26_118* _view; // 0x2C0
		::Class_1_2179242C7F6B0780* _node; // 0x2C8
		::Class_3_1FE4CD675C5ACADB* _model; // 0x2D0
		::Foundation::Coroutine::CoroutineHandle _handler; // 0x2D8
		::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* _terminals; // 0x2E0
		::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* _terminalLights; // 0x2E8
		::MoleMole::Config::MonoDataFixNodeConfig* _cfg; // 0x2F0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* _colors; // 0x2F8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* _colorsUnConnect; // 0x300
		::System::Boolean IsControlNode; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::Class_1_2179242C7F6B0780* get_Node()
		{
			return ((::Class_1_2179242C7F6B0780*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_GET_NODE_OFFSET))(this);
		}

		::System::Void set_Node(::Class_1_2179242C7F6B0780* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2179242C7F6B0780*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SET_NODE_OFFSET))(this, value);
		}

		::System::Boolean get_NeedUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_GET_NEEDUNLOCK_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean RefreshView(::System::Boolean needAnim, ::Enum_3_D0F2373931CC685D_2 flowDir, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::Enum_3_D0F2373931CC685D_2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, needAnim, flowDir, speed);
		}

		::System::Void OnNodeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONNODERESET_OFFSET))(this);
		}

		::System::Void Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SELECT_OFFSET))(this);
		}

		::System::Void DeSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_DESELECT_OFFSET))(this);
		}

		::System::Void Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_CLICK_OFFSET))(this);
		}

		::System::Void OnButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ONBUTTONCLICK_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* RotateNode(::System::Boolean preConnected)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_ROTATENODE_OFFSET))(this, preConnected);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ReverseNode()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_REVERSENODE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Boolean SetTermColor(::System::Boolean needAnim, ::Enum_3_D0F2373931CC685D_2 flowDir, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::Enum_3_D0F2373931CC685D_2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SETTERMCOLOR_OFFSET))(this, needAnim, flowDir, speed);
		}

		::System::Void ClearNullColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_CLEARNULLCOLOR_OFFSET))(this);
		}

		::System::Void ToggleNodeActive(::UnityEngine::Transform* lightGroup, ::UnityEngine::Transform* targetGroup, ::UnityEngine::Transform* otherGroup, ::Enum_3_D0F2373931CC685D_2 flowDir, ::System::Single speed, ::System::Boolean isFadeout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::Enum_3_D0F2373931CC685D_2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_TOGGLENODEACTIVE_OFFSET))(this, lightGroup, targetGroup, otherGroup, flowDir, speed, isFadeout);
		}

		::System::Boolean SwitchLight(::System::Int32 i, ::System::Boolean isLight)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SWITCHLIGHT_OFFSET))(this, i, isLight);
		}

		::System::Boolean SetState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_SETSTATE_OFFSET))(this);
		}

		::System::Void PlayAnim(::UnityEngine::Animation* anim, ::System::String* name, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_PLAYANIM_OFFSET))(this, anim, name, callback);
		}

		::System::Void ReadColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_READCOLOR_OFFSET))(this);
		}

		::System::Void ToggleStatePanel(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER_TOGGLESTATEPANEL_OFFSET))(this, active);
		}

		::System::Void _InitView_g__InitNull_46_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__INITVIEW_G__INITNULL_46_0_OFFSET))(this);
		}

		::System::Void _InitView_g__InitNode_46_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__INITVIEW_G__INITNODE_46_1_OFFSET))(this);
		}

		::System::Void _SetState_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__SETSTATE_B__51_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
