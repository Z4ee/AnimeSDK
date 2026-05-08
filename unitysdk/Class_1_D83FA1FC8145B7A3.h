#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A03C9A14CD8D41B5;
class Class_2_6DE5FBED45BCAC88;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D83FA1FC8145B7A3_METHOD_1_0037F1CD5F511637_OFFSET UNITYSDK_OFFSET(0x106AC730)
#define CLASS_1_D83FA1FC8145B7A3_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x106AC550)
#define CLASS_1_D83FA1FC8145B7A3_METHOD_1_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0x13A15BA0)
#define CLASS_1_D83FA1FC8145B7A3_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x13A159E0)
#define CLASS_1_D83FA1FC8145B7A3__CTOR_OFFSET UNITYSDK_OFFSET(0x106AC540)

inline static constexpr unsigned int Class_1_D83FA1FC8145B7A3_TypeDefinitionIndex = 46419;

class Class_1_D83FA1FC8145B7A3 : public ::System::Object
{
public:
	::Class_2_6DE5FBED45BCAC88* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_A03C9A14CD8D41B5*>* Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_6DE5FBED45BCAC88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6DE5FBED45BCAC88*))((::PBYTE)hIl2Cpp + CLASS_1_D83FA1FC8145B7A3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_0037F1CD5F511637(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_D83FA1FC8145B7A3_METHOD_1_0037F1CD5F511637_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D83FA1FC8145B7A3_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D83FA1FC8145B7A3_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D83FA1FC8145B7A3_METHOD_1_825CC99DD653DEE0_OFFSET))(this);
	}
};
