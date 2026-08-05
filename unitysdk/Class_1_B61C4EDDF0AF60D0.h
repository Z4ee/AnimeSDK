#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_1.h"
#include "unitysdk/System/Object.h"

class Class_3_09CC5D2676B783CA;
namespace System { class String; }

#define CLASS_1_B61C4EDDF0AF60D0_COMPARETO_OFFSET UNITYSDK_OFFSET(0x14E37800)
#define CLASS_1_B61C4EDDF0AF60D0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E37870)

inline static constexpr unsigned int Class_1_B61C4EDDF0AF60D0_TypeDefinitionIndex = 84264;

class Class_1_B61C4EDDF0AF60D0 : public ::System::Object
{
public:
	::Class_3_09CC5D2676B783CA* Field_1_5; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Boolean Field_1_10; // 0x20
	::System::Boolean Field_1_7; // 0x21
	::System::Boolean Field_1_4; // 0x22
	::System::Int32 Field_1_6; // 0x24
	::Enum_3_F80BFD5B986D5503_1 Field_1_11; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61C4EDDF0AF60D0__CTOR_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_B61C4EDDF0AF60D0* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_B61C4EDDF0AF60D0*))((::PBYTE)hIl2Cpp + CLASS_1_B61C4EDDF0AF60D0_COMPARETO_OFFSET))(this, a1);
	}
};
