#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_E42F523E67235157.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_780B6E9BF6C4D933_1_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x166249D0)
#define CLASS_1_780B6E9BF6C4D933_1_METHOD_1_A1D8CD775DEC3C21_2_OFFSET UNITYSDK_OFFSET(0x16624A30)
#define CLASS_1_780B6E9BF6C4D933_1_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16624970)
#define CLASS_1_780B6E9BF6C4D933_1_METHOD_1_AFE2A46A496425DD_OFFSET UNITYSDK_OFFSET(0x16624900)
#define CLASS_1_780B6E9BF6C4D933_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16624A80)

inline static constexpr unsigned int Class_1_780B6E9BF6C4D933_1_TypeDefinitionIndex = 28910;

class Class_1_780B6E9BF6C4D933_1 : public ::System::Object
{
public:
	::RPG::MVector3 Field_1_1; // 0x10
	::Struct_2_E42F523E67235157 Field_1_3; // 0x1C
	::System::Int32 Field_1_0; // 0x30
	::System::Int32 Field_1_2; // 0x34
	::System::Boolean Field_1_5; // 0x38
	::System::Boolean Field_1_4; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_780B6E9BF6C4D933_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AFE2A46A496425DD(::RPG::MVector3 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_780B6E9BF6C4D933_1_METHOD_1_AFE2A46A496425DD_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_780B6E9BF6C4D933_1_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_780B6E9BF6C4D933_1_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_780B6E9BF6C4D933_1_METHOD_1_A1D8CD775DEC3C21_2_OFFSET))(this);
	}
};
