#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01FD82FDF13C7F48.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_10EF7FB9B576FF14_METHOD_1_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x12255380)
#define CLASS_1_10EF7FB9B576FF14_METHOD_1_66A7FE2EF8041904_OFFSET UNITYSDK_OFFSET(0x12255430)
#define CLASS_1_10EF7FB9B576FF14__CTOR_OFFSET UNITYSDK_OFFSET(0x12255360)

inline static constexpr unsigned int Class_1_10EF7FB9B576FF14_TypeDefinitionIndex = 50930;

class Class_1_10EF7FB9B576FF14 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x10
	::Enum_3_01FD82FDF13C7F48 Field_1_0; // 0x18
	::System::Single Field_1_5; // 0x1C
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_1; // 0x24
	::System::Single Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10EF7FB9B576FF14__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10EF7FB9B576FF14_METHOD_1_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_1_66A7FE2EF8041904(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10EF7FB9B576FF14_METHOD_1_66A7FE2EF8041904_OFFSET))(this, a1);
	}
};
