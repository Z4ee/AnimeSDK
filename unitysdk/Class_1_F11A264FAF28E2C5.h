#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/RPG/Client/SwipeCameraInputMode.h"
#include "unitysdk/RPG/Client/SwipeCameraStateEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class MazeDragCameraConfig; }

#define CLASS_1_F11A264FAF28E2C5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188791E0)
#define CLASS_1_F11A264FAF28E2C5_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x18879A30)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_0CE52571D66B7D83_OFFSET UNITYSDK_OFFSET(0x18878490)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x18879190)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_248E71A2CE9F56A5_1_OFFSET UNITYSDK_OFFSET(0x18878D80)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_248E71A2CE9F56A5_2_OFFSET UNITYSDK_OFFSET(0x18879650)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_248E71A2CE9F56A5_OFFSET UNITYSDK_OFFSET(0x18879230)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_43E4C6376301FFC7_OFFSET UNITYSDK_OFFSET(0x188792A0)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_45735724FCEC4E8B_OFFSET UNITYSDK_OFFSET(0x188784E0)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_BB3366DF2757D972_OFFSET UNITYSDK_OFFSET(0x18878DF0)
#define CLASS_1_F11A264FAF28E2C5_METHOD_1_EB9F2EA401B08645_OFFSET UNITYSDK_OFFSET(0x18878590)
#define CLASS_1_F11A264FAF28E2C5_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x18879A40)
#define CLASS_1_F11A264FAF28E2C5__CTOR_OFFSET UNITYSDK_OFFSET(0x18878440)

inline static constexpr unsigned int Class_1_F11A264FAF28E2C5_TypeDefinitionIndex = 69627;

class Class_1_F11A264FAF28E2C5 : public ::System::Object
{
public:
	::RPG::GameCore::MazeDragCameraConfig* IGHAHBNLIJA; // 0x10
	::UnityEngine::Vector2 JBFNBBEBCAC; // 0x18
	::UnityEngine::Vector3 HNDKOOLOJAE; // 0x20
	::UnityEngine::Vector3 GLPIDDAPHKC; // 0x2C
	::RPG::Client::SwipeCameraInputMode PDDOGMKKBIF; // 0x38
	::UnityEngine::Vector3 MGFPJOHOGNE; // 0x3C
	::System::Boolean HLPDFEJJBGL; // 0x48
	::System::Boolean _Enable_k__BackingField; // 0x49
	::RPG::Client::SwipeCameraStateEnum DLNIGFGLPLJ; // 0x4C
	::UnityEngine::Vector3 IILLNMHABDM; // 0x50

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

	::System::Void set_Enable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F11A264FAF28E2C5_SET_ENABLE_OFFSET))(this, a1);
	}
};
