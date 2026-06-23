#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_363.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_1_00195F20DABB6857_METHOD_1_0D1E33BA22DE0E17_OFFSET UNITYSDK_OFFSET(0x149BB3F0)
#define CLASS_1_00195F20DABB6857_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x149BB060)
#define CLASS_1_00195F20DABB6857_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x149BAF50)
#define CLASS_1_00195F20DABB6857_METHOD_1_915D66DE5F4D6371_OFFSET UNITYSDK_OFFSET(0x149BB1B0)
#define CLASS_1_00195F20DABB6857_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x149BB570)
#define CLASS_1_00195F20DABB6857_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x149BB300)
#define CLASS_1_00195F20DABB6857_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x149BB560)
#define CLASS_1_00195F20DABB6857__CTOR_OFFSET UNITYSDK_OFFSET(0x149BAF40)

inline static constexpr unsigned int Class_1_00195F20DABB6857_TypeDefinitionIndex = 12067;

class Class_1_00195F20DABB6857 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_8; // 0x10
	::Struct_2_3E75877A2888D88A_363 Field_1_0; // 0x20
	::System::String* Field_1_7; // 0x30
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x38
	::System::UInt64 Field_1_6; // 0x40
	::System::Boolean Field_1_2; // 0x48
	::System::Byte Field_1_4; // 0x49
	::System::Byte Field_1_3; // 0x4A
	::System::Int32 Field_1_5; // 0x4C

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_363 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_363, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::UInt64 Method_1_915D66DE5F4D6371()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_METHOD_1_915D66DE5F4D6371_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::Foundation::AssetPath Method_1_0D1E33BA22DE0E17()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_METHOD_1_0D1E33BA22DE0E17_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
