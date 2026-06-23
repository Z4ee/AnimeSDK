#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_BA85E4525E7A6838_Enum_3_F25456077B59DF83.h"
#include "unitysdk/Enum_3_C2761E57EE0B71AF.h"
#include "unitysdk/Enum_3_FF694106A6D9793C_2.h"

#define CLASS_2_BA85E4525E7A6838_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1085CA10)
#define CLASS_2_BA85E4525E7A6838_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1085CB20)
#define CLASS_2_BA85E4525E7A6838_METHOD_2_B8211C0BC8DB15A7_OFFSET UNITYSDK_OFFSET(0x1085CC50)
#define CLASS_2_BA85E4525E7A6838_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1085CCF0)
#define CLASS_2_BA85E4525E7A6838_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1085CBB0)
#define CLASS_2_BA85E4525E7A6838__CCTOR_OFFSET UNITYSDK_OFFSET(0x1085CAA0)
#define CLASS_2_BA85E4525E7A6838__CTOR_OFFSET UNITYSDK_OFFSET(0x1085CB10)

inline static constexpr unsigned int Class_2_BA85E4525E7A6838_TypeDefinitionIndex = 65445;

class Class_2_BA85E4525E7A6838 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_8 = 0xC5; // 0x0
	::Class_2_BA85E4525E7A6838_Enum_3_F25456077B59DF83 Field_2_0; // 0x20
	::Enum_3_C2761E57EE0B71AF Field_2_3; // 0x24
	::System::Boolean Field_2_4; // 0x28
	::System::Boolean Field_2_2; // 0x29
	::System::Boolean Field_2_1; // 0x2A
	::Enum_3_FF694106A6D9793C_2 Field_2_7; // 0x2C
	::System::UInt32 Field_2_6; // 0x30
	::System::UInt32 Field_2_5; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BA85E4525E7A6838__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA85E4525E7A6838__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA85E4525E7A6838_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA85E4525E7A6838_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA85E4525E7A6838_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B8211C0BC8DB15A7(::Class_2_BA85E4525E7A6838_Enum_3_F25456077B59DF83 a1, ::Enum_3_FF694106A6D9793C_2 a2, ::System::Boolean a3, ::System::Boolean a4, ::Enum_3_C2761E57EE0B71AF a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BA85E4525E7A6838_Enum_3_F25456077B59DF83, ::Enum_3_FF694106A6D9793C_2, ::System::Boolean, ::System::Boolean, ::Enum_3_C2761E57EE0B71AF, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BA85E4525E7A6838_METHOD_2_B8211C0BC8DB15A7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA85E4525E7A6838_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
