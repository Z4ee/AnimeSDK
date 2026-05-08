#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AAB024DAC549A2AF_Enum_3_0A4196FE0F38039F.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_718DDCC965FD2778;
class Class_2_0A55B5A82A61DAFA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_28C0FDDF1076A6D9_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1661F520)
#define CLASS_1_28C0FDDF1076A6D9_METHOD_1_9560A7BC7C06B7D5_OFFSET UNITYSDK_OFFSET(0x1661F320)
#define CLASS_1_28C0FDDF1076A6D9_METHOD_1_A93B7CD3768E295E_OFFSET UNITYSDK_OFFSET(0x1661EFF0)
#define CLASS_1_28C0FDDF1076A6D9_METHOD_1_BC99D83B295182DB_OFFSET UNITYSDK_OFFSET(0x1661F190)
#define CLASS_1_28C0FDDF1076A6D9_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1661F180)
#define CLASS_1_28C0FDDF1076A6D9_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x1661F000)
#define CLASS_1_28C0FDDF1076A6D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1661E900)

inline static constexpr unsigned int Class_1_28C0FDDF1076A6D9_TypeDefinitionIndex = 57229;

class Class_1_28C0FDDF1076A6D9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_718DDCC965FD2778*>* Field_1_2; // 0x10
	::Class_2_0A55B5A82A61DAFA* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x20
	::System::Int32 Field_1_0; // 0x28
	::Class_1_AAB024DAC549A2AF_Enum_3_0A4196FE0F38039F Field_1_4; // 0x2C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_28C0FDDF1076A6D9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A93B7CD3768E295E(::Class_1_AAB024DAC549A2AF_Enum_3_0A4196FE0F38039F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AAB024DAC549A2AF_Enum_3_0A4196FE0F38039F))((::PBYTE)hIl2Cpp + CLASS_1_28C0FDDF1076A6D9_METHOD_1_A93B7CD3768E295E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28C0FDDF1076A6D9_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28C0FDDF1076A6D9_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::Foundation::AssetPath Method_1_BC99D83B295182DB(::System::Int32 a1)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_28C0FDDF1076A6D9_METHOD_1_BC99D83B295182DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9560A7BC7C06B7D5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28C0FDDF1076A6D9_METHOD_1_9560A7BC7C06B7D5_OFFSET))(this);
	}

	::Class_1_AAB024DAC549A2AF_Enum_3_0A4196FE0F38039F Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_AAB024DAC549A2AF_Enum_3_0A4196FE0F38039F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28C0FDDF1076A6D9_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}
};
