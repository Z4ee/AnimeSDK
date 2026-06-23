#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DC8558A9D4014341.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_A8AA65B75807FFC4_METHOD_2_047B61334AE9DEAC_OFFSET UNITYSDK_OFFSET(0x86EF30)
#define STRUCT_2_A8AA65B75807FFC4_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x40C750)
#define STRUCT_2_A8AA65B75807FFC4_METHOD_2_738FDD723224E97B_OFFSET UNITYSDK_OFFSET(0x414340)
#define STRUCT_2_A8AA65B75807FFC4_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x6B3130)
#define STRUCT_2_A8AA65B75807FFC4_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x48E3B0)
#define STRUCT_2_A8AA65B75807FFC4_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2B7CC0)

inline static constexpr unsigned int Struct_2_A8AA65B75807FFC4_TypeDefinitionIndex = 66267;

struct alignas(8) Struct_2_A8AA65B75807FFC4
{
	::Enum_3_DC8558A9D4014341 Field_2_0; // 0x10
	::System::UInt64 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20
	::Foundation::ViewObject::GroupMemberIdentifier Field_2_3; // 0x24
	::System::String* Field_2_4; // 0x30

	::Foundation::ViewObject::GroupMemberIdentifier Method_2_738FDD723224E97B()
	{
		return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A8AA65B75807FFC4_METHOD_2_738FDD723224E97B_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A8AA65B75807FFC4_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_A8AA65B75807FFC4_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A8AA65B75807FFC4_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A8AA65B75807FFC4_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_047B61334AE9DEAC(::Foundation::ViewObject::GroupMemberIdentifier a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + STRUCT_2_A8AA65B75807FFC4_METHOD_2_047B61334AE9DEAC_OFFSET))(this, a1);
	}
};
