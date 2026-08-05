#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_99694305E6302C49_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x135D8300)
#define CLASS_4_99694305E6302C49_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x135D7C90)
#define CLASS_4_99694305E6302C49_METHOD_4_F637E7BBB4A3229E_OFFSET UNITYSDK_OFFSET(0x135D7D70)
#define CLASS_4_99694305E6302C49__CTOR_OFFSET UNITYSDK_OFFSET(0x135D8210)

inline static constexpr unsigned int Class_4_99694305E6302C49_TypeDefinitionIndex = 49612;

class Class_4_99694305E6302C49 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99694305E6302C49__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99694305E6302C49_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_F637E7BBB4A3229E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_99694305E6302C49_METHOD_4_F637E7BBB4A3229E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99694305E6302C49_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
