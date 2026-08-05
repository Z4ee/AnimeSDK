#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BB513C7A0A1D8F6D.h"
#include "unitysdk/MoleMole/Config/RuntimePolygonBound.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Struct_2_EF1F16181BE9D1CE.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_707643DB031BC10E_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7E4EC0)
#define STRUCT_2_707643DB031BC10E_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7E4E30)
#define STRUCT_2_707643DB031BC10E_METHOD_2_B68A1A089FF4A0EE_OFFSET UNITYSDK_OFFSET(0x7E4F20)
#define STRUCT_2_707643DB031BC10E_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x7E4F30)

inline static constexpr unsigned int Struct_2_707643DB031BC10E_TypeDefinitionIndex = 91137;

struct alignas(8) Struct_2_707643DB031BC10E
{
	::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* Field_2_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* Field_2_1; // 0x18
	::System::String* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_EF1F16181BE9D1CE>* Field_2_7; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* Field_2_6; // 0x30
	::Enum_3_BB513C7A0A1D8F6D Field_2_5; // 0x38
	::System::Boolean Field_2_4; // 0x3C
	::System::Boolean Field_2_11; // 0x3D
	::System::Boolean Field_2_10; // 0x3E

	/*
	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + STRUCT_2_707643DB031BC10E_FROMFLX_OFFSET))(this, a1);
	}
	*/

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_707643DB031BC10E_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B68A1A089FF4A0EE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_707643DB031BC10E_METHOD_2_B68A1A089FF4A0EE_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + STRUCT_2_707643DB031BC10E_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
	}
	*/
};
