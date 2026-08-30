#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UI3DCameraStateBase.h"

class Class_1_0C3D32DB2657826D;
namespace Cinemachine { class CinemachineFreeLook; }
namespace RPG::Client { class InputDataController; }
namespace RPG::GameCore { class UI3DVirtualCameraComponent; }
namespace System { class Action; }

#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xE7C9D80)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_GET__FREELOOKCAMERA_OFFSET UNITYSDK_OFFSET(0xE7C9E20)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_INIT_OFFSET UNITYSDK_OFFSET(0xE7C9C10)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE7C9AB0)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE7C8DD0)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__SETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0xE7C9B10)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__UPDATECAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xE7C9E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCameraSurroundViewState_TypeDefinitionIndex = 57696;

	class UI3DCameraSurroundViewState : public ::RPG::GameCore::UI3DCameraStateBase
	{
	public:
		::System::Action* _CallBack; // 0x38
		::RPG::Client::InputDataController* _InputController; // 0x40
		::Class_1_0C3D32DB2657826D* _Setting; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::UI3DVirtualCameraComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_INIT_OFFSET))(this, a1);
		}

		::System::Single GetAxisValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_GETAXISVALUE_OFFSET))(this, a1);
		}

		::System::Void _SetInputAxisProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__SETINPUTAXISPROVIDER_OFFSET))(this);
		}

		::System::Void _UpdateCameraZoom(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__UPDATECAMERAZOOM_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineFreeLook* get__FreeLookCamera()
		{
			return ((::Cinemachine::CinemachineFreeLook*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_GET__FREELOOKCAMERA_OFFSET))(this);
		}
	};
}
