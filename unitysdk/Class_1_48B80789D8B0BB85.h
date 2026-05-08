#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_48B80789D8B0BB85_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xE898680)
#define CLASS_1_48B80789D8B0BB85_METHOD_1_22B983A93B65EF81_OFFSET UNITYSDK_OFFSET(0xE898600)
#define CLASS_1_48B80789D8B0BB85_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xE898560)
#define CLASS_1_48B80789D8B0BB85__CTOR_OFFSET UNITYSDK_OFFSET(0xE8984E0)

inline static constexpr unsigned int Class_1_48B80789D8B0BB85_TypeDefinitionIndex = 45981;

class Class_1_48B80789D8B0BB85 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48B80789D8B0BB85__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_48B80789D8B0BB85_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1_Enumerator<::System::Int32> Method_1_22B983A93B65EF81()
	{
		return ((::System::Collections::Generic::List_1_Enumerator<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48B80789D8B0BB85_METHOD_1_22B983A93B65EF81_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48B80789D8B0BB85_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}
};
