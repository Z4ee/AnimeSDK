#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_37D647C2B721164F_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11C1F740)
#define CLASS_4_37D647C2B721164F_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11C1EE70)
#define CLASS_4_37D647C2B721164F_METHOD_4_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x11C1EF50)
#define CLASS_4_37D647C2B721164F__CTOR_OFFSET UNITYSDK_OFFSET(0x11C1F650)

inline static constexpr unsigned int Class_4_37D647C2B721164F_TypeDefinitionIndex = 80403;

class Class_4_37D647C2B721164F : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_1; // 0x28
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_37D647C2B721164F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_37D647C2B721164F_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_37D647C2B721164F_METHOD_4_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_37D647C2B721164F_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
