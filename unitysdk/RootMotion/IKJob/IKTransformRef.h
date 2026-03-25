#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Space.h"

namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class Object; }

#define ROOTMOTION_IKJOB_IKTRANSFORMREF_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BD90)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x2B2D0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2A7E0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x2AD00)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x2AE80)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x2AEF0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x2B630)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOSSYSCALE_OFFSET UNITYSDK_OFFSET(0x2B0A0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x2B780)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x2AE00)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x2B480)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x2AFF0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_UP_OFFSET UNITYSDK_OFFSET(0x2B120)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_WORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x2B6B0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_INVERSETRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x2B970)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_INVERSETRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x2BBF0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x85F5DC0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x85F5DF0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_ROTATE_OFFSET UNITYSDK_OFFSET(0x2BD50)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x2AD40)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x2AED0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x2AF50)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x2AE50)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x2B060)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_TRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x2B7E0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_TRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x2BB20)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF__CCTOR_OFFSET UNITYSDK_OFFSET(0x85F5E40)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF__CTOR_OFFSET UNITYSDK_OFFSET(0x2BD80)

namespace RootMotion::IKJob
{
	inline static constexpr unsigned int IKTransformRef_TypeDefinitionIndex = 35174;

	struct alignas(8) IKTransformRef
	{
		static ::RootMotion::IKJob::IKTransformRef* StaticGet_Invalid()
		{
			return (::RootMotion::IKJob::IKTransformRef*)Il2CppClass::FromTypeDefinitionIndex(IKTransformRef_TypeDefinitionIndex)->GetStaticField(0x199A0);
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
