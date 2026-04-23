#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Space.h"

namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class Object; }

#define ROOTMOTION_IKJOB_IKTRANSFORMREF_EQUALS_OFFSET UNITYSDK_OFFSET(0x31390)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x308D0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2B1B0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x30300)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x30480)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x304F0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x30C30)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOSSYSCALE_OFFSET UNITYSDK_OFFSET(0x306A0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x30D80)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x30400)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x30A80)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x305F0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_UP_OFFSET UNITYSDK_OFFSET(0x30720)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_WORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x30CB0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_INVERSETRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x30F70)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_INVERSETRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x311F0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x8E4EF90)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x8E4EFC0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_ROTATE_OFFSET UNITYSDK_OFFSET(0x31350)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x30340)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x304D0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x30550)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x30450)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x30660)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_TRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x30DE0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_TRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x31120)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E4F010)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF__CTOR_OFFSET UNITYSDK_OFFSET(0x31380)

namespace RootMotion::IKJob
{
	inline static constexpr unsigned int IKTransformRef_TypeDefinitionIndex = 41000;

	struct alignas(8) IKTransformRef
	{
		static ::RootMotion::IKJob::IKTransformRef* StaticGet_Invalid()
		{
			return (::RootMotion::IKJob::IKTransformRef*)Il2CppClass::FromTypeDefinitionIndex(IKTransformRef_TypeDefinitionIndex)->GetStaticField(0x1590);
		}
		::System::Int32 _Index; // 0x10
		::RootMotion::IKJob::IKThreadProxyContext* _Context; // 0x18

		::System::Void _ctor(::System::Int32 index, ::RootMotion::IKJob::IKThreadProxyContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RootMotion::IKJob::IKThreadProxyContext*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF__CTOR_OFFSET))(this, index, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_ISVALID_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 get_LocalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALPOSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_LocalPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALPOSITION_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_POSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_POSITION_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Quaternion get_LocalRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALROTATION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_LocalRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALROTATION_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 get_LocalScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALSCALE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_LocalScale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALSCALE_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_ROTATION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_ROTATION_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 get_LossyScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOSSYSCALE_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 get_Up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_UP_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_FORWARD_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 get_Right()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_RIGHT_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Matrix4x4 get_LocalToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALTOWORLDMATRIX_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Matrix4x4 get_WorldToLocalMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_WORLDTOLOCALMATRIX_OFFSET))(this);
		}
		*/

		::RootMotion::IKJob::IKTransformRef get_Parent()
		{
			return ((::RootMotion::IKJob::IKTransformRef(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_PARENT_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_TRANSFORMDIRECTION_OFFSET))(this, vector);
		}
		*/

		/*
		::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_INVERSETRANSFORMDIRECTION_OFFSET))(this, vector);
		}
		*/

		/*
		::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_TRANSFORMPOINT_OFFSET))(this, point);
		}
		*/

		/*
		::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_INVERSETRANSFORMPOINT_OFFSET))(this, point);
		}
		*/

		/*
		::System::Void Rotate(::UnityEngine::Vector3 axis, ::System::Single angle, ::UnityEngine::Space relativeTo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_ROTATE_OFFSET))(this, axis, angle, relativeTo);
		}
		*/

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RootMotion::IKJob::IKTransformRef a, ::RootMotion::IKJob::IKTransformRef b)
		{
			return ((::System::Boolean(*)(::RootMotion::IKJob::IKTransformRef, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::RootMotion::IKJob::IKTransformRef a, ::RootMotion::IKJob::IKTransformRef b)
		{
			return ((::System::Boolean(*)(::RootMotion::IKJob::IKTransformRef, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_OP_INEQUALITY_OFFSET))(a, b);
		}
	};
}
