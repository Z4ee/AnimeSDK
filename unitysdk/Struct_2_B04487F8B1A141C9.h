#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_46E794449557F23C.h"
#include "unitysdk/Struct_2_9505641EB996F055_1.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_B04487F8B1A141C9_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x8371B0)
#define STRUCT_2_B04487F8B1A141C9_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_B04487F8B1A141C9_METHOD_2_20A5465563DAD1F8_OFFSET UNITYSDK_OFFSET(0x837280)
#define STRUCT_2_B04487F8B1A141C9_METHOD_2_E70FD915E26F531C_OFFSET UNITYSDK_OFFSET(0x837270)
#define STRUCT_2_B04487F8B1A141C9__CTOR_OFFSET UNITYSDK_OFFSET(0x837200)

inline static constexpr unsigned int Struct_2_B04487F8B1A141C9_TypeDefinitionIndex = 51453;

struct alignas(8) Struct_2_B04487F8B1A141C9
{
	::Struct_2_9505641EB996F055_1 Field_2_0; // 0x10
	::Struct_2_46E794449557F23C Field_2_7; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_B04487F8B1A141C9__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B04487F8B1A141C9_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_B04487F8B1A141C9_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E70FD915E26F531C(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_B04487F8B1A141C9_METHOD_2_E70FD915E26F531C_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_20A5465563DAD1F8()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B04487F8B1A141C9_METHOD_2_20A5465563DAD1F8_OFFSET))(this);
	}
};
