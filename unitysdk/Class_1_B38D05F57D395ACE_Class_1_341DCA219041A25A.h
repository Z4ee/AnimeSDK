#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A_EQUALS_OFFSET UNITYSDK_OFFSET(0xE4718F0)
#define CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE4719B0)
#define CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A__CTOR_OFFSET UNITYSDK_OFFSET(0xE471AE0)
#define CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xE471AF0)
#define CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE471B00)

inline static constexpr unsigned int Class_1_B38D05F57D395ACE_Class_1_341DCA219041A25A_TypeDefinitionIndex = 68134;

class Class_1_B38D05F57D395ACE_Class_1_341DCA219041A25A : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

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

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B38D05F57D395ACE_CLASS_1_341DCA219041A25A___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
