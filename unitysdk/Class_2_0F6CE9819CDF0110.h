#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine { class Animator; }

#define CLASS_2_0F6CE9819CDF0110_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xBA837F0)
#define CLASS_2_0F6CE9819CDF0110__CTOR_OFFSET UNITYSDK_OFFSET(0xBA838A0)
#define CLASS_2_0F6CE9819CDF0110__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA83790)

inline static constexpr unsigned int Class_2_0F6CE9819CDF0110_TypeDefinitionIndex = 71604;

class Class_2_0F6CE9819CDF0110 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Animator* CFNGLMDMENE; // 0x60
	::System::Int32 LGCHPLAJBKL; // 0x68
	::System::Int32 LANBHBALFOA; // 0x6C
	::System::Nullable_1<::System::Boolean> OGAGNOPLEIH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F6CE9819CDF0110__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F6CE9819CDF0110__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0F6CE9819CDF0110_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}
};
