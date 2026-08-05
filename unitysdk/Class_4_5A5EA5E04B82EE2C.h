#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_5A5EA5E04B82EE2C_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x122DF980)
#define CLASS_4_5A5EA5E04B82EE2C_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x122DF220)
#define CLASS_4_5A5EA5E04B82EE2C_METHOD_4_4E72D2593CB19187_OFFSET UNITYSDK_OFFSET(0x122DF300)
#define CLASS_4_5A5EA5E04B82EE2C__CTOR_OFFSET UNITYSDK_OFFSET(0x122DF890)

inline static constexpr unsigned int Class_4_5A5EA5E04B82EE2C_TypeDefinitionIndex = 75713;

class Class_4_5A5EA5E04B82EE2C : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x28
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::Object*>*>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5A5EA5E04B82EE2C__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5A5EA5E04B82EE2C_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_4E72D2593CB19187(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_5A5EA5E04B82EE2C_METHOD_4_4E72D2593CB19187_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5A5EA5E04B82EE2C_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
