#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_46E794449557F23C.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_174;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_33C4301C87739F2C_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x7FC340)
#define STRUCT_2_33C4301C87739F2C_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x3D1A20)
#define STRUCT_2_33C4301C87739F2C_METHOD_2_27EEC58D55564B94_OFFSET UNITYSDK_OFFSET(0x7FC3A0)
#define STRUCT_2_33C4301C87739F2C_METHOD_2_7F90BE9C6678001C_OFFSET UNITYSDK_OFFSET(0x7FC390)

inline static constexpr unsigned int Struct_2_33C4301C87739F2C_TypeDefinitionIndex = 51885;

struct alignas(8) Struct_2_33C4301C87739F2C
{
	::Struct_2_174BD6D3EB04B2EE Field_2_0; // 0x10
	::Class_0_16E4307DCC419505_174* Field_2_7; // 0x28
	::Struct_2_46E794449557F23C Field_2_6; // 0x30

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_33C4301C87739F2C_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_33C4301C87739F2C_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7F90BE9C6678001C(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_33C4301C87739F2C_METHOD_2_7F90BE9C6678001C_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_27EEC58D55564B94()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_33C4301C87739F2C_METHOD_2_27EEC58D55564B94_OFFSET))(this);
	}
};
