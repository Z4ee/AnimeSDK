#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7DB659337E83C195_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14C63D40)
#define CLASS_1_7DB659337E83C195_METHOD_1_3D510574C32725B5_OFFSET UNITYSDK_OFFSET(0x14C63EA0)
#define CLASS_1_7DB659337E83C195_METHOD_1_EFC71CCB2118D33E_OFFSET UNITYSDK_OFFSET(0x14C63DE0)
#define CLASS_1_7DB659337E83C195__CTOR_OFFSET UNITYSDK_OFFSET(0x14C63C80)

inline static constexpr unsigned int Class_1_7DB659337E83C195_TypeDefinitionIndex = 78474;

class Class_1_7DB659337E83C195 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_E33A8767CD3B76C6>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DB659337E83C195__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DB659337E83C195_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_EFC71CCB2118D33E(::System::Int32 a1, ::Struct_2_E33A8767CD3B76C6& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Struct_2_E33A8767CD3B76C6&))((::PBYTE)hIl2Cpp + CLASS_1_7DB659337E83C195_METHOD_1_EFC71CCB2118D33E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D510574C32725B5(::System::Int32 a1, ::Struct_2_E33A8767CD3B76C6& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_E33A8767CD3B76C6&))((::PBYTE)hIl2Cpp + CLASS_1_7DB659337E83C195_METHOD_1_3D510574C32725B5_OFFSET))(this, a1, a2);
	}
};
