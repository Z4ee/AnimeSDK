#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_7A1F9B1E855D33CF;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_50F2CB84C5756AB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13754B20)
#define CLASS_1_50F2CB84C5756AB7_METHOD_1_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x13754AC0)
#define CLASS_1_50F2CB84C5756AB7_METHOD_1_DB6883322E44B6D4_OFFSET UNITYSDK_OFFSET(0x13754B70)
#define CLASS_1_50F2CB84C5756AB7_METHOD_1_FC3E431FB73DA99E_OFFSET UNITYSDK_OFFSET(0x13754C30)
#define CLASS_1_50F2CB84C5756AB7__CTOR_OFFSET UNITYSDK_OFFSET(0x13754F90)

inline static constexpr unsigned int Class_1_50F2CB84C5756AB7_TypeDefinitionIndex = 41536;

class Class_1_50F2CB84C5756AB7 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::System::Boolean Field_1_3; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::UnityEngine::Quaternion Field_1_2; // 0x20

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

	::UnityEngine::Quaternion Method_1_FC3E431FB73DA99E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_50F2CB84C5756AB7_METHOD_1_FC3E431FB73DA99E_OFFSET))(this, a1, a2);
	}
};
