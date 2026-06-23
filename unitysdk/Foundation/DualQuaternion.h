#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DualQuaternion_Policy.h"
#include "unitysdk/Foundation/Dual_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define FOUNDATION_DUALQUATERNION_CONJUGATE_OFFSET UNITYSDK_OFFSET(0x1E5EBDE0)
#define FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_ALL_OFFSET UNITYSDK_OFFSET(0xA6EB90)
#define FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_NORMALIZED_OFFSET UNITYSDK_OFFSET(0xA6EB90)
#define FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_ROTATION_OFFSET UNITYSDK_OFFSET(0x283610)
#define FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x283610)
#define FOUNDATION_DUALQUATERNION_GET_DUAL_OFFSET UNITYSDK_OFFSET(0x3E6590)
#define FOUNDATION_DUALQUATERNION_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0xA6DE90)
#define FOUNDATION_DUALQUATERNION_GET_REAL_OFFSET UNITYSDK_OFFSET(0x2ADAB0)
#define FOUNDATION_DUALQUATERNION_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x2ADAB0)
#define FOUNDATION_DUALQUATERNION_GET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0xA6DD60)
#define FOUNDATION_DUALQUATERNION_INVERSETRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0xA6E430)
#define FOUNDATION_DUALQUATERNION_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1E5EBD80)
#define FOUNDATION_DUALQUATERNION_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E5EBCD0)
#define FOUNDATION_DUALQUATERNION_NEGATE_OFFSET UNITYSDK_OFFSET(0x1E5EBDC0)
#define FOUNDATION_DUALQUATERNION_NEW_OFFSET UNITYSDK_OFFSET(0x1E5EBB10)
#define FOUNDATION_DUALQUATERNION_PLUS_OFFSET UNITYSDK_OFFSET(0x1E5EBC90)
#define FOUNDATION_DUALQUATERNION_SCALE_OFFSET UNITYSDK_OFFSET(0x1E5EBCB0)
#define FOUNDATION_DUALQUATERNION_TRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0xA6DFF0)
#define FOUNDATION_DUALQUATERNION_TRANSFORMVECTOR_OFFSET UNITYSDK_OFFSET(0xA6E870)
#define FOUNDATION_DUALQUATERNION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EC1D0)

namespace Foundation
{
	inline static constexpr unsigned int DualQuaternion_TypeDefinitionIndex = 8545;

	struct alignas(4) DualQuaternion
	{
		static ::Foundation::DualQuaternion* StaticGet_Identity()
		{
			return (::Foundation::DualQuaternion*)Il2CppClass::FromTypeDefinitionIndex(DualQuaternion_TypeDefinitionIndex)->GetStaticField(0x3CF0);
		}
		::Foundation::Dual_2<::UnityEngine::Quaternion, ::Foundation::DualQuaternion_Policy> _value; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION__CCTOR_OFFSET))();
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_GET_ROTATION_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 get_Translation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_GET_TRANSLATION_OFFSET))(this);
		}
		*/

		::UnityEngine::Quaternion get_Real()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_GET_REAL_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Dual()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_GET_DUAL_OFFSET))(this);
		}

		::Foundation::DualQuaternion get_Normalized()
		{
			return ((::Foundation::DualQuaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_GET_NORMALIZED_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 TransformPosition(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_TRANSFORMPOSITION_OFFSET))(this, position);
		}
		*/

		/*
		::UnityEngine::Vector3 InverseTransformPosition(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_INVERSETRANSFORMPOSITION_OFFSET))(this, position);
		}
		*/

		/*
		::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 vec)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_TRANSFORMVECTOR_OFFSET))(this, vec);
		}
		*/

		/*
		static ::Foundation::DualQuaternion New(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 translation)
		{
			return ((::Foundation::DualQuaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_NEW_OFFSET))(rotation, translation);
		}
		*/

		static ::UnityEngine::Quaternion Plus(::UnityEngine::Quaternion left, ::UnityEngine::Quaternion right)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_PLUS_OFFSET))(left, right);
		}

		static ::UnityEngine::Quaternion Scale(::UnityEngine::Quaternion value, ::System::Double scale)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_SCALE_OFFSET))(value, scale);
		}

		static ::UnityEngine::Quaternion Multiply(::UnityEngine::Quaternion left, ::UnityEngine::Quaternion right)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_MULTIPLY_OFFSET))(left, right);
		}

		static ::System::Double Magnitude(::UnityEngine::Quaternion value)
		{
			return ((::System::Double(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_MAGNITUDE_OFFSET))(value);
		}

		static ::UnityEngine::Quaternion Negate(::UnityEngine::Quaternion value)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_NEGATE_OFFSET))(value);
		}

		static ::UnityEngine::Quaternion Conjugate(::UnityEngine::Quaternion value)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_CONJUGATE_OFFSET))(value);
		}

		::System::Void DiagnosticCheck_Rotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_ROTATION_OFFSET))(this);
		}

		::System::Void DiagnosticCheck_Translation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_TRANSLATION_OFFSET))(this);
		}

		::System::Void DiagnosticCheck_Normalized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_NORMALIZED_OFFSET))(this);
		}

		::System::Void DiagnosticCheck_All()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_ALL_OFFSET))(this);
		}
	};
}
