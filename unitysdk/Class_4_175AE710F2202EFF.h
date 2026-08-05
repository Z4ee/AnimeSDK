#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_175AE710F2202EFF_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x138C9A30)
#define CLASS_4_175AE710F2202EFF_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x138C9550)
#define CLASS_4_175AE710F2202EFF_METHOD_4_9D7A9451E63F9903_OFFSET UNITYSDK_OFFSET(0x138C9630)
#define CLASS_4_175AE710F2202EFF__CTOR_OFFSET UNITYSDK_OFFSET(0x138C9940)

inline static constexpr unsigned int Class_4_175AE710F2202EFF_TypeDefinitionIndex = 66380;

class Class_4_175AE710F2202EFF : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_175AE710F2202EFF__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_175AE710F2202EFF_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_9D7A9451E63F9903(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_175AE710F2202EFF_METHOD_4_9D7A9451E63F9903_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_175AE710F2202EFF_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
