#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B407606E338E5818_METHOD_1_01E2A29107F3D45B_OFFSET UNITYSDK_OFFSET(0x8FF2050)
#define CLASS_1_B407606E338E5818_METHOD_1_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x8FF21C0)
#define CLASS_1_B407606E338E5818_METHOD_1_C86CA48475AE1200_OFFSET UNITYSDK_OFFSET(0x8FF1E70)
#define CLASS_1_B407606E338E5818__CTOR_OFFSET UNITYSDK_OFFSET(0x8FF2040)

inline static constexpr unsigned int Class_1_B407606E338E5818_TypeDefinitionIndex = 62910;

class Class_1_B407606E338E5818 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B407606E338E5818__CTOR_OFFSET))(this);
	}

	static ::Class_1_B407606E338E5818* Method_1_C86CA48475AE1200()
	{
		return ((::Class_1_B407606E338E5818*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B407606E338E5818_METHOD_1_C86CA48475AE1200_OFFSET))();
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
