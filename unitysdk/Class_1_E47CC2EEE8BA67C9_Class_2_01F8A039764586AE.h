#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E47CC2EEE8BA67C9.h"

namespace System { class Random; }

#define CLASS_1_E47CC2EEE8BA67C9_CLASS_2_01F8A039764586AE_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1380E4D0)
#define CLASS_1_E47CC2EEE8BA67C9_CLASS_2_01F8A039764586AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1380E4C0)

inline static constexpr unsigned int Class_1_E47CC2EEE8BA67C9_Class_2_01F8A039764586AE_TypeDefinitionIndex = 55530;

class Class_1_E47CC2EEE8BA67C9_Class_2_01F8A039764586AE : public ::Class_1_E47CC2EEE8BA67C9
{
public:
	::System::Random* Field_2_0; // 0x10

	::System::Void _ctor(::System::Random* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + CLASS_1_E47CC2EEE8BA67C9_CLASS_2_01F8A039764586AE__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E47CC2EEE8BA67C9_CLASS_2_01F8A039764586AE_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
