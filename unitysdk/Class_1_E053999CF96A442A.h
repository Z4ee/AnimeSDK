#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1D8042ACFA8304FC.h"
#include "unitysdk/Enum_3_3D0059363A06F58F.h"
#include "unitysdk/System/Object.h"

class Class_3_7E5C716E1C4DBDBF;
class Class_3_AC409CB634C73560_1;
namespace System { class String; }

#define CLASS_1_E053999CF96A442A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12BD6FE0)
#define CLASS_1_E053999CF96A442A__CTOR_2_OFFSET UNITYSDK_OFFSET(0x12BD7050)
#define CLASS_1_E053999CF96A442A__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD6FD0)

inline static constexpr unsigned int Class_1_E053999CF96A442A_TypeDefinitionIndex = 58546;

class Class_1_E053999CF96A442A : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::String* Field_1_8; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::String* Field_1_7; // 0x28
	::System::String* Field_1_0; // 0x30
	::System::String* Field_1_1; // 0x38
	::System::String* Field_1_9; // 0x40
	::System::String* Field_1_4; // 0x48
	::Enum_3_3D0059363A06F58F Field_1_19; // 0x50
	::System::Int32 Field_1_10; // 0x54
	::System::Int32 Field_1_11; // 0x58
	::System::Boolean Field_1_18; // 0x5C
	::System::Boolean Field_1_14; // 0x5D
	::System::Boolean Field_1_15; // 0x5E
	::Enum_3_1D8042ACFA8304FC Field_1_12; // 0x60
	::System::Int32 Field_1_13; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E053999CF96A442A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_3_AC409CB634C73560_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AC409CB634C73560_1*))((::PBYTE)hIl2Cpp + CLASS_1_E053999CF96A442A__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_3_7E5C716E1C4DBDBF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E5C716E1C4DBDBF*))((::PBYTE)hIl2Cpp + CLASS_1_E053999CF96A442A__CTOR_2_OFFSET))(this, a1);
	}
};
