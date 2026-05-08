#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D76210798CFC1F3.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_46128956637ED4E1_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C1F5350)
#define CLASS_2_46128956637ED4E1_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1C1F5340)
#define CLASS_2_46128956637ED4E1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1F5330)
#define CLASS_2_46128956637ED4E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F52F0)

inline static constexpr unsigned int Class_2_46128956637ED4E1_TypeDefinitionIndex = 26223;

class Class_2_46128956637ED4E1 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10
	::Enum_3_6D76210798CFC1F3 Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46128956637ED4E1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_46128956637ED4E1__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_46128956637ED4E1_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46128956637ED4E1_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
