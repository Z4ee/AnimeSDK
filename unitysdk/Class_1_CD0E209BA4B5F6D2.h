#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_0190A9212AD9E688_6.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_0D1E33BA22DE0E17_OFFSET UNITYSDK_OFFSET(0x1A4AC9A0)
#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x1A4ACC60)
#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_915D66DE5F4D6371_OFFSET UNITYSDK_OFFSET(0x1A4ACB10)
#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A4AC990)
#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1A4AC890)
#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A4AC980)
#define CLASS_1_CD0E209BA4B5F6D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AC880)

inline static constexpr unsigned int Class_1_CD0E209BA4B5F6D2_TypeDefinitionIndex = 13479;

class Class_1_CD0E209BA4B5F6D2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_7; // 0x18
	::System::String* Field_1_5; // 0x28
	::Struct_2_0190A9212AD9E688_6 Field_1_0; // 0x30
	::System::Byte Field_1_4; // 0x40
	::System::Boolean Field_1_2; // 0x41
	::System::Byte Field_1_3; // 0x42
	::System::UInt64 Field_1_6; // 0x48

	::System::Void _ctor(::Struct_2_0190A9212AD9E688_6 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0190A9212AD9E688_6, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Foundation::AssetPath Method_1_0D1E33BA22DE0E17()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_0D1E33BA22DE0E17_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::UInt64 Method_1_915D66DE5F4D6371()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_915D66DE5F4D6371_OFFSET))(this);
	}
};
