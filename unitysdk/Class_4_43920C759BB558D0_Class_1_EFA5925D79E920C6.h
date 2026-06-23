#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_590;
namespace System { class String; }

#define CLASS_4_43920C759BB558D0_CLASS_1_EFA5925D79E920C6_METHOD_1_827DBEA7F1B0ADCC_OFFSET UNITYSDK_OFFSET(0x114E5170)
#define CLASS_4_43920C759BB558D0_CLASS_1_EFA5925D79E920C6__CTOR_OFFSET UNITYSDK_OFFSET(0x114E5160)

inline static constexpr unsigned int Class_4_43920C759BB558D0_Class_1_EFA5925D79E920C6_TypeDefinitionIndex = 54667;

class Class_4_43920C759BB558D0_Class_1_EFA5925D79E920C6 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::String* Field_1_2; // 0x18
	::Struct_2_FE9BD044832BC9C3 Field_1_1; // 0x20
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x50
	::Struct_2_FE9BD044832BC9C3 Field_1_6; // 0x60
	::System::UInt32 Field_1_4; // 0x90
	::System::Int32 Field_1_5; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_43920C759BB558D0_CLASS_1_EFA5925D79E920C6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_827DBEA7F1B0ADCC(::System::Boolean a1, ::Class_3_025FF4981524A424_590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_590*))((::PBYTE)hIl2Cpp + CLASS_4_43920C759BB558D0_CLASS_1_EFA5925D79E920C6_METHOD_1_827DBEA7F1B0ADCC_OFFSET))(this, a1, a2);
	}
};
