#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/ChessUIColor.h"
#include "unitysdk/ProtoScript/ChessUIIconType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6A730D2170872ABE_EQUALS_OFFSET UNITYSDK_OFFSET(0x828740)
#define STRUCT_2_6A730D2170872ABE_METHOD_2_71E773F26831DF3F_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STRUCT_2_6A730D2170872ABE_METHOD_2_A9B55ED62CC61559_OFFSET UNITYSDK_OFFSET(0x3EA3D0)
#define STRUCT_2_6A730D2170872ABE_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x52CCD0)
#define STRUCT_2_6A730D2170872ABE_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2C19D0)
#define STRUCT_2_6A730D2170872ABE_METHOD_2_D4D48BA2C69341A0_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define STRUCT_2_6A730D2170872ABE_METHOD_2_F99919EC52D924BE_OFFSET UNITYSDK_OFFSET(0x5120D0)

inline static constexpr unsigned int Struct_2_6A730D2170872ABE_TypeDefinitionIndex = 43921;

struct alignas(4) Struct_2_6A730D2170872ABE
{
	::ProtoScript::ChessUIColor Field_2_0; // 0x10
	::ProtoScript::ChessUIIconType Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	::System::Boolean Equals(::Struct_2_6A730D2170872ABE a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6A730D2170872ABE))((::PBYTE)hIl2Cpp + STRUCT_2_6A730D2170872ABE_EQUALS_OFFSET))(this, a1);
	}

	::ProtoScript::ChessUIColor Method_2_71E773F26831DF3F()
	{
		return ((::ProtoScript::ChessUIColor(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6A730D2170872ABE_METHOD_2_71E773F26831DF3F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6A730D2170872ABE_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6A730D2170872ABE_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::ProtoScript::ChessUIIconType Method_2_A9B55ED62CC61559()
	{
		return ((::ProtoScript::ChessUIIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6A730D2170872ABE_METHOD_2_A9B55ED62CC61559_OFFSET))(this);
	}

	::System::Void Method_2_F99919EC52D924BE(::ProtoScript::ChessUIIconType a1)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIIconType))((::PBYTE)hIl2Cpp + STRUCT_2_6A730D2170872ABE_METHOD_2_F99919EC52D924BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_D4D48BA2C69341A0(::ProtoScript::ChessUIColor a1)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIColor))((::PBYTE)hIl2Cpp + STRUCT_2_6A730D2170872ABE_METHOD_2_D4D48BA2C69341A0_OFFSET))(this, a1);
	}
};
