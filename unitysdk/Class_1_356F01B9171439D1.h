#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7FB1976AEB7689C7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9C4E0E0141829F67;
namespace System { class String; }

#define CLASS_1_356F01B9171439D1_METHOD_1_A7F0DC7F81309ECC_OFFSET UNITYSDK_OFFSET(0x18B9BE00)
#define CLASS_1_356F01B9171439D1_METHOD_1_EF1667C9618091B5_OFFSET UNITYSDK_OFFSET(0x18B9BF10)
#define CLASS_1_356F01B9171439D1_METHOD_1_FE2F4F14C95C9D0B_OFFSET UNITYSDK_OFFSET(0x18B9BFE0)
#define CLASS_1_356F01B9171439D1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9BD00)

inline static constexpr unsigned int Class_1_356F01B9171439D1_TypeDefinitionIndex = 79323;

class Class_1_356F01B9171439D1 : public ::System::Object
{
public:
	::System::String* LDNLKDCNEBJ; // 0x10
	::UnityEngine::Vector3 ILKFLOGDICE; // 0x18
	::System::Single HBDJCFFDGDD; // 0x24

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_356F01B9171439D1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_7FB1976AEB7689C7 Method_1_A7F0DC7F81309ECC()
	{
		return ((::Struct_2_7FB1976AEB7689C7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_356F01B9171439D1_METHOD_1_A7F0DC7F81309ECC_OFFSET))(this);
	}

	::Struct_2_7FB1976AEB7689C7 Method_1_FE2F4F14C95C9D0B(::System::Single a1)
	{
		return ((::Struct_2_7FB1976AEB7689C7(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_356F01B9171439D1_METHOD_1_FE2F4F14C95C9D0B_OFFSET))(this, a1);
	}

	::Class_2_9C4E0E0141829F67* Method_1_EF1667C9618091B5(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_356F01B9171439D1_METHOD_1_EF1667C9618091B5_OFFSET))(this, a1, a2);
	}
};
