#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_715;
class Class_1_1A781135C1474CFC;
namespace System { class String; }

#define CLASS_1_D847EBD3D5D8FF04_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1065E430)
#define CLASS_1_D847EBD3D5D8FF04_METHOD_1_ECE5B8C555779ACD_OFFSET UNITYSDK_OFFSET(0x1065E470)
#define CLASS_1_D847EBD3D5D8FF04__CTOR_OFFSET UNITYSDK_OFFSET(0x1065E570)

inline static constexpr unsigned int Class_1_D847EBD3D5D8FF04_TypeDefinitionIndex = 60121;

class Class_1_D847EBD3D5D8FF04 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D847EBD3D5D8FF04__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D847EBD3D5D8FF04_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_ECE5B8C555779ACD(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_715* a3, ::Class_1_1A781135C1474CFC* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_715*, ::Class_1_1A781135C1474CFC*))((::PBYTE)hIl2Cpp + CLASS_1_D847EBD3D5D8FF04_METHOD_1_ECE5B8C555779ACD_OFFSET))(this, a1, a2, a3, a4);
	}
};
