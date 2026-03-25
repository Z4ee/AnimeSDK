#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_310;
class Class_1_EAF7984A8FAD6BE4;

#define CLASS_2_5C2E5BEED576409A___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D7460)
#define CLASS_2_5C2E5BEED576409A___C__DISPLAYCLASS6_0__UPDATEPROPERTYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xD7D76C0)
#define CLASS_2_5C2E5BEED576409A___C__DISPLAYCLASS6_0__UPDATEPROPERTYASYNC_B__1_OFFSET UNITYSDK_OFFSET(0xD7D7770)

inline static constexpr unsigned int Class_2_5C2E5BEED576409A___c__DisplayClass6_0_TypeDefinitionIndex = 40146;

class Class_2_5C2E5BEED576409A___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_310* handle; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C2E5BEED576409A___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _UpdatePropertyAsync_b__0(::Class_1_EAF7984A8FAD6BE4* dst)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_5C2E5BEED576409A___C__DISPLAYCLASS6_0__UPDATEPROPERTYASYNC_B__0_OFFSET))(this, dst);
	}

	::System::Void _UpdatePropertyAsync_b__1(::Class_1_EAF7984A8FAD6BE4* dst)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_5C2E5BEED576409A___C__DISPLAYCLASS6_0__UPDATEPROPERTYASYNC_B__1_OFFSET))(this, dst);
	}
};
