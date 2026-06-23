#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63408CD90D50D6A5.h"
#include "unitysdk/Enum_3_ED3C378E7445DEC9.h"
#include "unitysdk/Struct_2_085FD3B183D8BFB9.h"
#include "unitysdk/Struct_2_6DC25772A3AD0E96.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_87;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_D053DCDA6D88DABA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CA25F30)
#define CLASS_3_D053DCDA6D88DABA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CA26010)
#define CLASS_3_D053DCDA6D88DABA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CA1EF40)
#define CLASS_3_D053DCDA6D88DABA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA25F10)

inline static constexpr unsigned int Class_3_D053DCDA6D88DABA_TypeDefinitionIndex = 28791;

class Class_3_D053DCDA6D88DABA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_D053DCDA6D88DABA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_0_16E4307DCC419505_87* a1, ::Struct_2_6DC25772A3AD0E96& a2, ::Struct_2_085FD3B183D8BFB9& a3, ::Enum_3_ED3C378E7445DEC9 a4, ::Enum_3_63408CD90D50D6A5 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_87*, ::Struct_2_6DC25772A3AD0E96&, ::Struct_2_085FD3B183D8BFB9&, ::Enum_3_ED3C378E7445DEC9, ::Enum_3_63408CD90D50D6A5))((::PBYTE)hIl2Cpp + CLASS_3_D053DCDA6D88DABA_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_87* a1, ::Struct_2_6DC25772A3AD0E96& a2, ::Struct_2_085FD3B183D8BFB9& a3, ::Enum_3_ED3C378E7445DEC9 a4, ::Enum_3_63408CD90D50D6A5 a5, ::System::AsyncCallback* a6, ::System::Object* a7)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_87*, ::Struct_2_6DC25772A3AD0E96&, ::Struct_2_085FD3B183D8BFB9&, ::Enum_3_ED3C378E7445DEC9, ::Enum_3_63408CD90D50D6A5, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D053DCDA6D88DABA_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void EndInvoke(::Struct_2_6DC25772A3AD0E96& a1, ::Struct_2_085FD3B183D8BFB9& a2, ::System::IAsyncResult* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6DC25772A3AD0E96&, ::Struct_2_085FD3B183D8BFB9&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_D053DCDA6D88DABA_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
