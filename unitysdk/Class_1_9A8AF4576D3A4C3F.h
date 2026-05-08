#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_C7B40A7D48766478.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_1_9A8AF4576D3A4C3F_METHOD_1_0D1E33BA22DE0E17_OFFSET UNITYSDK_OFFSET(0x1711FAE0)
#define CLASS_1_9A8AF4576D3A4C3F_METHOD_1_915D66DE5F4D6371_OFFSET UNITYSDK_OFFSET(0x1711FC50)
#define CLASS_1_9A8AF4576D3A4C3F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1711FE90)
#define CLASS_1_9A8AF4576D3A4C3F_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1711FDA0)
#define CLASS_1_9A8AF4576D3A4C3F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1711FEA0)
#define CLASS_1_9A8AF4576D3A4C3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1711FAD0)

inline static constexpr unsigned int Class_1_9A8AF4576D3A4C3F_TypeDefinitionIndex = 11520;

class Class_1_9A8AF4576D3A4C3F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_6; // 0x18
	::Struct_2_C7B40A7D48766478 Field_1_0; // 0x28
	::System::UInt64 Field_1_5; // 0x38
	::System::Byte Field_1_4; // 0x40
	::System::Byte Field_1_3; // 0x41
	::System::Boolean Field_1_2; // 0x42

	::System::Void _ctor(::Struct_2_C7B40A7D48766478 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C7B40A7D48766478, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F__CTOR_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetPath Method_1_0D1E33BA22DE0E17()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F_METHOD_1_0D1E33BA22DE0E17_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_915D66DE5F4D6371()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F_METHOD_1_915D66DE5F4D6371_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A8AF4576D3A4C3F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
