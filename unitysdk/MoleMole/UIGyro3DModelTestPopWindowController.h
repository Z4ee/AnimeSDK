#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_29F53912E31AD3EE;
class Class_1_5F780812A1FAD31A;
class Class_2_B6010908CC293A93;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDebug3DModelController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17DAACA0)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17DAACB0)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17DAAD20)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONPROCESSSENSOR_OFFSET UNITYSDK_OFFSET(0x17DABFA0)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17DAB6A0)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DAB730)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DAADE0)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DAB5F0)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17DAB850)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAC070)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17DAC100)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17DAC1A0)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DAC260)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DAC270)
#define MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DAC280)

namespace MoleMole
{
	inline static constexpr unsigned int UIGyro3DModelTestPopWindowController_TypeDefinitionIndex = 57782;

	class UIGyro3DModelTestPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_1_5F780812A1FAD31A* _gyroscopeInputHandler; // 0x318
		::Class_1_29F53912E31AD3EE* _gyroscopeInputHandler2; // 0x320
		::Class_1_29F53912E31AD3EE* _gyroscopeInputHandler3; // 0x328
		::UnityEngine::Transform* _rotateModel_1; // 0x330
		::UnityEngine::Transform* _rotateModel_2; // 0x338
		::UnityEngine::Transform* _rotateModel_3; // 0x340
		::UnityEngine::Transform* _rotateModel_4; // 0x348
		::UnityEngine::Transform* _rotateModel_5; // 0x350
		::MoleMole::UIGeneralDebug3DModelController* _3dModelController; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_B6010908CC293A93* get__viewModel()
		{
			return ((::Class_2_B6010908CC293A93*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnProcessSensor(::UnityEngine::Vector3 gyro, ::UnityEngine::Vector3 accel, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER_ONPROCESSSENSOR_OFFSET))(this, gyro, accel, deltaTime);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGYRO3DMODELTESTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
