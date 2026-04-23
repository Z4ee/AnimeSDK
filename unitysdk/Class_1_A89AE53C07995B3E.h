#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define CLASS_1_A89AE53C07995B3E_METHOD_1_111B9AF80FD1A405_OFFSET UNITYSDK_OFFSET(0x911A4E0)
#define CLASS_1_A89AE53C07995B3E_METHOD_1_9DC8DFFDACA4486A_OFFSET UNITYSDK_OFFSET(0x911A130)
#define CLASS_1_A89AE53C07995B3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x911A870)

inline static constexpr unsigned int Class_1_A89AE53C07995B3E_TypeDefinitionIndex = 70875;

class Class_1_A89AE53C07995B3E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::UInt16>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A89AE53C07995B3E_TypeDefinitionIndex)->GetStaticField(0x62F20);
	}
	// static const ::System::Int32 Field_1_0 = 0x8; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A89AE53C07995B3E__CCTOR_OFFSET))();
	}

	static ::System::UInt16 Method_1_9DC8DFFDACA4486A(::System::ReadOnlySpan_1<::System::Byte> a1)
	{
		return ((::System::UInt16(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + CLASS_1_A89AE53C07995B3E_METHOD_1_9DC8DFFDACA4486A_OFFSET))(a1);
	}

	static ::System::Void Method_1_111B9AF80FD1A405(::System::Int32 a1, ::System::UInt16 a2, ::System::Span_1<::System::Byte> a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + CLASS_1_A89AE53C07995B3E_METHOD_1_111B9AF80FD1A405_OFFSET))(a1, a2, a3);
	}
};
