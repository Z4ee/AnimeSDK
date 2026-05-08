#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_0E846B689DE3EFD2;
class Class_3_B537A0AA78803363;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_4F809DD470DA274D_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x122C0DA0)
#define CLASS_4_4F809DD470DA274D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x122C18C0)
#define CLASS_4_4F809DD470DA274D_METHOD_4_26890294175BB20B_OFFSET UNITYSDK_OFFSET(0x122C13C0)
#define CLASS_4_4F809DD470DA274D_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x122C1010)
#define CLASS_4_4F809DD470DA274D_METHOD_4_83AC15C9B4E11579_OFFSET UNITYSDK_OFFSET(0x122C1580)
#define CLASS_4_4F809DD470DA274D_METHOD_4_A08DEEEE1A01931E_OFFSET UNITYSDK_OFFSET(0x122C1080)
#define CLASS_4_4F809DD470DA274D__CTOR_OFFSET UNITYSDK_OFFSET(0x122C1180)

inline static constexpr unsigned int Class_4_4F809DD470DA274D_TypeDefinitionIndex = 60405;

class Class_4_4F809DD470DA274D : public ::Class_3_F3948D237059FA7A
{
public:
	// static const ::System::String* Field_4_6; // 0x0
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x28
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* Field_4_3; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_2; // 0x38
	::Class_3_B537A0AA78803363* Field_4_4; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x48
	::Class_3_B537A0AA78803363* Field_4_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_A08DEEEE1A01931E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_A08DEEEE1A01931E_OFFSET))(this, a1);
	}

	::Class_1_0E846B689DE3EFD2* Method_4_26890294175BB20B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::Class_1_0E846B689DE3EFD2*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_26890294175BB20B_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_83AC15C9B4E11579(::Class_1_0E846B689DE3EFD2* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E846B689DE3EFD2*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_4F809DD470DA274D_METHOD_4_83AC15C9B4E11579_OFFSET))(this, a1, a2);
	}
};
