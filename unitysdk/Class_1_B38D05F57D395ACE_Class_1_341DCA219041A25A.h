#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A_EQUALS_OFFSET UNITYSDK_OFFSET(0xF3E2530)
#define CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF3E25F0)
#define CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E2720)

inline static constexpr unsigned int Class_1_B38D05F57D395ACE_Class_1_341DCA219041A25A_TypeDefinitionIndex = 72859;

class Class_1_B38D05F57D395ACE_Class_1_341DCA219041A25A : public ::System::Object
{
public:
	::System::String* OENAMINOLLF; // 0x10
	::System::UInt32 BPINLJHDPKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A_GETHASHCODE_OFFSET))(this);
	}
};
