#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_498;
namespace System { class String; }

#define CLASS_4_43920C759BB558D0_1_CLASS_1_9810198BE8D51D60_METHOD_1_FA0FF64E94D7A53A_OFFSET UNITYSDK_OFFSET(0x109868D0)
#define CLASS_4_43920C759BB558D0_1_CLASS_1_9810198BE8D51D60__CTOR_OFFSET UNITYSDK_OFFSET(0x109868C0)

inline static constexpr unsigned int Class_4_43920C759BB558D0_1_Class_1_9810198BE8D51D60_TypeDefinitionIndex = 88788;

class Class_4_43920C759BB558D0_1_Class_1_9810198BE8D51D60 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x18
	::Struct_2_FE9BD044832BC9C3 Field_1_7; // 0x28
	::System::String* Field_1_5; // 0x58
	::Struct_2_FE9BD044832BC9C3 Field_1_10; // 0x60
	::System::UInt32 Field_1_4; // 0x90
	::System::Int32 Field_1_11; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_43920C759BB558D0_1_CLASS_1_9810198BE8D51D60__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FA0FF64E94D7A53A(::System::Boolean a1, ::Class_3_025FF4981524A424_498* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_498*))((::PBYTE)hIl2Cpp + CLASS_4_43920C759BB558D0_1_CLASS_1_9810198BE8D51D60_METHOD_1_FA0FF64E94D7A53A_OFFSET))(this, a1, a2);
	}
};
