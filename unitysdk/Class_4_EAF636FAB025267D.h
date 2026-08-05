#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_034E96628B18700D;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_EAF636FAB025267D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13CBC8F0)
#define CLASS_4_EAF636FAB025267D_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13CBC370)
#define CLASS_4_EAF636FAB025267D_METHOD_4_652514A15DC5E0CD_OFFSET UNITYSDK_OFFSET(0x13CBC450)
#define CLASS_4_EAF636FAB025267D_METHOD_4_EC5EE51A67FE2040_OFFSET UNITYSDK_OFFSET(0x13CBC660)
#define CLASS_4_EAF636FAB025267D__CTOR_OFFSET UNITYSDK_OFFSET(0x13CBC800)

inline static constexpr unsigned int Class_4_EAF636FAB025267D_TypeDefinitionIndex = 89760;

class Class_4_EAF636FAB025267D : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF636FAB025267D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF636FAB025267D_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_652514A15DC5E0CD(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_EAF636FAB025267D_METHOD_4_652514A15DC5E0CD_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF636FAB025267D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_EC5EE51A67FE2040(::System::String* a1, ::Class_2_034E96628B18700D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_034E96628B18700D*))((::PBYTE)hIl2Cpp + CLASS_4_EAF636FAB025267D_METHOD_4_EC5EE51A67FE2040_OFFSET))(this, a1, a2);
	}
};
