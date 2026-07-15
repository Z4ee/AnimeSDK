#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"

class Class_1_D70A30D666F20D90;
namespace UnityEngine { class Camera; }

#define CLASS_1_506296B1AE431167_METHOD_1_6140C241A9FB7EF2_OFFSET UNITYSDK_OFFSET(0x171E58E0)
#define CLASS_1_506296B1AE431167_METHOD_1_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x171E5690)
#define CLASS_1_506296B1AE431167_METHOD_1_93852A59E9597849_OFFSET UNITYSDK_OFFSET(0x171E5860)
#define CLASS_1_506296B1AE431167__CTOR_OFFSET UNITYSDK_OFFSET(0x171E5C90)

inline static constexpr unsigned int Class_1_506296B1AE431167_TypeDefinitionIndex = 70435;

class Class_1_506296B1AE431167 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::Il2CppArray<::UnityEngine::Plane>* Field_1_2; // 0x10
	::System::Single Field_1_3; // 0x18
	::System::Single Field_1_4; // 0x1C
	::UnityEngine::Matrix4x4 Field_1_5; // 0x20
	::System::Boolean Field_1_6; // 0x60
	::System::Boolean Field_1_7; // 0x61

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_506296B1AE431167__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F68D6D1D153FE6C(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_506296B1AE431167_METHOD_1_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93852A59E9597849(::UnityEngine::Bounds& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_506296B1AE431167_METHOD_1_93852A59E9597849_OFFSET))(this, a1);
	}

	::System::Void Method_1_6140C241A9FB7EF2(::UnityEngine::Camera* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_506296B1AE431167_METHOD_1_6140C241A9FB7EF2_OFFSET))(this, a1, a2);
	}
};
