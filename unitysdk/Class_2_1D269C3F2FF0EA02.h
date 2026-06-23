#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_38.h"
#include "unitysdk/Enum_3_DF71DA21872A8AF5.h"
#include "unitysdk/Struct_2_255C416975F3EED8.h"
#include "unitysdk/Struct_2_9C9516EC1DA3BB28_1.h"
#include "unitysdk/Struct_2_EDB3A19738BDAA61.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_72B4371C7CF9949D;
class Class_1_FD31E4216DD30F97;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1D269C3F2FF0EA02_METHOD_2_0DD5A223C12DF330_OFFSET UNITYSDK_OFFSET(0x1A249520)
#define CLASS_2_1D269C3F2FF0EA02_METHOD_2_7B76336B4CE925CE_OFFSET UNITYSDK_OFFSET(0x1A249570)
#define CLASS_2_1D269C3F2FF0EA02_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A2494C0)
#define CLASS_2_1D269C3F2FF0EA02__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2494D0)

inline static constexpr unsigned int Class_2_1D269C3F2FF0EA02_TypeDefinitionIndex = 71902;

class Class_2_1D269C3F2FF0EA02 : public ::Class_1_43BD383C98B4C0C5_38
{
public:
	::Struct_2_9C9516EC1DA3BB28_1 Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D269C3F2FF0EA02__CTOR_OFFSET))(this);
	}

	::Enum_3_DF71DA21872A8AF5 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_DF71DA21872A8AF5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D269C3F2FF0EA02_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_0DD5A223C12DF330(::Class_1_72B4371C7CF9949D* a1, ::Struct_2_EDB3A19738BDAA61& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72B4371C7CF9949D*, ::Struct_2_EDB3A19738BDAA61&))((::PBYTE)hIl2Cpp + CLASS_2_1D269C3F2FF0EA02_METHOD_2_0DD5A223C12DF330_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*, ::System::Int32>> Method_2_7B76336B4CE925CE(::System::Collections::Generic::List_1<::Struct_2_255C416975F3EED8>* a1, ::Class_1_72B4371C7CF9949D* a2)
	{
		return ((::System::Nullable_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*, ::System::Int32>>(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_255C416975F3EED8>*, ::Class_1_72B4371C7CF9949D*))((::PBYTE)hIl2Cpp + CLASS_2_1D269C3F2FF0EA02_METHOD_2_7B76336B4CE925CE_OFFSET))(this, a1, a2);
	}
};
