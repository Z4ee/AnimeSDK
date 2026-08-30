#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_00F42EF4C596AD0B_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x1C4BB6A0)
#define CLASS_1_00F42EF4C596AD0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BB6F0)

inline static constexpr unsigned int Class_1_00F42EF4C596AD0B_TypeDefinitionIndex = 40495;

class Class_1_00F42EF4C596AD0B : public ::System::Object
{
public:
	::System::Single CENECBNFGLD; // 0x10
	::System::Int32 MEPFOEEGBEA; // 0x14
	::System::Boolean LLOIGOPMMHI; // 0x18
	::System::Boolean GCIIENDDJLA; // 0x19
	::System::Single CNJCEMNOIEB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00F42EF4C596AD0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00F42EF4C596AD0B_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}
};
