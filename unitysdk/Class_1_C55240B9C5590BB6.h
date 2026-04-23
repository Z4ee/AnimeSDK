#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_815;
class Class_1_1A781135C1474CFC;
namespace System { class String; }

#define CLASS_1_C55240B9C5590BB6_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x915A2E0)
#define CLASS_1_C55240B9C5590BB6_METHOD_1_315D42E09E19A794_OFFSET UNITYSDK_OFFSET(0x915A320)
#define CLASS_1_C55240B9C5590BB6__CTOR_OFFSET UNITYSDK_OFFSET(0x915A480)

inline static constexpr unsigned int Class_1_C55240B9C5590BB6_TypeDefinitionIndex = 67558;

class Class_1_C55240B9C5590BB6 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C55240B9C5590BB6__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C55240B9C5590BB6_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_315D42E09E19A794(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_815* a3, ::Class_1_1A781135C1474CFC* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_815*, ::Class_1_1A781135C1474CFC*))((::PBYTE)hIl2Cpp + CLASS_1_C55240B9C5590BB6_METHOD_1_315D42E09E19A794_OFFSET))(this, a1, a2, a3, a4);
	}
};
