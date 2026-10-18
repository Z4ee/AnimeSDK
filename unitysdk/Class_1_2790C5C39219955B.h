#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define CLASS_1_2790C5C39219955B_METHOD_1_3ADA7E4D417FFA25_OFFSET UNITYSDK_OFFSET(0x16610E70)
#define CLASS_1_2790C5C39219955B_METHOD_1_C9D785B43AD5CD73_OFFSET UNITYSDK_OFFSET(0x16610AF0)
#define CLASS_1_2790C5C39219955B__CCTOR_OFFSET UNITYSDK_OFFSET(0x166111E0)

inline static constexpr unsigned int Class_1_2790C5C39219955B_TypeDefinitionIndex = 77168;

class Class_1_2790C5C39219955B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::UInt16>** StaticGet_EFKAFBDADME()
	{
		return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2790C5C39219955B_TypeDefinitionIndex)->GetStaticField(0x2120);
	}
	// static const ::System::Int32 OFPBCBONGCP = 0x8; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2790C5C39219955B__CCTOR_OFFSET))();
	}

	static ::System::UInt16 Method_1_C9D785B43AD5CD73(::System::ReadOnlySpan_1<::System::Byte> a1)
	{
		return ((::System::UInt16(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + CLASS_1_2790C5C39219955B_METHOD_1_C9D785B43AD5CD73_OFFSET))(a1);
	}

	static ::System::Void Method_1_3ADA7E4D417FFA25(::System::Int32 a1, ::System::UInt16 a2, ::System::Span_1<::System::Byte> a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + CLASS_1_2790C5C39219955B_METHOD_1_3ADA7E4D417FFA25_OFFSET))(a1, a2, a3);
	}
};
