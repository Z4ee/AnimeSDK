#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4666E61F66433B1E;
class Class_3_88ECEB7D5F9A93BA_4;
namespace System { class String; }

#define CLASS_1_7141F52C32C1D31C_METHOD_1_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x10E9CF60)
#define CLASS_1_7141F52C32C1D31C__CTOR_OFFSET UNITYSDK_OFFSET(0x10E9CF50)

inline static constexpr unsigned int Class_1_7141F52C32C1D31C_TypeDefinitionIndex = 72539;

class Class_1_7141F52C32C1D31C : public ::System::Object
{
public:
	::Class_3_4666E61F66433B1E* Field_1_3; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7141F52C32C1D31C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4E22A18EF530BFA8(::Class_3_88ECEB7D5F9A93BA_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_88ECEB7D5F9A93BA_4*))((::PBYTE)hIl2Cpp + CLASS_1_7141F52C32C1D31C_METHOD_1_4E22A18EF530BFA8_OFFSET))(this, a1);
	}
};
