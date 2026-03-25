#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_715;
class Class_1_1A781135C1474CFC;
namespace System { class String; }

#define CLASS_1_5DE5C8F0FC671DBC_METHOD_1_0DF1A4D79FD81F37_OFFSET UNITYSDK_OFFSET(0x1068FC80)
#define CLASS_1_5DE5C8F0FC671DBC_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1068FB20)
#define CLASS_1_5DE5C8F0FC671DBC_METHOD_1_51C236CB1AE3A21B_OFFSET UNITYSDK_OFFSET(0x1068FB60)
#define CLASS_1_5DE5C8F0FC671DBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1068FDF0)

inline static constexpr unsigned int Class_1_5DE5C8F0FC671DBC_TypeDefinitionIndex = 60128;

class Class_1_5DE5C8F0FC671DBC : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DE5C8F0FC671DBC__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DE5C8F0FC671DBC_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_51C236CB1AE3A21B(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_715* a3, ::Class_1_1A781135C1474CFC* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_715*, ::Class_1_1A781135C1474CFC*))((::PBYTE)hIl2Cpp + CLASS_1_5DE5C8F0FC671DBC_METHOD_1_51C236CB1AE3A21B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_0DF1A4D79FD81F37(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5DE5C8F0FC671DBC_METHOD_1_0DF1A4D79FD81F37_OFFSET))(this, a1);
	}
};
