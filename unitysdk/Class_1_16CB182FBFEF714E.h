#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_16CB182FBFEF714E_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x116AA9D0)
#define CLASS_1_16CB182FBFEF714E__CTOR_OFFSET UNITYSDK_OFFSET(0x116AA9C0)

inline static constexpr unsigned int Class_1_16CB182FBFEF714E_TypeDefinitionIndex = 72313;

class Class_1_16CB182FBFEF714E : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::Int32 Field_1_5; // 0x1C
	::System::UInt32 Field_1_1; // 0x20
	::System::Single Field_1_7; // 0x24
	::System::Single Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CB182FBFEF714E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CB182FBFEF714E_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
