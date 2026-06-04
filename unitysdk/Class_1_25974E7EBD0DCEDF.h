#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_25974E7EBD0DCEDF_METHOD_1_0982610C6AB4B877_OFFSET UNITYSDK_OFFSET(0x13678720)
#define CLASS_1_25974E7EBD0DCEDF_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x136788E0)
#define CLASS_1_25974E7EBD0DCEDF_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x136787F0)
#define CLASS_1_25974E7EBD0DCEDF_METHOD_1_B877181B6123B7F6_1_OFFSET UNITYSDK_OFFSET(0x13678590)
#define CLASS_1_25974E7EBD0DCEDF_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x13678400)
#define CLASS_1_25974E7EBD0DCEDF__CTOR_OFFSET UNITYSDK_OFFSET(0x136789D0)

inline static constexpr unsigned int Class_1_25974E7EBD0DCEDF_TypeDefinitionIndex = 70798;

class Class_1_25974E7EBD0DCEDF : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::Il2CppArray<::System::String*>* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::String* Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25974E7EBD0DCEDF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25974E7EBD0DCEDF_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25974E7EBD0DCEDF_METHOD_1_B877181B6123B7F6_1_OFFSET))(this);
	}

	::System::Void Method_1_0982610C6AB4B877(::System::UInt32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_25974E7EBD0DCEDF_METHOD_1_0982610C6AB4B877_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25974E7EBD0DCEDF_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25974E7EBD0DCEDF_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}
};
