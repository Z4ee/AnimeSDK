#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B407606E338E5818_METHOD_1_01E2A29107F3D45B_OFFSET UNITYSDK_OFFSET(0x1A0D02B0)
#define CLASS_1_B407606E338E5818_METHOD_1_252BBBA5CD40A6D2_OFFSET UNITYSDK_OFFSET(0x1A0D00A0)
#define CLASS_1_B407606E338E5818_METHOD_1_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x1A0D0420)
#define CLASS_1_B407606E338E5818__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D02A0)

inline static constexpr unsigned int Class_1_B407606E338E5818_TypeDefinitionIndex = 68223;

class Class_1_B407606E338E5818 : public ::System::Object
{
public:
	::System::Boolean POBCBCKMGCE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B407606E338E5818__CTOR_OFFSET))(this);
	}

	static ::Class_1_B407606E338E5818* Method_1_252BBBA5CD40A6D2()
	{
		return ((::Class_1_B407606E338E5818*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B407606E338E5818_METHOD_1_252BBBA5CD40A6D2_OFFSET))();
	}

	::System::Void Method_1_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B407606E338E5818_METHOD_1_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_1_01E2A29107F3D45B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B407606E338E5818_METHOD_1_01E2A29107F3D45B_OFFSET))(this, a1);
	}
};
