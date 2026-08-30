#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C0F155CE9B39D399_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1C3AD130)
#define CLASS_1_C0F155CE9B39D399__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AD180)

inline static constexpr unsigned int Class_1_C0F155CE9B39D399_TypeDefinitionIndex = 42068;

class Class_1_C0F155CE9B39D399 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* AJPFKOLEMOL; // 0x10
	::System::Single EIBIDIGKJIG; // 0x18
	::System::Single KIPAGNCANAJ; // 0x1C
	::System::Int32 AIAMODBPFJI; // 0x20
	::System::UInt32 PHFMCACHFIJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0F155CE9B39D399__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0F155CE9B39D399_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
