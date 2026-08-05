#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_38B6EF04A586223C.h"
#include "unitysdk/Struct_2_085FD3B183D8BFB9.h"
#include "unitysdk/Struct_2_6DC25772A3AD0E96.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_101;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_578C1C713BCD1D2D_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F05DB80)
#define CLASS_3_578C1C713BCD1D2D_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F05DC20)
#define CLASS_3_578C1C713BCD1D2D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F05D5B0)
#define CLASS_3_578C1C713BCD1D2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1F05D590)

inline static constexpr unsigned int Class_3_578C1C713BCD1D2D_TypeDefinitionIndex = 29475;

class Class_3_578C1C713BCD1D2D : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_578C1C713BCD1D2D__CTOR_OFFSET))(this, a1, a2);
	}

	::Enum_3_38B6EF04A586223C Invoke(::Class_0_16E4307DCC419505_101* a1, ::Struct_2_6DC25772A3AD0E96& a2, ::Struct_2_085FD3B183D8BFB9& a3)
	{
		return ((::Enum_3_38B6EF04A586223C(*)(::PVOID, ::Class_0_16E4307DCC419505_101*, ::Struct_2_6DC25772A3AD0E96&, ::Struct_2_085FD3B183D8BFB9&))((::PBYTE)hIl2Cpp + CLASS_3_578C1C713BCD1D2D_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_101* a1, ::Struct_2_6DC25772A3AD0E96& a2, ::Struct_2_085FD3B183D8BFB9& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_101*, ::Struct_2_6DC25772A3AD0E96&, ::Struct_2_085FD3B183D8BFB9&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_578C1C713BCD1D2D_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Enum_3_38B6EF04A586223C EndInvoke(::Struct_2_6DC25772A3AD0E96& a1, ::Struct_2_085FD3B183D8BFB9& a2, ::System::IAsyncResult* a3)
	{
		return ((::Enum_3_38B6EF04A586223C(*)(::PVOID, ::Struct_2_6DC25772A3AD0E96&, ::Struct_2_085FD3B183D8BFB9&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_578C1C713BCD1D2D_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
