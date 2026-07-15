#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2364990B79AE77F4_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x187AAD10)
#define CLASS_1_2364990B79AE77F4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x187AACC0)
#define CLASS_1_2364990B79AE77F4__CTOR_OFFSET UNITYSDK_OFFSET(0x187AAD50)

inline static constexpr unsigned int Class_1_2364990B79AE77F4_TypeDefinitionIndex = 41109;

class Class_1_2364990B79AE77F4 : public ::System::Object
{
public:
	::RPG::MVector3 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x1C
	::System::Boolean Field_1_2; // 0x1D
	::System::Int32 Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x24
	::RPG::MVector3 Field_1_5; // 0x28
	::System::Int32 Field_1_6; // 0x34

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
