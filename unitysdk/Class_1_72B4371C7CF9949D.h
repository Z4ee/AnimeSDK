#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_72B4371C7CF9949D_Struct_2_5917F9CE06747D95.h"
#include "unitysdk/Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259.h"
#include "unitysdk/System/Object.h"

class Class_1_FD31E4216DD30F97;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_72B4371C7CF9949D_METHOD_1_1418872542F51B58_OFFSET UNITYSDK_OFFSET(0xD37DC70)
#define CLASS_1_72B4371C7CF9949D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD37E000)
#define CLASS_1_72B4371C7CF9949D_METHOD_1_6E036109306A7BD3_OFFSET UNITYSDK_OFFSET(0xD37DF50)
#define CLASS_1_72B4371C7CF9949D__CTOR_OFFSET UNITYSDK_OFFSET(0xD37DBB0)

inline static constexpr unsigned int Class_1_72B4371C7CF9949D_TypeDefinitionIndex = 43846;

class Class_1_72B4371C7CF9949D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_72B4371C7CF9949D_Struct_2_5917F9CE06747D95>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B4371C7CF9949D__CTOR_OFFSET))(this);
	}

	::Class_1_72B4371C7CF9949D_Struct_2_5917F9CE06747D95 Method_1_1418872542F51B58(::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259& a1)
	{
		return ((::Class_1_72B4371C7CF9949D_Struct_2_5917F9CE06747D95(*)(::PVOID, ::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259&))((::PBYTE)hIl2Cpp + CLASS_1_72B4371C7CF9949D_METHOD_1_1418872542F51B58_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E036109306A7BD3(::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*))((::PBYTE)hIl2Cpp + CLASS_1_72B4371C7CF9949D_METHOD_1_6E036109306A7BD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B4371C7CF9949D_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
