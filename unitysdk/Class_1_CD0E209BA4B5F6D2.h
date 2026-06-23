#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_0190A9212AD9E688_12.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_0D1E33BA22DE0E17_OFFSET UNITYSDK_OFFSET(0x17EC5E10)
#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x17EC61D0)
#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_915D66DE5F4D6371_OFFSET UNITYSDK_OFFSET(0x17EC5F80)
#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17EC5E00)
#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x17EC60E0)
#define CLASS_1_CD0E209BA4B5F6D2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17EC60D0)
#define CLASS_1_CD0E209BA4B5F6D2__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC5DF0)

inline static constexpr unsigned int Class_1_CD0E209BA4B5F6D2_TypeDefinitionIndex = 17020;

class Class_1_CD0E209BA4B5F6D2 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::Struct_2_0190A9212AD9E688_12 Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x28
	::Foundation::AssetPath Field_1_7; // 0x30
	::System::UInt64 Field_1_6; // 0x40
	::System::Byte Field_1_3; // 0x48
	::System::Boolean Field_1_2; // 0x49
	::System::Byte Field_1_4; // 0x4A

	::System::Void _ctor(::Struct_2_0190A9212AD9E688_12 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0190A9212AD9E688_12, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Foundation::AssetPath Method_1_0D1E33BA22DE0E17()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_0D1E33BA22DE0E17_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::UInt64 Method_1_915D66DE5F4D6371()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_915D66DE5F4D6371_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD0E209BA4B5F6D2_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}
};
