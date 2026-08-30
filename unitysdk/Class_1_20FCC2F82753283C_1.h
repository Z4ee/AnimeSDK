#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/RPG/Client/SwipeCameraStateEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_20FCC2F82753283C_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A85090)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_2288BF7B54BF86A9_OFFSET UNITYSDK_OFFSET(0x17A866C0)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17A86660)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_4967D395F2BF3624_OFFSET UNITYSDK_OFFSET(0x17A85140)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x17A850D0)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_938C5AA708433B7C_OFFSET UNITYSDK_OFFSET(0x17A84E50)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_A7188DFAB5831CB7_OFFSET UNITYSDK_OFFSET(0x17A85B60)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_AF5DADE427749D02_OFFSET UNITYSDK_OFFSET(0x17A84EA0)
#define CLASS_1_20FCC2F82753283C_1_METHOD_1_D1149065CC4CFA55_OFFSET UNITYSDK_OFFSET(0x17A84DA0)
#define CLASS_1_20FCC2F82753283C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A84D60)

inline static constexpr unsigned int Class_1_20FCC2F82753283C_1_TypeDefinitionIndex = 69671;

class Class_1_20FCC2F82753283C_1 : public ::System::Object
{
public:
	::UnityEngine::Transform* AFIBNIPMICJ; // 0x10
	::System::Single PBLBNOOMKCC; // 0x18
	::System::Single BAGGGIOKJAK; // 0x1C
	::UnityEngine::Vector2 MJGIHIGGBIK; // 0x20
	::System::Single DCLAIMLDBFO; // 0x28
	::System::Boolean MOKNCFJICIC; // 0x2C
	::UnityEngine::Quaternion ECDODICPJJH; // 0x30
	::UnityEngine::Vector2 OGDEKPDMCLF; // 0x40
	::UnityEngine::Quaternion HCFLKAIIMMN; // 0x48
	::System::Single GNFOMGEBMAA; // 0x58
	::System::Single NMFDLKEPKLJ; // 0x5C
	::System::Single MIPBBGJCKCB; // 0x60
	::RPG::Client::SwipeCameraStateEnum DLNIGFGLPLJ; // 0x64
	::UnityEngine::Quaternion CPOGADDNCLM; // 0x68
	::System::Single MEHLMFMJANN; // 0x78
	::UnityEngine::Quaternion IKLDDLDIJIC; // 0x7C

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

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20FCC2F82753283C_1_METHOD_1_7646FFE662147970_OFFSET))(this);
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
