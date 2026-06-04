#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2364990B79AE77F4_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18D3F0F0)
#define CLASS_1_2364990B79AE77F4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18D3F0A0)
#define CLASS_1_2364990B79AE77F4__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3F130)

inline static constexpr unsigned int Class_1_2364990B79AE77F4_TypeDefinitionIndex = 40294;

class Class_1_2364990B79AE77F4 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::RPG::MVector3 Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x25
	::System::Int32 Field_1_5; // 0x28
	::RPG::MVector3 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2364990B79AE77F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2364990B79AE77F4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2364990B79AE77F4_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
