#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_36.h"

class Class_1_D4EE696AE596E211;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_901CF5450014D7B2_METHOD_2_FBA8E1967CA6DCCD_OFFSET UNITYSDK_OFFSET(0x167F89F0)
#define CLASS_2_901CF5450014D7B2__CTOR_OFFSET UNITYSDK_OFFSET(0x167F9D80)

inline static constexpr unsigned int Class_2_901CF5450014D7B2_TypeDefinitionIndex = 42590;

class Class_2_901CF5450014D7B2 : public ::Class_1_43BD383C98B4C0C5_36
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_901CF5450014D7B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FBA8E1967CA6DCCD(::UnityEngine::Rendering::Volume* a1, ::System::Collections::Generic::List_1<::Class_1_D4EE696AE596E211*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::Class_1_D4EE696AE596E211*>*))((::PBYTE)hIl2Cpp + CLASS_2_901CF5450014D7B2_METHOD_2_FBA8E1967CA6DCCD_OFFSET))(this, a1, a2);
	}
};
