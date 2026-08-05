#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_437.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_1_00195F20DABB6857_5_METHOD_1_0D1E33BA22DE0E17_OFFSET UNITYSDK_OFFSET(0x18CE5C40)
#define CLASS_1_00195F20DABB6857_5_METHOD_1_915D66DE5F4D6371_OFFSET UNITYSDK_OFFSET(0x18CE5DA0)
#define CLASS_1_00195F20DABB6857_5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18CE5F00)
#define CLASS_1_00195F20DABB6857_5_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x18CE5F10)
#define CLASS_1_00195F20DABB6857_5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18CE5EF0)
#define CLASS_1_00195F20DABB6857_5__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE5C30)

inline static constexpr unsigned int Class_1_00195F20DABB6857_5_TypeDefinitionIndex = 12368;

class Class_1_00195F20DABB6857_5 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_437 Field_1_2; // 0x10
	::System::String* Field_1_4; // 0x20
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x28
	::Foundation::AssetPath Field_1_10; // 0x30
	::System::UInt64 Field_1_11; // 0x40
	::System::Int32 Field_1_5; // 0x48
	::System::Byte Field_1_6; // 0x4C
	::System::Byte Field_1_7; // 0x4D
	::System::Boolean Field_1_0; // 0x4E

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_437 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_437, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_5__CTOR_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetPath Method_1_0D1E33BA22DE0E17()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_5_METHOD_1_0D1E33BA22DE0E17_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_5_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::UInt64 Method_1_915D66DE5F4D6371()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00195F20DABB6857_5_METHOD_1_915D66DE5F4D6371_OFFSET))(this);
	}
};
