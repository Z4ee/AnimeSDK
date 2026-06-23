#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1D8042ACFA8304FC.h"
#include "unitysdk/Enum_3_3D0059363A06F58F.h"
#include "unitysdk/System/Object.h"

class Class_3_384140540D6187FE;
class Class_3_D620CB44075FFCD9_1;
namespace System { class String; }

#define CLASS_1_E053999CF96A442A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x127F7AC0)
#define CLASS_1_E053999CF96A442A__CTOR_2_OFFSET UNITYSDK_OFFSET(0x127F7B30)
#define CLASS_1_E053999CF96A442A__CTOR_OFFSET UNITYSDK_OFFSET(0x127F7AB0)

inline static constexpr unsigned int Class_1_E053999CF96A442A_TypeDefinitionIndex = 77235;

class Class_1_E053999CF96A442A : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::String* Field_1_8; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::String* Field_1_4; // 0x28
	::System::String* Field_1_9; // 0x30
	::System::String* Field_1_0; // 0x38
	::System::String* Field_1_3; // 0x40
	::System::String* Field_1_2; // 0x48
	::Enum_3_3D0059363A06F58F Field_1_14; // 0x50
	::System::Int32 Field_1_12; // 0x54
	::System::Boolean Field_1_11; // 0x58
	::System::Boolean Field_1_15; // 0x59
	::System::Boolean Field_1_10; // 0x5A
	::Enum_3_1D8042ACFA8304FC Field_1_13; // 0x5C
	::System::Int32 Field_1_6; // 0x60
	::System::Int32 Field_1_7; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E053999CF96A442A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_3_D620CB44075FFCD9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D620CB44075FFCD9_1*))((::PBYTE)hIl2Cpp + CLASS_1_E053999CF96A442A__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_3_384140540D6187FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_384140540D6187FE*))((::PBYTE)hIl2Cpp + CLASS_1_E053999CF96A442A__CTOR_2_OFFSET))(this, a1);
	}
};
