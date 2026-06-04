#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_B102ABAD82281B36.h"
#include "unitysdk/Struct_2_E42F523E67235157.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1D69BD375A37ED1A_METHOD_1_4F5077E754CB5318_OFFSET UNITYSDK_OFFSET(0x18AB9E00)
#define CLASS_1_1D69BD375A37ED1A_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x18AB9DB0)
#define CLASS_1_1D69BD375A37ED1A_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18AB9D60)
#define CLASS_1_1D69BD375A37ED1A_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x18AB9F70)
#define CLASS_1_1D69BD375A37ED1A_METHOD_1_AFE2A46A496425DD_OFFSET UNITYSDK_OFFSET(0x18AB9CF0)
#define CLASS_1_1D69BD375A37ED1A__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB9FC0)

inline static constexpr unsigned int Class_1_1D69BD375A37ED1A_TypeDefinitionIndex = 34916;

class Class_1_1D69BD375A37ED1A : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::Struct_2_B102ABAD82281B36 Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x38
	::Struct_2_E42F523E67235157 Field_1_4; // 0x3C
	::System::Int32 Field_1_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D69BD375A37ED1A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AFE2A46A496425DD(::RPG::MVector3 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D69BD375A37ED1A_METHOD_1_AFE2A46A496425DD_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D69BD375A37ED1A_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D69BD375A37ED1A_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_4F5077E754CB5318()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D69BD375A37ED1A_METHOD_1_4F5077E754CB5318_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D69BD375A37ED1A_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
