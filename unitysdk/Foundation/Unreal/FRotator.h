#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FOUNDATION_UNREAL_FROTATOR_DIAGNOSTICCHECKNAN_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define FOUNDATION_UNREAL_FROTATOR_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x8EAA70)
#define FOUNDATION_UNREAL_FROTATOR_GETROUNDED_OFFSET UNITYSDK_OFFSET(0x8EA810)
#define FOUNDATION_UNREAL_FROTATOR_GET_PITCH_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define FOUNDATION_UNREAL_FROTATOR_GET_ROLL_OFFSET UNITYSDK_OFFSET(0x3AB430)
#define FOUNDATION_UNREAL_FROTATOR_GET_YAW_OFFSET UNITYSDK_OFFSET(0x3AA590)
#define FOUNDATION_UNREAL_FROTATOR_NEW_1_OFFSET UNITYSDK_OFFSET(0x1A5C88A0)
#define FOUNDATION_UNREAL_FROTATOR_NEW_OFFSET UNITYSDK_OFFSET(0x1A5C8880)
#define FOUNDATION_UNREAL_FROTATOR_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1A5C9010)
#define FOUNDATION_UNREAL_FROTATOR_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1A5C9070)
#define FOUNDATION_UNREAL_FROTATOR_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1A5C9040)
#define FOUNDATION_UNREAL_FROTATOR_SET_PITCH_OFFSET UNITYSDK_OFFSET(0x2E7CE0)
#define FOUNDATION_UNREAL_FROTATOR_SET_ROLL_OFFSET UNITYSDK_OFFSET(0x50C890)
#define FOUNDATION_UNREAL_FROTATOR_SET_YAW_OFFSET UNITYSDK_OFFSET(0x50C880)
#define FOUNDATION_UNREAL_FROTATOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8EAAD0)
#define FOUNDATION_UNREAL_FROTATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5C9090)
#define FOUNDATION_UNREAL_FROTATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x494CF0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FRotator_TypeDefinitionIndex = 8905;

	struct alignas(4) FRotator
	{
		static ::Foundation::Unreal::FRotator* StaticGet_zero()
		{
			return (::Foundation::Unreal::FRotator*)Il2CppClass::FromTypeDefinitionIndex(FRotator_TypeDefinitionIndex)->GetStaticField(0x3FA0);
		}
		::System::Single pitch; // 0x10
		::System::Single yaw; // 0x14
		::System::Single roll; // 0x18

		::System::Void _ctor(::System::Single pitch, ::System::Single yaw, ::System::Single roll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR__CTOR_OFFSET))(this, pitch, yaw, roll);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR__CCTOR_OFFSET))();
		}

		::System::Single get_Pitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_GET_PITCH_OFFSET))(this);
		}

		::System::Void set_Pitch(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_SET_PITCH_OFFSET))(this, value);
		}

		::System::Single get_Yaw()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_GET_YAW_OFFSET))(this);
		}

		::System::Void set_Yaw(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_SET_YAW_OFFSET))(this, value);
		}

		::System::Single get_Roll()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_GET_ROLL_OFFSET))(this);
		}

		::System::Void set_Roll(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_SET_ROLL_OFFSET))(this, value);
		}

		::System::Void DiagnosticCheckNaN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_DIAGNOSTICCHECKNAN_OFFSET))(this);
		}

		static ::Foundation::Unreal::FRotator New(::System::Single pitch, ::System::Single yaw, ::System::Single roll)
		{
			return ((::Foundation::Unreal::FRotator(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_NEW_OFFSET))(pitch, yaw, roll);
		}

		/*
		static ::Foundation::Unreal::FRotator New_1(::UnityEngine::Quaternion& quat)
		{
			return ((::Foundation::Unreal::FRotator(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_NEW_1_OFFSET))(quat);
		}
		*/

		::Foundation::Unreal::FRotator GetRounded()
		{
			return ((::Foundation::Unreal::FRotator(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_GETROUNDED_OFFSET))(this);
		}

		/*
		::UnityEngine::Quaternion GetQuaternion()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_GETQUATERNION_OFFSET))(this);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_TOSTRING_OFFSET))(this);
		}

		static ::Foundation::Unreal::FRotator op_Addition(::Foundation::Unreal::FRotator left, ::Foundation::Unreal::FRotator right)
		{
			return ((::Foundation::Unreal::FRotator(*)(::Foundation::Unreal::FRotator, ::Foundation::Unreal::FRotator))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_OP_ADDITION_OFFSET))(left, right);
		}

		static ::Foundation::Unreal::FRotator op_Subtraction(::Foundation::Unreal::FRotator left, ::Foundation::Unreal::FRotator right)
		{
			return ((::Foundation::Unreal::FRotator(*)(::Foundation::Unreal::FRotator, ::Foundation::Unreal::FRotator))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_OP_SUBTRACTION_OFFSET))(left, right);
		}

		static ::Foundation::Unreal::FRotator op_Multiply(::Foundation::Unreal::FRotator rotator, ::System::Single multiplier)
		{
			return ((::Foundation::Unreal::FRotator(*)(::Foundation::Unreal::FRotator, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FROTATOR_OP_MULTIPLY_OFFSET))(rotator, multiplier);
		}
	};
}
