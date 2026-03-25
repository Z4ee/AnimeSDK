#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_715;
class Class_1_1A781135C1474CFC;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_9AAB27106A432A76_1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x109CFE70)
#define CLASS_1_9AAB27106A432A76_1_METHOD_1_75B422D2D59E8A72_OFFSET UNITYSDK_OFFSET(0x109CFEB0)
#define CLASS_1_9AAB27106A432A76_1__CTOR_OFFSET UNITYSDK_OFFSET(0x109D0170)

inline static constexpr unsigned int Class_1_9AAB27106A432A76_1_TypeDefinitionIndex = 60132;

class Class_1_9AAB27106A432A76_1 : public ::System::Object
{
public:
	::System::Text::RegularExpressions::Regex* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAB27106A432A76_1__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AAB27106A432A76_1_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_75B422D2D59E8A72(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_715* a3, ::Class_1_1A781135C1474CFC* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_715*, ::Class_1_1A781135C1474CFC*))((::PBYTE)hIl2Cpp + CLASS_1_9AAB27106A432A76_1_METHOD_1_75B422D2D59E8A72_OFFSET))(this, a1, a2, a3, a4);
	}
};
