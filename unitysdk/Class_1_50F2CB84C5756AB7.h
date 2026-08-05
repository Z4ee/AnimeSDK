#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_7A1F9B1E855D33CF;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_50F2CB84C5756AB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140AD200)
#define CLASS_1_50F2CB84C5756AB7_METHOD_1_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x140AD1A0)
#define CLASS_1_50F2CB84C5756AB7_METHOD_1_DB6883322E44B6D4_OFFSET UNITYSDK_OFFSET(0x140AD250)
#define CLASS_1_50F2CB84C5756AB7_METHOD_1_F5EBEED5DEACCBDD_OFFSET UNITYSDK_OFFSET(0x140AD310)
#define CLASS_1_50F2CB84C5756AB7__CTOR_OFFSET UNITYSDK_OFFSET(0x140AD650)

inline static constexpr unsigned int Class_1_50F2CB84C5756AB7_TypeDefinitionIndex = 69985;

class Class_1_50F2CB84C5756AB7 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::System::Int32 Field_1_7; // 0x18
	::UnityEngine::Quaternion Field_1_6; // 0x1C
	::System::Boolean Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50F2CB84C5756AB7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_50F2CB84C5756AB7_METHOD_1_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50F2CB84C5756AB7_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_DB6883322E44B6D4(::Class_2_7A1F9B1E855D33CF* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_7A1F9B1E855D33CF*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_50F2CB84C5756AB7_METHOD_1_DB6883322E44B6D4_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_F5EBEED5DEACCBDD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_50F2CB84C5756AB7_METHOD_1_F5EBEED5DEACCBDD_OFFSET))(this, a1, a2);
	}
};
