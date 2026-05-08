#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8A7E6FB90F5A287E.h"
#include "unitysdk/System/Object.h"

class Class_1_BF85135934DD45B5;
class Class_2_3407002B0BC6E5ED;

#define CLASS_2_3407002B0BC6E5ED_CLASS_1_7276656F3A52D890_METHOD_1_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x13560010)
#define CLASS_2_3407002B0BC6E5ED_CLASS_1_7276656F3A52D890__CTOR_OFFSET UNITYSDK_OFFSET(0x13560000)

inline static constexpr unsigned int Class_2_3407002B0BC6E5ED_Class_1_7276656F3A52D890_TypeDefinitionIndex = 63073;

class Class_2_3407002B0BC6E5ED_Class_1_7276656F3A52D890 : public ::System::Object
{
public:
	::Class_2_3407002B0BC6E5ED* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::Struct_2_8A7E6FB90F5A287E Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3407002B0BC6E5ED_CLASS_1_7276656F3A52D890__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8CD1A6D1096A6CB7(::Class_1_BF85135934DD45B5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF85135934DD45B5*))((::PBYTE)hIl2Cpp + CLASS_2_3407002B0BC6E5ED_CLASS_1_7276656F3A52D890_METHOD_1_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}
};
