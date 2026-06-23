#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_0FEE7D877FD17850;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET UNITYSDK_OFFSET(0x181216B0)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0x18121730)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x181216A0)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x181216C0)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18121740)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x181217E0)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_SETUPFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x181219B0)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18122600)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18122670)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18122710)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerBlasting3DModelController_TypeDefinitionIndex = 48254;

	class UIHackerBlasting3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_AutoProcessCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET))(this);
		}

		::Class_2_0FEE7D877FD17850* get__viewModel()
		{
			return ((::Class_2_0FEE7D877FD17850*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Boolean get_Show3dSceneEntities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetupFollowTarget(::System::UInt32 entityID, ::System::String* attachPointName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_SETUPFOLLOWTARGET_OFFSET))(this, entityID, attachPointName);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
