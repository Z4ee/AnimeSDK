#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_52645FD19F442171_CLASS_1_2F3782216696FB0B_METHOD_1_D3CBCAFC7D372E83_OFFSET UNITYSDK_OFFSET(0x16C4C720)
#define CLASS_2_52645FD19F442171_CLASS_1_2F3782216696FB0B__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4C710)

inline static constexpr unsigned int Class_2_52645FD19F442171_Class_1_2F3782216696FB0B_TypeDefinitionIndex = 54805;

class Class_2_52645FD19F442171_Class_1_2F3782216696FB0B : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52645FD19F442171_CLASS_1_2F3782216696FB0B__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_D3CBCAFC7D372E83(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_52645FD19F442171_CLASS_1_2F3782216696FB0B_METHOD_1_D3CBCAFC7D372E83_OFFSET))(this, a1, a2);
	}
};
