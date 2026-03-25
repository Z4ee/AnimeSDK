#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/RPG/Client/SwipeCameraStateEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_20FCC2F82753283C_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7E4A90)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_2288BF7B54BF86A9_OFFSET UNITYSDK_OFFSET(0xD7E60C0)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD7E6060)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_4967D395F2BF3624_OFFSET UNITYSDK_OFFSET(0xD7E4B50)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_938C5AA708433B7C_OFFSET UNITYSDK_OFFSET(0xD7E4840)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_A7188DFAB5831CB7_OFFSET UNITYSDK_OFFSET(0xD7E5560)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xD7E4AD0)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_AF5DADE427749D02_OFFSET UNITYSDK_OFFSET(0xD7E4890)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_D1149065CC4CFA55_OFFSET UNITYSDK_OFFSET(0xD7E4790)
#define CLASS_1_20FCC2F82753283C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E4750)

inline static constexpr unsigned int Class_1_20FCC2F82753283C_1_TypeDefinitionIndex = 56996;

class Class_1_20FCC2F82753283C_1 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_9; // 0x10
	::UnityEngine::Quaternion Field_1_10; // 0x18
	::UnityEngine::Quaternion Field_1_13; // 0x28
	::UnityEngine::Vector2 Field_1_7; // 0x38
	::System::Boolean Field_1_0; // 0x40
	::System::Single Field_1_14; // 0x44
	::UnityEngine::Quaternion Field_1_11; // 0x48
	::System::Single Field_1_4; // 0x58
	::System::Single Field_1_6; // 0x5C
	::UnityEngine::Vector2 Field_1_8; // 0x60
	::System::Single Field_1_5; // 0x68
	::System::Single Field_1_2; // 0x6C
	::RPG::Client::SwipeCameraStateEnum Field_1_1; // 0x70
	::UnityEngine::Quaternion Field_1_12; // 0x74
	::System::Single Field_1_15; // 0x84
	::System::Single Field_1_3; // 0x88

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_20FCC2F82753283C_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1149065CC4CFA55(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20FCC2F82753283C_1_METHOD_1_D1149065CC4CFA55_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_938C5AA708433B7C(::Cinemachine::CameraState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_20FCC2F82753283C_1_METHOD_1_938C5AA708433B7C_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20FCC2F82753283C_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20FCC2F82753283C_1_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_4967D395F2BF3624(::UnityEngine::Vector2 a1, ::Cinemachine::CameraState& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_20FCC2F82753283C_1_METHOD_1_4967D395F2BF3624_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7188DFAB5831CB7(::UnityEngine::Vector3 a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_20FCC2F82753283C_1_METHOD_1_A7188DFAB5831CB7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20FCC2F82753283C_1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_2288BF7B54BF86A9(::Cinemachine::CameraState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_20FCC2F82753283C_1_METHOD_1_2288BF7B54BF86A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF5DADE427749D02(::Cinemachine::CameraState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_20FCC2F82753283C_1_METHOD_1_AF5DADE427749D02_OFFSET))(this, a1);
	}
};
