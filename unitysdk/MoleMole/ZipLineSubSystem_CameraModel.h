#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Struct_2_873A547A658837D4.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ZipLineSubSystem; }
namespace MoleMole { class ZipLineSubSystem_MainState; }
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_164;
template <typename T> class Class_1_BBE667D4A3124D9B;

#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_CURRENTINSLIDEROPECAMERA_OFFSET UNITYSDK_OFFSET(0x11666140)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_ENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x11666930)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_FINALCAMERAKEY_NOLASTKEY_OFFSET UNITYSDK_OFFSET(0x116668F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_FINALCAMERAKEY_OFFSET UNITYSDK_OFFSET(0x11666910)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_INREVERSEDIRECTION_OFFSET UNITYSDK_OFFSET(0x11666160)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_OVERRIDECAMERAKEY_OFFSET UNITYSDK_OFFSET(0x116668D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11666950)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SETBASECAMERAKEY_1_OFFSET UNITYSDK_OFFSET(0x11666590)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SETBASECAMERAKEY_OFFSET UNITYSDK_OFFSET(0x11666180)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_CURRENTINSLIDEROPECAMERA_OFFSET UNITYSDK_OFFSET(0x11666150)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_ENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x11666940)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_FINALCAMERAKEY_NOLASTKEY_OFFSET UNITYSDK_OFFSET(0x11666900)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_FINALCAMERAKEY_OFFSET UNITYSDK_OFFSET(0x11666920)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_INREVERSEDIRECTION_OFFSET UNITYSDK_OFFSET(0x11666170)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_OVERRIDECAMERAKEY_OFFSET UNITYSDK_OFFSET(0x116668E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x11666040)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_0_OFFSET UNITYSDK_OFFSET(0x11666BD0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_1_OFFSET UNITYSDK_OFFSET(0x11666E40)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_2_OFFSET UNITYSDK_OFFSET(0x11666FD0)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_CameraModel_TypeDefinitionIndex = 63891;

	class ZipLineSubSystem_CameraModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::MoleMole::ZipLineSubSystem_MainState* _mainState; // 0x80
		::Class_0_16E4307DCC419505_159<::System::String*>* BaseCameraKey; // 0x88
		::Class_0_16E4307DCC419505_159<::UnityEngine::Vector3>* _EnterPosition_k__BackingField; // 0x90
		::Class_0_16E4307DCC419505_164<::System::String*>* _FinalCameraKey_k__BackingField; // 0x98
		::MoleMole::ZipLineSubSystem* _ownerSubSystem; // 0xA0
		::Class_1_BBE667D4A3124D9B<::Struct_2_873A547A658837D4>* _OverrideCameraKey_k__BackingField; // 0xA8
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _InReverseDirection_k__BackingField; // 0xB0
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _CurrentInSlideRopeCamera_k__BackingField; // 0xB8
		::Class_0_16E4307DCC419505_164<::System::String*>* _FinalCameraKey_NoLastKey_k__BackingField; // 0xC0
		::System::String* LastCameraKey; // 0xC8
		::System::Boolean _forceUpdateWhenChangeBaseKey; // 0xD0

		::System::Void _ctor(::MoleMole::ZipLineSubSystem* ownerSubSystem, ::MoleMole::ZipLineSubSystem_MainState* mainState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*, ::MoleMole::ZipLineSubSystem_MainState*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__CTOR_OFFSET))(this, ownerSubSystem, mainState);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_CurrentInSlideRopeCamera()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_CURRENTINSLIDEROPECAMERA_OFFSET))(this);
		}

		::System::Void set_CurrentInSlideRopeCamera(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_CURRENTINSLIDEROPECAMERA_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_InReverseDirection()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_INREVERSEDIRECTION_OFFSET))(this);
		}

		::System::Void set_InReverseDirection(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_INREVERSEDIRECTION_OFFSET))(this, value);
		}

		::System::Void SetBaseCameraKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SETBASECAMERAKEY_OFFSET))(this, key);
		}

		::System::Void SetBaseCameraKey_1(::System::String* key, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SETBASECAMERAKEY_1_OFFSET))(this, key, position);
		}

		::Class_1_BBE667D4A3124D9B<::Struct_2_873A547A658837D4>* get_OverrideCameraKey()
		{
			return ((::Class_1_BBE667D4A3124D9B<::Struct_2_873A547A658837D4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_OVERRIDECAMERAKEY_OFFSET))(this);
		}

		::System::Void set_OverrideCameraKey(::Class_1_BBE667D4A3124D9B<::Struct_2_873A547A658837D4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BBE667D4A3124D9B<::Struct_2_873A547A658837D4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_OVERRIDECAMERAKEY_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::String*>* get_FinalCameraKey_NoLastKey()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_FINALCAMERAKEY_NOLASTKEY_OFFSET))(this);
		}

		::System::Void set_FinalCameraKey_NoLastKey(::Class_0_16E4307DCC419505_164<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_FINALCAMERAKEY_NOLASTKEY_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::String*>* get_FinalCameraKey()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_FINALCAMERAKEY_OFFSET))(this);
		}

		::System::Void set_FinalCameraKey(::Class_0_16E4307DCC419505_164<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_FINALCAMERAKEY_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::UnityEngine::Vector3>* get_EnterPosition()
		{
			return ((::Class_0_16E4307DCC419505_159<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_ENTERPOSITION_OFFSET))(this);
		}

		::System::Void set_EnterPosition(::Class_0_16E4307DCC419505_159<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_ENTERPOSITION_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::String* _OnCreateProperty_b__32_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_0_OFFSET))(this);
		}

		::System::String* _OnCreateProperty_b__32_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_1_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__32_2(::Struct_2_C8629618711DF8B3& _)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_2_OFFSET))(this, _);
		}
	};
}
