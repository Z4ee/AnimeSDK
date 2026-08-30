#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDDC0060)
#define RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION_METHOD_1_D3E60AED7A8FFCC5_OFFSET UNITYSDK_OFFSET(0xDDC07F0)
#define RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0xDDC0A00)

namespace RPG::Client
{
	inline static constexpr unsigned int QuaternionRotationControlBehavior_SingleRotation_TypeDefinitionIndex = 70720;

	class QuaternionRotationControlBehavior_SingleRotation : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion BaseRotation; // 0x10
		::UnityEngine::Vector3 RotateAxis; // 0x20
		::System::Single RotateSpeed; // 0x2C
		::System::Single _LastAngle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::Quaternion Method_1_D3E60AED7A8FFCC5(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION_METHOD_1_D3E60AED7A8FFCC5_OFFSET))(this, a1, a2);
		}
	};
}
