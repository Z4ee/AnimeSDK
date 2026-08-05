#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_38B6EF04A586223C.h"
#include "unitysdk/Enum_3_ED3C378E7445DEC9.h"
#include "unitysdk/Struct_2_085FD3B183D8BFB9.h"
#include "unitysdk/Struct_2_6DC25772A3AD0E96.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_101;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_D053DCDA6D88DABA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EDB2F90)
#define CLASS_3_D053DCDA6D88DABA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EDB3070)
#define CLASS_3_D053DCDA6D88DABA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EDB28D0)
#define CLASS_3_D053DCDA6D88DABA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDB28B0)

inline static constexpr unsigned int Class_3_D053DCDA6D88DABA_TypeDefinitionIndex = 29536;

class Class_3_D053DCDA6D88DABA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_D053DCDA6D88DABA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_0_16E4307DCC419505_101* a1, ::Struct_2_6DC25772A3AD0E96& a2, ::Struct_2_085FD3B183D8BFB9& a3, ::Enum_3_ED3C378E7445DEC9 a4, ::Enum_3_38B6EF04A586223C a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_101*, ::Struct_2_6DC25772A3AD0E96&, ::Struct_2_085FD3B183D8BFB9&, ::Enum_3_ED3C378E7445DEC9, ::Enum_3_38B6EF04A586223C))((::PBYTE)hIl2Cpp + CLASS_3_D053DCDA6D88DABA_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_101* a1, ::Struct_2_6DC25772A3AD0E96& a2, ::Struct_2_085FD3B183D8BFB9& a3, ::Enum_3_ED3C378E7445DEC9 a4, ::Enum_3_38B6EF04A586223C a5, ::System::AsyncCallback* a6, ::System::Object* a7)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_101*, ::Struct_2_6DC25772A3AD0E96&, ::Struct_2_085FD3B183D8BFB9&, ::Enum_3_ED3C378E7445DEC9, ::Enum_3_38B6EF04A586223C, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D053DCDA6D88DABA_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void EndInvoke(::Struct_2_6DC25772A3AD0E96& a1, ::Struct_2_085FD3B183D8BFB9& a2, ::System::IAsyncResult* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6DC25772A3AD0E96&, ::Struct_2_085FD3B183D8BFB9&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_D053DCDA6D88DABA_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
