#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/RPG/Client/SwipeCameraInputMode.h"
#include "unitysdk/RPG/Client/SwipeCameraStateEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class MazeDragCameraConfig; }

#define CLASS_1_F11A264FAF28E2C5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AD2E10)
#define CLASS_1_F11A264FAF28E2C5_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x11AD3660)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_0CE52571D66B7D83_OFFSET UNITYSDK_OFFSET(0x11AD20B0)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x11AD2DC0)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_248E71A2CE9F56A5_1_OFFSET UNITYSDK_OFFSET(0x11AD29B0)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_248E71A2CE9F56A5_2_OFFSET UNITYSDK_OFFSET(0x11AD3280)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_248E71A2CE9F56A5_OFFSET UNITYSDK_OFFSET(0x11AD2E60)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_43E4C6376301FFC7_OFFSET UNITYSDK_OFFSET(0x11AD2ED0)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_45735724FCEC4E8B_OFFSET UNITYSDK_OFFSET(0x11AD2100)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_BB3366DF2757D972_OFFSET UNITYSDK_OFFSET(0x11AD2A20)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_EB9F2EA401B08645_OFFSET UNITYSDK_OFFSET(0x11AD21B0)
#define CLASS_1_F11A264FAF28E2C5_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x11AD3670)
#define CLASS_1_F11A264FAF28E2C5__CTOR_OFFSET UNITYSDK_OFFSET(0x11AD2060)

inline static constexpr unsigned int Class_1_F11A264FAF28E2C5_TypeDefinitionIndex = 64208;

class Class_1_F11A264FAF28E2C5 : public ::System::Object
{
public:
	::RPG::GameCore::MazeDragCameraConfig* Field_1_1; // 0x10
	::System::Boolean Field_1_9; // 0x18
	::System::Boolean _Enable_k__BackingField; // 0x19
	::UnityEngine::Vector2 Field_1_8; // 0x1C
	::UnityEngine::Vector3 Field_1_6; // 0x24
	::RPG::Client::SwipeCameraStateEnum Field_1_3; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x34
	::UnityEngine::Vector3 Field_1_4; // 0x40
	::RPG::Client::SwipeCameraInputMode Field_1_2; // 0x4C
	::UnityEngine::Vector3 Field_1_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0CE52571D66B7D83(::RPG::GameCore::MazeDragCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeDragCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_METHOD_1_0CE52571D66B7D83_OFFSET))(this, a1);
	}

	::System::Void Method_1_45735724FCEC4E8B(::Cinemachine::CameraState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_METHOD_1_45735724FCEC4E8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_248E71A2CE9F56A5(::Cinemachine::CameraState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_METHOD_1_248E71A2CE9F56A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_43E4C6376301FFC7(::Cinemachine::CameraState& a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_METHOD_1_43E4C6376301FFC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_248E71A2CE9F56A5_1(::Cinemachine::CameraState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_METHOD_1_248E71A2CE9F56A5_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB3366DF2757D972(::Cinemachine::CameraState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_METHOD_1_BB3366DF2757D972_OFFSET))(this, a1);
	}

	::System::Void Method_1_248E71A2CE9F56A5_2(::Cinemachine::CameraState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_METHOD_1_248E71A2CE9F56A5_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_EB9F2EA401B08645(::Cinemachine::CameraState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_METHOD_1_EB9F2EA401B08645_OFFSET))(this, a1);
	}

	::System::Boolean get_Enable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_GET_ENABLE_OFFSET))(this);
	}

	::System::Void set_Enable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_SET_ENABLE_OFFSET))(this, value);
	}
};
