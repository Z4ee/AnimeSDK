#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Version; }

#define CLASS_1_E2941FF108B64A11_METHOD_1_1AE1102521EDE743_OFFSET UNITYSDK_OFFSET(0x169A3350)
#define CLASS_1_E2941FF108B64A11_METHOD_1_DA60CB5E05823F9A_OFFSET UNITYSDK_OFFSET(0x169A3430)
#define CLASS_1_E2941FF108B64A11__CTOR_OFFSET UNITYSDK_OFFSET(0x169A34F0)

inline static constexpr unsigned int Class_1_E2941FF108B64A11_TypeDefinitionIndex = 76836;

class Class_1_E2941FF108B64A11 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2941FF108B64A11__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_1AE1102521EDE743(::System::Version* a1, ::System::Version* a2)
	{
		return ((::System::String*(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + CLASS_1_E2941FF108B64A11_METHOD_1_1AE1102521EDE743_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_DA60CB5E05823F9A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2941FF108B64A11_METHOD_1_DA60CB5E05823F9A_OFFSET))(a1, a2);
	}
};
