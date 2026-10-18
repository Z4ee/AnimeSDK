#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_C200329BA7837FF0_GET_REASON_OFFSET UNITYSDK_OFFSET(0x155C2600)
#define CLASS_2_C200329BA7837FF0__CTOR_OFFSET UNITYSDK_OFFSET(0x155C2610)

inline static constexpr unsigned int Class_2_C200329BA7837FF0_TypeDefinitionIndex = 69405;

class Class_2_C200329BA7837FF0 : public ::System::Exception
{
public:
	::System::String* _Reason_k__BackingField; // 0x88

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C200329BA7837FF0__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_Reason()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C200329BA7837FF0_GET_REASON_OFFSET))(this);
	}
};
