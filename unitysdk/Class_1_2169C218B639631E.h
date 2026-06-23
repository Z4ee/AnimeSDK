#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_2169C218B639631E_METHOD_1_7ABAA176B11E9110_OFFSET UNITYSDK_OFFSET(0x180887E0)
#define CLASS_1_2169C218B639631E_METHOD_1_AF2D6C0C63EE9B7E_OFFSET UNITYSDK_OFFSET(0x180884D0)
#define CLASS_1_2169C218B639631E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x180888E0)
#define CLASS_1_2169C218B639631E_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x18088880)
#define CLASS_1_2169C218B639631E__CTOR_OFFSET UNITYSDK_OFFSET(0x18088440)

inline static constexpr unsigned int Class_1_2169C218B639631E_TypeDefinitionIndex = 58825;

class Class_1_2169C218B639631E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x32; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>* Field_1_4; // 0x10
	::UnityEngine::Vector3 Field_1_3; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x24

	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2169C218B639631E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF2D6C0C63EE9B7E(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2169C218B639631E_METHOD_1_AF2D6C0C63EE9B7E_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_7ABAA176B11E9110(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2169C218B639631E_METHOD_1_7ABAA176B11E9110_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2169C218B639631E_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2169C218B639631E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
