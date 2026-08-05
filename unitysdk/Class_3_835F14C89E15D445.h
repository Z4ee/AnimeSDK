#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_835F14C89E15D445_METHOD_3_0C53D5E3AF8561C4_OFFSET UNITYSDK_OFFSET(0x158F75B0)
#define CLASS_3_835F14C89E15D445_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x158F72F0)
#define CLASS_3_835F14C89E15D445_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x158F7CD0)
#define CLASS_3_835F14C89E15D445__CTOR_OFFSET UNITYSDK_OFFSET(0x158F7AD0)

inline static constexpr unsigned int Class_3_835F14C89E15D445_TypeDefinitionIndex = 74463;

class Class_3_835F14C89E15D445 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_5; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_0; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_7; // 0x40
	::Class_3_B537A0AA78803363* Field_3_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_835F14C89E15D445__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_835F14C89E15D445_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_0C53D5E3AF8561C4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_835F14C89E15D445_METHOD_3_0C53D5E3AF8561C4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_835F14C89E15D445_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
