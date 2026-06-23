#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/Coordinates/Offset.h"
#include "unitysdk/Struct_2_749BE91557627726_1.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/Object.h"

class Class_3_01B4CC30216C9ABE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3B58EE91C0F989DF_METHOD_1_09C4428BEAB114EA_OFFSET UNITYSDK_OFFSET(0x1C3D4AB0)
#define CLASS_1_3B58EE91C0F989DF_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1C3D4A70)
#define CLASS_1_3B58EE91C0F989DF_METHOD_1_56E076CBC69B0772_OFFSET UNITYSDK_OFFSET(0x1C3D5230)
#define CLASS_1_3B58EE91C0F989DF_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x1C3D4E90)
#define CLASS_1_3B58EE91C0F989DF_METHOD_1_C477C0BAA3432DC5_OFFSET UNITYSDK_OFFSET(0x1C3D4B80)
#define CLASS_1_3B58EE91C0F989DF_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1C3D5220)
#define CLASS_1_3B58EE91C0F989DF_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1C3D5210)
#define CLASS_1_3B58EE91C0F989DF_METHOD_1_ECBBC37B441CC6A6_1_OFFSET UNITYSDK_OFFSET(0x1C3D53D0)
#define CLASS_1_3B58EE91C0F989DF_METHOD_1_ECBBC37B441CC6A6_OFFSET UNITYSDK_OFFSET(0x1C3D4D00)
#define CLASS_1_3B58EE91C0F989DF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C3D48D0)
#define CLASS_1_3B58EE91C0F989DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D49B0)

inline static constexpr unsigned int Class_1_3B58EE91C0F989DF_TypeDefinitionIndex = 88279;

class Class_1_3B58EE91C0F989DF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_01B4CC30216C9ABE*>* Field_1_3; // 0x18
	::HexagonalLib::Coordinates::Offset Field_1_0; // 0x20
	::Struct_2_749BE91557627726_1 Field_1_2; // 0x28
	::Struct_2_E614D3B245F96744_1 Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B58EE91C0F989DF__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B58EE91C0F989DF_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B58EE91C0F989DF_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_09C4428BEAB114EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3B58EE91C0F989DF_METHOD_1_09C4428BEAB114EA_OFFSET))(this, a1);
	}

	::Class_3_01B4CC30216C9ABE* Method_1_C477C0BAA3432DC5()
	{
		return ((::Class_3_01B4CC30216C9ABE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B58EE91C0F989DF_METHOD_1_C477C0BAA3432DC5_OFFSET))(this);
	}

	::System::Boolean Method_1_ECBBC37B441CC6A6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B58EE91C0F989DF_METHOD_1_ECBBC37B441CC6A6_OFFSET))(this);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B58EE91C0F989DF_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B58EE91C0F989DF_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_56E076CBC69B0772()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B58EE91C0F989DF_METHOD_1_56E076CBC69B0772_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B58EE91C0F989DF_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Boolean Method_1_ECBBC37B441CC6A6_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B58EE91C0F989DF_METHOD_1_ECBBC37B441CC6A6_1_OFFSET))(this);
	}
};
