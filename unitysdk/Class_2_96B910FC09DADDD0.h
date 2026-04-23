#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D96CF3F32F0BF24C.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_96B910FC09DADDD0_CLEAR_OFFSET UNITYSDK_OFFSET(0x1182D3F0)
#define CLASS_2_96B910FC09DADDD0_METHOD_2_A2D040DE220C51C7_1_OFFSET UNITYSDK_OFFSET(0x1182D7B0)
#define CLASS_2_96B910FC09DADDD0_METHOD_2_A2D040DE220C51C7_OFFSET UNITYSDK_OFFSET(0x1182D480)
#define CLASS_2_96B910FC09DADDD0__CTOR_OFFSET UNITYSDK_OFFSET(0x1182DAE0)
#define CLASS_2_96B910FC09DADDD0___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1182DB40)

inline static constexpr unsigned int Class_2_96B910FC09DADDD0_TypeDefinitionIndex = 70115;

class Class_2_96B910FC09DADDD0 : public ::Class_1_D96CF3F32F0BF24C
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B910FC09DADDD0__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B910FC09DADDD0_CLEAR_OFFSET))(this);
	}

	::System::String* Method_2_A2D040DE220C51C7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_96B910FC09DADDD0_METHOD_2_A2D040DE220C51C7_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_A2D040DE220C51C7_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_96B910FC09DADDD0_METHOD_2_A2D040DE220C51C7_1_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B910FC09DADDD0___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
