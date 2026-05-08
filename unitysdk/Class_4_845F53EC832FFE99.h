#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_845F53EC832FFE99_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x136617B0)
#define CLASS_4_845F53EC832FFE99_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13661CE0)
#define CLASS_4_845F53EC832FFE99_METHOD_4_71CEF9041F251366_OFFSET UNITYSDK_OFFSET(0x13661900)
#define CLASS_4_845F53EC832FFE99_METHOD_4_E82718B50EFFCD4F_OFFSET UNITYSDK_OFFSET(0x13661CF0)
#define CLASS_4_845F53EC832FFE99__CTOR_OFFSET UNITYSDK_OFFSET(0x13661B50)

inline static constexpr unsigned int Class_4_845F53EC832FFE99_TypeDefinitionIndex = 67905;

class Class_4_845F53EC832FFE99 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_2; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_845F53EC832FFE99__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_845F53EC832FFE99_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_71CEF9041F251366(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_845F53EC832FFE99_METHOD_4_71CEF9041F251366_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_845F53EC832FFE99_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_4_E82718B50EFFCD4F(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_4_845F53EC832FFE99_METHOD_4_E82718B50EFFCD4F_OFFSET))(a1);
	}
};
