#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_40B7079B36B2CF84_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x17C223C0)
#define CLASS_4_40B7079B36B2CF84_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17C21EF0)
#define CLASS_4_40B7079B36B2CF84_1_METHOD_4_9D7A9451E63F9903_OFFSET UNITYSDK_OFFSET(0x17C21FD0)
#define CLASS_4_40B7079B36B2CF84_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C222D0)

inline static constexpr unsigned int Class_4_40B7079B36B2CF84_1_TypeDefinitionIndex = 77605;

class Class_4_40B7079B36B2CF84_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_40B7079B36B2CF84_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_40B7079B36B2CF84_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_9D7A9451E63F9903(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_40B7079B36B2CF84_1_METHOD_4_9D7A9451E63F9903_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_40B7079B36B2CF84_1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
