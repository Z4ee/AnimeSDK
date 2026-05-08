#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_54B53C04E1CF3EFD_CLASS_1_DCBACEA739E5F945_METHOD_1_9A7CADA54FE8F27D_OFFSET UNITYSDK_OFFSET(0x13AD4120)
#define CLASS_1_54B53C04E1CF3EFD_CLASS_1_DCBACEA739E5F945_METHOD_1_C70A059F3E9BE83A_OFFSET UNITYSDK_OFFSET(0x13AD4410)
#define CLASS_1_54B53C04E1CF3EFD_CLASS_1_DCBACEA739E5F945__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD4110)

inline static constexpr unsigned int Class_1_54B53C04E1CF3EFD_Class_1_DCBACEA739E5F945_TypeDefinitionIndex = 72255;

class Class_1_54B53C04E1CF3EFD_Class_1_DCBACEA739E5F945 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54B53C04E1CF3EFD_CLASS_1_DCBACEA739E5F945__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A7CADA54FE8F27D(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_54B53C04E1CF3EFD_CLASS_1_DCBACEA739E5F945_METHOD_1_9A7CADA54FE8F27D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C70A059F3E9BE83A(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_54B53C04E1CF3EFD_CLASS_1_DCBACEA739E5F945_METHOD_1_C70A059F3E9BE83A_OFFSET))(this, a1, a2, a3);
	}
};
