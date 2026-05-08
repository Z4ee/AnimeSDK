#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8;
namespace System { class String; }

#define CLASS_4_62958F5B255030E3_CLASS_1_14A60E1ECBDBCCB4_METHOD_1_07A48CE1AA24868D_OFFSET UNITYSDK_OFFSET(0x12B85F60)
#define CLASS_4_62958F5B255030E3_CLASS_1_14A60E1ECBDBCCB4_METHOD_1_136B3A366D0D45C9_OFFSET UNITYSDK_OFFSET(0x12B860E0)
#define CLASS_4_62958F5B255030E3_CLASS_1_14A60E1ECBDBCCB4__CTOR_OFFSET UNITYSDK_OFFSET(0x12B85F50)

inline static constexpr unsigned int Class_4_62958F5B255030E3_Class_1_14A60E1ECBDBCCB4_TypeDefinitionIndex = 43797;

class Class_4_62958F5B255030E3_Class_1_14A60E1ECBDBCCB4 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0x18
	::Class_1_07A210D994F284D8* Field_1_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_62958F5B255030E3_CLASS_1_14A60E1ECBDBCCB4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_07A48CE1AA24868D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_62958F5B255030E3_CLASS_1_14A60E1ECBDBCCB4_METHOD_1_07A48CE1AA24868D_OFFSET))(this, a1);
	}

	::System::Void Method_1_136B3A366D0D45C9(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_62958F5B255030E3_CLASS_1_14A60E1ECBDBCCB4_METHOD_1_136B3A366D0D45C9_OFFSET))(this, a1, a2);
	}
};
