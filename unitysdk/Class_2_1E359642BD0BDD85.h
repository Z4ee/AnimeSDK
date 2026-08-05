#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_316F36B4AEB73169.h"

#define CLASS_2_1E359642BD0BDD85_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x16150380)
#define CLASS_2_1E359642BD0BDD85_METHOD_2_99A99487F3F93C93_OFFSET UNITYSDK_OFFSET(0x161504A0)
#define CLASS_2_1E359642BD0BDD85_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16150410)
#define CLASS_2_1E359642BD0BDD85__CCTOR_OFFSET UNITYSDK_OFFSET(0x16150300)
#define CLASS_2_1E359642BD0BDD85__CTOR_OFFSET UNITYSDK_OFFSET(0x16150370)

inline static constexpr unsigned int Class_2_1E359642BD0BDD85_TypeDefinitionIndex = 74740;

class Class_2_1E359642BD0BDD85 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0x12D; // 0x0
	::Enum_3_316F36B4AEB73169 Field_2_0; // 0x20
	::System::Int32 Field_2_7; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1E359642BD0BDD85__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E359642BD0BDD85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E359642BD0BDD85_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E359642BD0BDD85_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_99A99487F3F93C93(::Enum_3_316F36B4AEB73169 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_316F36B4AEB73169, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1E359642BD0BDD85_METHOD_2_99A99487F3F93C93_OFFSET))(this, a1, a2);
	}
};
