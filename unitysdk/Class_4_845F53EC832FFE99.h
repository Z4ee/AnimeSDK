#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_845F53EC832FFE99_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12C38030)
#define CLASS_4_845F53EC832FFE99_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12C38610)
#define CLASS_4_845F53EC832FFE99_METHOD_4_71CEF9041F251366_OFFSET UNITYSDK_OFFSET(0x12C38180)
#define CLASS_4_845F53EC832FFE99_METHOD_4_E82718B50EFFCD4F_OFFSET UNITYSDK_OFFSET(0x12C38560)
#define CLASS_4_845F53EC832FFE99__CTOR_OFFSET UNITYSDK_OFFSET(0x12C383D0)

inline static constexpr unsigned int Class_4_845F53EC832FFE99_TypeDefinitionIndex = 84312;

class Class_4_845F53EC832FFE99 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_1; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_0; // 0x30
	::Class_3_CF43FA1E89397A1C* Field_4_2; // 0x38

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

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_4_E82718B50EFFCD4F(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_4_845F53EC832FFE99_METHOD_4_E82718B50EFFCD4F_OFFSET))(a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_845F53EC832FFE99_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
