#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_405;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define CLASS_1_4AA296374FE02148_METHOD_1_12D5907B47EC4BD7_OFFSET UNITYSDK_OFFSET(0xDA94A50)
#define CLASS_1_4AA296374FE02148_METHOD_1_3E7771E09E2D7A92_OFFSET UNITYSDK_OFFSET(0xDA94DA0)
#define CLASS_1_4AA296374FE02148_METHOD_1_6C17062D5613F96D_OFFSET UNITYSDK_OFFSET(0xDA94950)
#define CLASS_1_4AA296374FE02148_METHOD_1_77AEE527F78C8D21_OFFSET UNITYSDK_OFFSET(0xDA94D50)
#define CLASS_1_4AA296374FE02148__CTOR_OFFSET UNITYSDK_OFFSET(0xDA95020)

inline static constexpr unsigned int Class_1_4AA296374FE02148_TypeDefinitionIndex = 50152;

class Class_1_4AA296374FE02148 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA296374FE02148__CTOR_OFFSET))(this);
	}

	::UnityEngine::Object* Method_1_6C17062D5613F96D(::System::String* a1, ::System::Type* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_4AA296374FE02148_METHOD_1_6C17062D5613F96D_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_405* Method_1_12D5907B47EC4BD7(::System::String* a1, ::System::Type* a2)
	{
		return ((::Class_0_16E4307DCC419505_405*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_4AA296374FE02148_METHOD_1_12D5907B47EC4BD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_77AEE527F78C8D21(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4AA296374FE02148_METHOD_1_77AEE527F78C8D21_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7771E09E2D7A92(::Class_0_16E4307DCC419505_405* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_405*))((::PBYTE)hIl2Cpp + CLASS_1_4AA296374FE02148_METHOD_1_3E7771E09E2D7A92_OFFSET))(this, a1);
	}
};
