#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }

#define CLASS_1_AF1FC46123F0237A_METHOD_1_C76FC70604A461E1_OFFSET UNITYSDK_OFFSET(0x18E797C0)
#define CLASS_1_AF1FC46123F0237A__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E79850)

inline static constexpr unsigned int Class_1_AF1FC46123F0237A_TypeDefinitionIndex = 50289;

class Class_1_AF1FC46123F0237A : public ::System::Object
{
public:
	static ::System::IDisposable** StaticGet_COAHELMPGLI()
	{
		return (::System::IDisposable**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AF1FC46123F0237A_TypeDefinitionIndex)->GetStaticField(0x47D80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AF1FC46123F0237A__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_C76FC70604A461E1(::System::IDisposable* a1)
	{
		return ((::System::Boolean(*)(::System::IDisposable*))((::PBYTE)hIl2Cpp + CLASS_1_AF1FC46123F0237A_METHOD_1_C76FC70604A461E1_OFFSET))(a1);
	}
};
