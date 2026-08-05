#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C20A73D898541F34_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xF0A9EF0)
#define CLASS_1_C20A73D898541F34_METHOD_1_B52D729126889377_OFFSET UNITYSDK_OFFSET(0xF0A9FA0)
#define CLASS_1_C20A73D898541F34_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF0A9F50)
#define CLASS_1_C20A73D898541F34__CTOR_OFFSET UNITYSDK_OFFSET(0xF0A9EE0)

inline static constexpr unsigned int Class_1_C20A73D898541F34_TypeDefinitionIndex = 40544;

class Class_1_C20A73D898541F34 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x14
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C20A73D898541F34__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C20A73D898541F34_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C20A73D898541F34_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B52D729126889377(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C20A73D898541F34_METHOD_1_B52D729126889377_OFFSET))(this, a1, a2, a3);
	}
};
