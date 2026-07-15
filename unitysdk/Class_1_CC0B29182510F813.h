#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CC0B29182510F813_METHOD_1_3C6CBBFA8E8A125D_OFFSET UNITYSDK_OFFSET(0x173B5FD0)
#define CLASS_1_CC0B29182510F813_METHOD_1_F2B94768004EB1C1_OFFSET UNITYSDK_OFFSET(0x173B60A0)
#define CLASS_1_CC0B29182510F813_METHOD_1_F6B48A42970B70C6_OFFSET UNITYSDK_OFFSET(0x173B6150)
#define CLASS_1_CC0B29182510F813__CTOR_OFFSET UNITYSDK_OFFSET(0x173B6090)

inline static constexpr unsigned int Class_1_CC0B29182510F813_TypeDefinitionIndex = 53468;

class Class_1_CC0B29182510F813 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC0B29182510F813__CTOR_OFFSET))(this);
	}

	static ::Class_1_CC0B29182510F813* Method_1_3C6CBBFA8E8A125D(::Class_1_45BB92167AED63A0_5* a1)
	{
		return ((::Class_1_CC0B29182510F813*(*)(::Class_1_45BB92167AED63A0_5*))((::PBYTE)hIl2Cpp + CLASS_1_CC0B29182510F813_METHOD_1_3C6CBBFA8E8A125D_OFFSET))(a1);
	}

	::Class_1_45BB92167AED63A0_5* Method_1_F2B94768004EB1C1()
	{
		return ((::Class_1_45BB92167AED63A0_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC0B29182510F813_METHOD_1_F2B94768004EB1C1_OFFSET))(this);
	}

	::Class_1_CC0B29182510F813* Method_1_F6B48A42970B70C6()
	{
		return ((::Class_1_CC0B29182510F813*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC0B29182510F813_METHOD_1_F6B48A42970B70C6_OFFSET))(this);
	}
};
