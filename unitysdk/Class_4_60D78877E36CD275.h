#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"

class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_60D78877E36CD275_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13A4CD10)
#define CLASS_4_60D78877E36CD275_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13A4C630)
#define CLASS_4_60D78877E36CD275_METHOD_4_5D8C2AC43865453F_OFFSET UNITYSDK_OFFSET(0x13A4CB30)
#define CLASS_4_60D78877E36CD275_METHOD_4_BB796128B44CEE44_OFFSET UNITYSDK_OFFSET(0x13A4C710)
#define CLASS_4_60D78877E36CD275__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4CC00)

inline static constexpr unsigned int Class_4_60D78877E36CD275_TypeDefinitionIndex = 80836;

class Class_4_60D78877E36CD275 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_60D78877E36CD275__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_60D78877E36CD275_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_BB796128B44CEE44(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_60D78877E36CD275_METHOD_4_BB796128B44CEE44_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_60D78877E36CD275_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_4_5D8C2AC43865453F(::Struct_2_FE9BD044832BC9C3 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_FE9BD044832BC9C3, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_60D78877E36CD275_METHOD_4_5D8C2AC43865453F_OFFSET))(this, a1, a2, a3);
	}
};
