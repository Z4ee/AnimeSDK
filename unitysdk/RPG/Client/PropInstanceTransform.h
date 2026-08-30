#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROPINSTANCETRANSFORM_METHOD_1_8ACAC425340483C4_OFFSET UNITYSDK_OFFSET(0x17B48610)
#define RPG_CLIENT_PROPINSTANCETRANSFORM_METHOD_1_9DBC9E6BCD10AD9A_OFFSET UNITYSDK_OFFSET(0x17B48900)
#define RPG_CLIENT_PROPINSTANCETRANSFORM_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17B48E50)
#define RPG_CLIENT_PROPINSTANCETRANSFORM_METHOD_1_E2D8E94B87A09275_OFFSET UNITYSDK_OFFSET(0x17B48ED0)
#define RPG_CLIENT_PROPINSTANCETRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x17B48F30)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInstanceTransform_TypeDefinitionIndex = 70717;

	class PropInstanceTransform : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
		::UnityEngine::Vector3 Scale; // 0x2C
		::System::Boolean UsePosition; // 0x38
		::System::Boolean UseRotation; // 0x39
		::System::Boolean UseScale; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCETRANSFORM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 Method_1_9DBC9E6BCD10AD9A()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCETRANSFORM_METHOD_1_9DBC9E6BCD10AD9A_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 Method_1_8ACAC425340483C4(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCETRANSFORM_METHOD_1_8ACAC425340483C4_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCETRANSFORM_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_E2D8E94B87A09275(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCETRANSFORM_METHOD_1_E2D8E94B87A09275_OFFSET))(this, a1, a2, a3);
		}
	};
}
