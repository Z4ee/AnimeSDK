#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_61587F018E03A222_1_METHOD_1_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x105736C0)
#define CLASS_1_61587F018E03A222_1_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x10573670)
#define CLASS_1_61587F018E03A222_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10573710)

inline static constexpr unsigned int Class_1_61587F018E03A222_1_TypeDefinitionIndex = 78922;

class Class_1_61587F018E03A222_1 : public ::System::Object
{
public:
	::System::Boolean Field_1_3; // 0x10
	::System::Int32 Field_1_2; // 0x14
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61587F018E03A222_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61587F018E03A222_1_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61587F018E03A222_1_METHOD_1_A3E94568D5184024_OFFSET))(this, a1, a2);
	}
};
