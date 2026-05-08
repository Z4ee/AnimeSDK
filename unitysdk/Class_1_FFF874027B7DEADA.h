#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_FFF874027B7DEADA_METHOD_1_080BB4C47E34A78C_OFFSET UNITYSDK_OFFSET(0xF93A380)
#define CLASS_1_FFF874027B7DEADA_METHOD_1_7ABAA176B11E9110_OFFSET UNITYSDK_OFFSET(0xF93A6E0)
#define CLASS_1_FFF874027B7DEADA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF93A7E0)
#define CLASS_1_FFF874027B7DEADA_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0xF93A780)
#define CLASS_1_FFF874027B7DEADA__CTOR_OFFSET UNITYSDK_OFFSET(0xF93A2F0)

inline static constexpr unsigned int Class_1_FFF874027B7DEADA_TypeDefinitionIndex = 58806;

class Class_1_FFF874027B7DEADA : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x32; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>* Field_1_4; // 0x10
	::UnityEngine::Vector3 Field_1_3; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x24

	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FFF874027B7DEADA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_080BB4C47E34A78C(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FFF874027B7DEADA_METHOD_1_080BB4C47E34A78C_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_7ABAA176B11E9110(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FFF874027B7DEADA_METHOD_1_7ABAA176B11E9110_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFF874027B7DEADA_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFF874027B7DEADA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
