#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_99694305E6302C49_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12992FB0)
#define CLASS_4_99694305E6302C49_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12992940)
#define CLASS_4_99694305E6302C49_METHOD_4_F637E7BBB4A3229E_OFFSET UNITYSDK_OFFSET(0x12992A20)
#define CLASS_4_99694305E6302C49__CTOR_OFFSET UNITYSDK_OFFSET(0x12992EC0)

inline static constexpr unsigned int Class_4_99694305E6302C49_TypeDefinitionIndex = 46543;

class Class_4_99694305E6302C49 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_1; // 0x28
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x30

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
