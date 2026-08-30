#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class LookAtAdditiveCurveConstraint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_BDACDF5A33E990DF_METHOD_2_4EE3393A847658B4_OFFSET UNITYSDK_OFFSET(0x3AB53E0)
#define STRUCT_2_BDACDF5A33E990DF_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x3AB53A0)
#define STRUCT_2_BDACDF5A33E990DF_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x3AB53C0)

inline static constexpr unsigned int Struct_2_BDACDF5A33E990DF_TypeDefinitionIndex = 68451;

struct alignas(8) Struct_2_BDACDF5A33E990DF
{
	::System::Boolean KKJLMNLCMBK; // 0x10
	::System::Single JNPLKDGJJMC; // 0x14
	::System::Single APAKCBFMCAB; // 0x18
	::System::Single CONJAMJKHBI; // 0x1C
	::RPG::Client::LookAtAdditiveCurveConstraint* HJFFHBPCBNC; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_BDACDF5A33E990DF>* MBENLBACNCG; // 0x28

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BDACDF5A33E990DF_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BDACDF5A33E990DF_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	/*
	::System::Void Method_2_4EE3393A847658B4(::UnityEngine::Vector3& a1, ::RootMotion::IKJob::IKTransformRef a2, ::RootMotion::IKJob::IKTransformRef a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::RootMotion::IKJob::IKTransformRef, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + STRUCT_2_BDACDF5A33E990DF_METHOD_2_4EE3393A847658B4_OFFSET))(this, a1, a2, a3);
	}
	*/
};
