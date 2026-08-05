#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_D0D2B3C2533F6DF2_3;
class Class_1_D0D2B3C2533F6DF2_5;

#define CLASS_1_D5AA5C925893357D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12113900)
#define CLASS_1_D5AA5C925893357D_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12113530)
#define CLASS_1_D5AA5C925893357D_METHOD_1_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x121135B0)
#define CLASS_1_D5AA5C925893357D_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x121134B0)
#define CLASS_1_D5AA5C925893357D_METHOD_1_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0x12113960)
#define CLASS_1_D5AA5C925893357D__CTOR_OFFSET UNITYSDK_OFFSET(0x12113B80)

inline static constexpr unsigned int Class_1_D5AA5C925893357D_TypeDefinitionIndex = 85757;

class Class_1_D5AA5C925893357D : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_D0D2B3C2533F6DF2_3*>* Field_1_1; // 0x10
	::Class_1_D0D2B3C2533F6DF2_5* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5AA5C925893357D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5AA5C925893357D_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D5AA5C925893357D_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5AA5C925893357D_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5AA5C925893357D_METHOD_1_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_D5AA5C925893357D_METHOD_1_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}
};
