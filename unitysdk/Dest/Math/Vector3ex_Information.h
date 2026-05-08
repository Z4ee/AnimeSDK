#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DEST_MATH_VECTOR3EX_INFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EF160)

namespace Dest::Math
{
	inline static constexpr unsigned int Vector3ex_Information_TypeDefinitionIndex = 33184;

	class Vector3ex_Information : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* Direction; // 0x10
		::Il2CppArray<::System::Int32>* Extreme; // 0x18
		::UnityEngine::Vector3 Min; // 0x20
		::UnityEngine::Vector3 Max; // 0x2C
		::UnityEngine::Vector3 Origin; // 0x38
		::System::Single MaxRange; // 0x44
		::System::Boolean ExtremeCCW; // 0x48
		::System::Int32 Dimension; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_INFORMATION__CTOR_OFFSET))(this);
		}
	};
}
