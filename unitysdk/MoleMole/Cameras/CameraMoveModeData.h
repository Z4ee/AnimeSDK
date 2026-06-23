#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/CameraMoveModeData_MoveModeState.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x12B94C00)
#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x12B94C70)
#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x12B947E0)
#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_GET_ISINIT_OFFSET UNITYSDK_OFFSET(0x12B94D60)
#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x12B94D70)
#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_INITCAMERAMOVEDATA_OFFSET UNITYSDK_OFFSET(0x12B94BA0)
#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_INTERNALCAMERAMOVEMODE_OFFSET UNITYSDK_OFFSET(0x12B94A90)
#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_SETAUTORECOIL_OFFSET UNITYSDK_OFFSET(0x12B94B60)
#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_TICK_OFFSET UNITYSDK_OFFSET(0x12B94830)
#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12B941F0)
#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B94DC0)
#define MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12B94DD0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMoveModeData_TypeDefinitionIndex = 76682;

	class CameraMoveModeData : public ::System::Object
	{
	public:
		::System::Single delayTime; // 0x10
		::System::Int32 uniqueid; // 0x14
		::System::Single durationTime; // 0x18
		::System::Boolean _autoRecoil; // 0x1C
		::System::Boolean ingoreTimeScale; // 0x1D
		::System::Int32 dataPriority; // 0x20
		::MoleMole::Config::CameraDelayMoveMode targetCamMoveMode; // 0x24
		::System::Single _timer; // 0x28
		::MoleMole::Cameras::CameraMoveModeData_MoveModeState _curState; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void SetAutoRecoil()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_SETAUTORECOIL_OFFSET))(this);
		}

		::System::Void InitCameraMoveData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_INITCAMERAMOVEDATA_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Deallocate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_DEALLOCATE_OFFSET))(this);
		}

		::System::Void InternalCameraMoveMode(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_INTERNALCAMERAMOVEMODE_OFFSET))(this, deltaTime);
		}

		::System::Boolean get_isInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_GET_ISINIT_OFFSET))(this);
		}

		::System::Boolean get_isAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_GET_ISALIVE_OFFSET))(this);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMOVEMODEDATA___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
