#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_0C5AA4FFDA326C45_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1596FFC0)
#define CLASS_4_0C5AA4FFDA326C45_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1596FA80)
#define CLASS_4_0C5AA4FFDA326C45_1_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x1596FB60)
#define CLASS_4_0C5AA4FFDA326C45_1_METHOD_4_9F2ED0595DBE2FA1_OFFSET UNITYSDK_OFFSET(0x1596FBD0)
#define CLASS_4_0C5AA4FFDA326C45_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1596FED0)

inline static constexpr unsigned int Class_4_0C5AA4FFDA326C45_1_TypeDefinitionIndex = 67121;

class Class_4_0C5AA4FFDA326C45_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C5AA4FFDA326C45_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C5AA4FFDA326C45_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_0C5AA4FFDA326C45_1_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C5AA4FFDA326C45_1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_4_9F2ED0595DBE2FA1(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_0C5AA4FFDA326C45_1_METHOD_4_9F2ED0595DBE2FA1_OFFSET))(this, a1);
	}
};
