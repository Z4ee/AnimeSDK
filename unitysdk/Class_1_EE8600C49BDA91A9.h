#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_EE8600C49BDA91A9_METHOD_1_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x92F7480)
#define CLASS_1_EE8600C49BDA91A9_METHOD_1_9A03733F1AEF05A2_OFFSET UNITYSDK_OFFSET(0x92F73C0)
#define CLASS_1_EE8600C49BDA91A9__CTOR_OFFSET UNITYSDK_OFFSET(0x92F7450)

inline static constexpr unsigned int Class_1_EE8600C49BDA91A9_TypeDefinitionIndex = 60755;

class Class_1_EE8600C49BDA91A9 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE8600C49BDA91A9__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_EE8600C49BDA91A9* Method_1_9A03733F1AEF05A2(::System::String* a1)
	{
		return ((::Class_1_EE8600C49BDA91A9*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE8600C49BDA91A9_METHOD_1_9A03733F1AEF05A2_OFFSET))(a1);
	}

	::System::Boolean Method_1_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE8600C49BDA91A9_METHOD_1_84EAB34EABC7F508_OFFSET))(this);
	}
};
