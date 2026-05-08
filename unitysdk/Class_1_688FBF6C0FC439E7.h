#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_688FBF6C0FC439E7_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x10B8B470)
#define CLASS_1_688FBF6C0FC439E7_METHOD_1_8666A4DCA4CBDD7A_OFFSET UNITYSDK_OFFSET(0x10B8B500)
#define CLASS_1_688FBF6C0FC439E7_METHOD_1_D6CB6F5F3E75C218_OFFSET UNITYSDK_OFFSET(0x10B8B4B0)
#define CLASS_1_688FBF6C0FC439E7__CTOR_OFFSET UNITYSDK_OFFSET(0x10B8B460)

inline static constexpr unsigned int Class_1_688FBF6C0FC439E7_TypeDefinitionIndex = 67572;

class Class_1_688FBF6C0FC439E7 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_D6CB6F5F3E75C218(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_METHOD_1_D6CB6F5F3E75C218_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8666A4DCA4CBDD7A(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_METHOD_1_8666A4DCA4CBDD7A_OFFSET))(a1, a2);
	}
};
