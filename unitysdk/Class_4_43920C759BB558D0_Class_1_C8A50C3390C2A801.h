#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_211;
namespace System { class String; }

#define CLASS_4_43920C759BB558D0_CLASS_1_C8A50C3390C2A801_METHOD_1_B81C7AB0B7DA1E63_OFFSET UNITYSDK_OFFSET(0x11399E00)
#define CLASS_4_43920C759BB558D0_CLASS_1_C8A50C3390C2A801__CTOR_OFFSET UNITYSDK_OFFSET(0x11399DF0)

inline static constexpr unsigned int Class_4_43920C759BB558D0_Class_1_C8A50C3390C2A801_TypeDefinitionIndex = 53788;

class Class_4_43920C759BB558D0_Class_1_C8A50C3390C2A801 : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_1; // 0x20
	::System::String* Field_1_3; // 0x50
	::System::String* Field_1_2; // 0x58
	::Struct_2_FE9BD044832BC9C3 Field_1_6; // 0x60
	::System::UInt32 Field_1_4; // 0x90
	::System::Int32 Field_1_5; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_43920C759BB558D0_CLASS_1_C8A50C3390C2A801__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B81C7AB0B7DA1E63(::System::Boolean a1, ::Class_3_025FF4981524A424_211* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_211*))((::PBYTE)hIl2Cpp + CLASS_4_43920C759BB558D0_CLASS_1_C8A50C3390C2A801_METHOD_1_B81C7AB0B7DA1E63_OFFSET))(this, a1, a2);
	}
};
