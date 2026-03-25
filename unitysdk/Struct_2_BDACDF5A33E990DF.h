#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class LookAtAdditiveCurveConstraint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_BDACDF5A33E990DF_METHOD_2_4EE3393A847658B4_OFFSET UNITYSDK_OFFSET(0xA8EA10)
#define STRUCT_2_BDACDF5A33E990DF_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xA8E9D0)
#define STRUCT_2_BDACDF5A33E990DF_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xA8E9F0)

inline static constexpr unsigned int Struct_2_BDACDF5A33E990DF_TypeDefinitionIndex = 55915;

struct alignas(8) Struct_2_BDACDF5A33E990DF
{
	::System::Boolean Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::RPG::Client::LookAtAdditiveCurveConstraint* Field_2_4; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_BDACDF5A33E990DF>* Field_2_5; // 0x28

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
