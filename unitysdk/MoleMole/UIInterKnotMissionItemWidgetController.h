#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_2181504E881DDEE4;
class Class_2_79AE422BA06F6D26_53;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInterKnotPageConfig; }
namespace MoleMole { class UIInterKnotPageConfig_MainCityQuestTypeRowConfig; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x160967F0)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ISNEW_OFFSET UNITYSDK_OFFSET(0x16097800)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16096BD0)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONMANUALADD_OFFSET UNITYSDK_OFFSET(0x160971F0)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONTRACKQUESTUPDATE_OFFSET UNITYSDK_OFFSET(0x16096E90)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16096C60)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16096810)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16096B60)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_PLAYSELECT_OFFSET UNITYSDK_OFFSET(0x16097340)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_READNEW_OFFSET UNITYSDK_OFFSET(0x16097860)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_REFRESHNEW_OFFSET UNITYSDK_OFFSET(0x16097240)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_REFRESHTRACK_OFFSET UNITYSDK_OFFSET(0x16096EE0)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16097A20)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_REGISTERCLICKCB_OFFSET UNITYSDK_OFFSET(0x160972F0)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_RESELECT_OFFSET UNITYSDK_OFFSET(0x16097760)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_SETINDEX_OFFSET UNITYSDK_OFFSET(0x16097D40)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_SETNAMETEXT_OFFSET UNITYSDK_OFFSET(0x16097560)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x160974F0)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16096800)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_TRIGGERBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x160978A0)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16097E60)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16097E00)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER__ONUIINIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x16097EB0)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER__REFRESHTRACK_G__SETTRACKED_26_0_OFFSET UNITYSDK_OFFSET(0x16097D90)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16097F10)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16097FA0)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16098030)
#define MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x160980C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMissionItemWidgetController_TypeDefinitionIndex = 74143;

	class UIInterKnotMissionItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_RampColorA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionItemWidgetController_TypeDefinitionIndex)->GetStaticField(0xFA50);
		}
		static ::System::Int32* StaticGet_RampColorB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionItemWidgetController_TypeDefinitionIndex)->GetStaticField(0xFA54);
		}
		::Class_2_79AE422BA06F6D26_53* _view; // 0x2B8
		::MoleMole::UIInterKnotPageConfig* _Config_k__BackingField; // 0x2C0
		::MoleMole::UIInterKnotPageConfig_MainCityQuestTypeRowConfig* _rowConfig; // 0x2C8
		::DG::Tweening::Tweener* tweener; // 0x2D0
		::System::Action_1<::System::Int32>* _onClick; // 0x2D8
		::System::Int32 _index; // 0x2E0
		::UnityEngine::UI::Image* _img; // 0x2E8
		::UnityEngine::Material* _allocMaterial; // 0x2F0
		::Class_1_2181504E881DDEE4* _manual; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::MoleMole::UIInterKnotPageConfig* get_Config()
		{
			return ((::MoleMole::UIInterKnotPageConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::MoleMole::UIInterKnotPageConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInterKnotPageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnTrackQuestUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONTRACKQUESTUPDATE_OFFSET))(this, obj);
		}

		::System::Void OnManualAdd(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ONMANUALADD_OFFSET))(this, obj);
		}

		::System::Void RegisterClickCb(::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_REGISTERCLICKCB_OFFSET))(this, callback);
		}

		::System::Void PlaySelect(::System::Boolean isSelect, ::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_PLAYSELECT_OFFSET))(this, isSelect, anim);
		}

		::System::Void SetSelect(::System::Boolean select, ::System::Boolean playAnim, ::System::Boolean isDefaultSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_SETSELECT_OFFSET))(this, select, playAnim, isDefaultSelect);
		}

		::System::Void ReSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_RESELECT_OFFSET))(this);
		}

		::System::Void TriggerButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_TRIGGERBUTTONCLICK_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_1_2181504E881DDEE4* manual)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2181504E881DDEE4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, manual);
		}

		::System::Void SetIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_SETINDEX_OFFSET))(this, index);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_ISNEW_OFFSET))(this);
		}

		::System::Void ReadNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_READNEW_OFFSET))(this);
		}

		::System::Void RefreshNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_REFRESHNEW_OFFSET))(this);
		}

		::System::Void SetNameText(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_SETNAMETEXT_OFFSET))(this, selected);
		}

		::System::Void RefreshTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER_REFRESHTRACK_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER__ONUIINIT_B__8_0_OFFSET))(this);
		}

		::System::Void _RefreshTrack_g__SetTracked_26_0(::System::Boolean tracked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER__REFRESHTRACK_G__SETTRACKED_26_0_OFFSET))(this, tracked);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
