#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_F11A264FAF28E2C5.h"
#include "unitysdk/Class_2_82D5CF3CD743E581_PhotoGraphSwipeCameraState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_854A2C7905ADF31B;

#define CLASS_2_82D5CF3CD743E581_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15878920)
#define CLASS_2_82D5CF3CD743E581_METHOD_2_5BB3779CAA97BE71_OFFSET UNITYSDK_OFFSET(0x15878180)
#define CLASS_2_82D5CF3CD743E581_METHOD_2_723A6AD38C141A62_OFFSET UNITYSDK_OFFSET(0x15878460)
#define CLASS_2_82D5CF3CD743E581_METHOD_2_761B2D9D62313039_OFFSET UNITYSDK_OFFSET(0x15878200)
#define CLASS_2_82D5CF3CD743E581_METHOD_2_DA4377709D1B2DE3_OFFSET UNITYSDK_OFFSET(0x15877CE0)
#define CLASS_2_82D5CF3CD743E581__CTOR_OFFSET UNITYSDK_OFFSET(0x15878990)

inline static constexpr unsigned int Class_2_82D5CF3CD743E581_TypeDefinitionIndex = 69630;

class Class_2_82D5CF3CD743E581 : public ::Class_1_F11A264FAF28E2C5
{
public:
	::Il2CppArray<::UnityEngine::Vector3>* CAPHPDMLOMI; // 0x60
	::Class_1_854A2C7905ADF31B* JBDLEALMLDJ; // 0x68
	::UnityEngine::Vector2 FPMMGOGGDPA; // 0x70
	::UnityEngine::Vector2 JMLLKDLMODM; // 0x78
	::Class_2_82D5CF3CD743E581_PhotoGraphSwipeCameraState MPNAHKOANLI; // 0x80
	::System::Single MNOKAIAOCPH; // 0x84
	::UnityEngine::Quaternion MGFPKGIOKEN; // 0x88
	::System::Single EEHMPHBHMDK; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_DA4377709D1B2DE3(::Class_1_854A2C7905ADF31B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_854A2C7905ADF31B*))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581_METHOD_2_DA4377709D1B2DE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_723A6AD38C141A62(::Cinemachine::CameraState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581_METHOD_2_723A6AD38C141A62_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_761B2D9D62313039(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581_METHOD_2_761B2D9D62313039_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5BB3779CAA97BE71(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_82D5CF3CD743E581_METHOD_2_5BB3779CAA97BE71_OFFSET))(this, a1);
	}
};
