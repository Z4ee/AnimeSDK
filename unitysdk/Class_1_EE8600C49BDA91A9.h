#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_EE8600C49BDA91A9_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0xAC20CE0)
#define CLASS_1_EE8600C49BDA91A9_METHOD_1_9A03733F1AEF05A2_OFFSET UNITYSDK_OFFSET(0xAC20C20)
#define CLASS_1_EE8600C49BDA91A9__CTOR_OFFSET UNITYSDK_OFFSET(0xAC20CB0)

inline static constexpr unsigned int Class_1_EE8600C49BDA91A9_TypeDefinitionIndex = 61689;

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

	::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE8600C49BDA91A9_METHOD_1_8F059A365E90744C_OFFSET))(this);
	}
};
