#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"

class Class_1_D70A30D666F20D90;
namespace UnityEngine { class Camera; }

#define CLASS_1_506296B1AE431167_METHOD_1_6140C241A9FB7EF2_OFFSET UNITYSDK_OFFSET(0x19FE2E20)
#define CLASS_1_506296B1AE431167_METHOD_1_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x19FE2BD0)
#define CLASS_1_506296B1AE431167_METHOD_1_93852A59E9597849_OFFSET UNITYSDK_OFFSET(0x19FE2DA0)
#define CLASS_1_506296B1AE431167__CTOR_OFFSET UNITYSDK_OFFSET(0x19FE31D0)

inline static constexpr unsigned int Class_1_506296B1AE431167_TypeDefinitionIndex = 73707;

class Class_1_506296B1AE431167 : public ::System::Object
{
public:
	// static const ::System::Single GMFHCDPBDIL; // 0x0
	// static const ::System::Single ABEJJLFNPNH; // 0x0
	::Il2CppArray<::UnityEngine::Plane>* PLEDIKJGBHK; // 0x10
	::UnityEngine::Matrix4x4 BJLGJEOBJBH; // 0x18
	::System::Single DOHPGABAGNA; // 0x58
	::System::Single ECKMPJKMOHN; // 0x5C
	::System::Boolean HDIMLIAJGLL; // 0x60
	::System::Boolean PGOFBBMGANH; // 0x61

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
