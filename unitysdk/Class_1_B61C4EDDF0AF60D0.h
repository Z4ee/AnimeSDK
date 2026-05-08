#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8.h"
#include "unitysdk/System/Object.h"

class Class_3_4666E61F66433B1E;
namespace System { class String; }

#define CLASS_1_B61C4EDDF0AF60D0_COMPARETO_OFFSET UNITYSDK_OFFSET(0x113023F0)
#define CLASS_1_B61C4EDDF0AF60D0__CTOR_OFFSET UNITYSDK_OFFSET(0x11302450)

inline static constexpr unsigned int Class_1_B61C4EDDF0AF60D0_TypeDefinitionIndex = 55321;

class Class_1_B61C4EDDF0AF60D0 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_3_4666E61F66433B1E* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Boolean Field_1_5; // 0x24
	::System::Boolean Field_1_3; // 0x25
	::Enum_3_71AA90D596A09AC8 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61C4EDDF0AF60D0__CTOR_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_B61C4EDDF0AF60D0* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_B61C4EDDF0AF60D0*))((::PBYTE)hIl2Cpp + CLASS_1_B61C4EDDF0AF60D0_COMPARETO_OFFSET))(this, a1);
	}
};
