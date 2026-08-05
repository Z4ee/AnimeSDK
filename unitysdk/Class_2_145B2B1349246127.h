#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_ABFC2C2AD6FA0905.h"

#define CLASS_2_145B2B1349246127_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13C28EC0)
#define CLASS_2_145B2B1349246127_METHOD_2_B5B5651BE56A3FBC_OFFSET UNITYSDK_OFFSET(0x13C28F50)
#define CLASS_2_145B2B1349246127_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13C29000)
#define CLASS_2_145B2B1349246127__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C28E40)
#define CLASS_2_145B2B1349246127__CTOR_OFFSET UNITYSDK_OFFSET(0x13C28EB0)

inline static constexpr unsigned int Class_2_145B2B1349246127_TypeDefinitionIndex = 90881;

class Class_2_145B2B1349246127 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0x122; // 0x0
	::Enum_3_ABFC2C2AD6FA0905 Field_2_6; // 0x20
	::System::UInt32 Field_2_0; // 0x24
	::System::Boolean Field_2_7; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_145B2B1349246127__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_145B2B1349246127__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_145B2B1349246127_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_B5B5651BE56A3FBC(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::Enum_3_ABFC2C2AD6FA0905 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Enum_3_ABFC2C2AD6FA0905))((::PBYTE)hIl2Cpp + CLASS_2_145B2B1349246127_METHOD_2_B5B5651BE56A3FBC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_145B2B1349246127_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
