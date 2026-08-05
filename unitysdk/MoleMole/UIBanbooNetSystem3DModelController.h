#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_1D0701FDC9F2A33B;
class Class_2_208CC9941471731A_1150;
class Class_2_23D9BB4D5379D91C_3;
class Class_2_A944C35C433158AC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_CLEANUPDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1956AC10)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_GETMODELSHOWINDEX_OFFSET UNITYSDK_OFFSET(0x1956A4F0)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_GETUPLEVELTIMELINEID_OFFSET UNITYSDK_OFFSET(0x1956B480)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x1956A020)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1956A010)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONBANGBOOMICROWEBDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x1956AFB0)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1956A630)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1956AA30)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONLOOPTIMELINESTART_OFFSET UNITYSDK_OFFSET(0x1956ADD0)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONOPENTIMELINEFINISH_OFFSET UNITYSDK_OFFSET(0x1956AE70)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1956A6C0)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1956AB30)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1956A0E0)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1956A270)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_REFRESHDEVICEBYMAINLINELEVEL_OFFSET UNITYSDK_OFFSET(0x1956A450)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_REFRESHEFFECT_OFFSET UNITYSDK_OFFSET(0x1956B160)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_REFRESHLEVELLIGHTS_OFFSET UNITYSDK_OFFSET(0x1956B010)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_SHOWLOOPTIMELINE_OFFSET UNITYSDK_OFFSET(0x1956A730)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1956B610)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1956B510)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1956BA40)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1956BAD0)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1956BB60)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1956BB70)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1956BB80)
#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1956BB90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBanbooNetSystem3DModelController_TypeDefinitionIndex = 82643;

	class UIBanbooNetSystem3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_UpLevelTimelineIdList()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIBanbooNetSystem3DModelController_TypeDefinitionIndex)->GetStaticField(0x4FEE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_MainCityTreePrefabPaths()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIBanbooNetSystem3DModelController_TypeDefinitionIndex)->GetStaticField(0x4FEE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_LoopTimelineKeyList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIBanbooNetSystem3DModelController_TypeDefinitionIndex)->GetStaticField(0x4FEF0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_StartTimelineKeyList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIBanbooNetSystem3DModelController_TypeDefinitionIndex)->GetStaticField(0x4FEF8);
		}
		::Class_2_23D9BB4D5379D91C_3* _view; // 0x360
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1150*>* _mainRowsBuf; // 0x368
		::UnityEngine::GameObject* _deviceModelGo; // 0x370
		::System::String* _deviceModelPoolPath; // 0x378
		::System::Boolean _isShowOnOpenFinish; // 0x380
		::System::Boolean isResumeFromHide; // 0x381
		::Class_2_A944C35C433158AC* startTimelineTask; // 0x388
		::Class_2_A944C35C433158AC* loopTimelineTask; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_1D0701FDC9F2A33B* get_Model()
		{
			return ((::Class_2_1D0701FDC9F2A33B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLoopTimeLineStart(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONLOOPTIMELINESTART_OFFSET))(this, trans);
		}

		::System::Void OnOpenTimeLineFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONOPENTIMELINEFINISH_OFFSET))(this);
		}

		::System::Void ShowLoopTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_SHOWLOOPTIMELINE_OFFSET))(this);
		}

		::System::Void OnBangbooMicroWebDataUpdate(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_ONBANGBOOMICROWEBDATAUPDATE_OFFSET))(this, _);
		}

		::System::Void RefreshDeviceByMainLineLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_REFRESHDEVICEBYMAINLINELEVEL_OFFSET))(this);
		}

		static ::System::Int32 GetModelShowIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_GETMODELSHOWINDEX_OFFSET))();
		}

		::System::Void RefreshLevelLights(::System::Int32 showIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_REFRESHLEVELLIGHTS_OFFSET))(this, showIndex);
		}

		::System::Void RefreshEffect(::System::Int32 showIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_REFRESHEFFECT_OFFSET))(this, showIndex);
		}

		::System::Void CleanupDeviceModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_CLEANUPDEVICEMODEL_OFFSET))(this);
		}

		static ::System::Int32 GetUpLevelTimeLineId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_GETUPLEVELTIMELINEID_OFFSET))();
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
