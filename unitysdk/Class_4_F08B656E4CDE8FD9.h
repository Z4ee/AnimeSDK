#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_F08B656E4CDE8FD9_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x10C64AA0)
#define CLASS_4_F08B656E4CDE8FD9_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10C64690)
#define CLASS_4_F08B656E4CDE8FD9_METHOD_4_A0A296519EA398EC_OFFSET UNITYSDK_OFFSET(0x10C64770)
#define CLASS_4_F08B656E4CDE8FD9__CTOR_OFFSET UNITYSDK_OFFSET(0x10C649B0)

inline static constexpr unsigned int Class_4_F08B656E4CDE8FD9_TypeDefinitionIndex = 49256;

class Class_4_F08B656E4CDE8FD9 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F08B656E4CDE8FD9__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F08B656E4CDE8FD9_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_A0A296519EA398EC(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_F08B656E4CDE8FD9_METHOD_4_A0A296519EA398EC_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F08B656E4CDE8FD9_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
