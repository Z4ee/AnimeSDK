#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_AECA2D14AC7B49F5_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14E8950)
#define STRUCT_2_AECA2D14AC7B49F5_METHOD_2_260E97EFE04A5125_OFFSET UNITYSDK_OFFSET(0x117332F0)
#define STRUCT_2_AECA2D14AC7B49F5_METHOD_2_6775604F93DD7110_OFFSET UNITYSDK_OFFSET(0x14E89C0)
#define STRUCT_2_AECA2D14AC7B49F5_METHOD_2_9C92150C5035DA7C_OFFSET UNITYSDK_OFFSET(0x14E88B0)

inline static constexpr unsigned int Struct_2_AECA2D14AC7B49F5_TypeDefinitionIndex = 46030;

struct alignas(4) Struct_2_AECA2D14AC7B49F5
{
	::System::Int32 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Boolean Field_2_4; // 0x20

	::System::String* Method_2_9C92150C5035DA7C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AECA2D14AC7B49F5_METHOD_2_9C92150C5035DA7C_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AECA2D14AC7B49F5_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_2_6775604F93DD7110(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_AECA2D14AC7B49F5_METHOD_2_6775604F93DD7110_OFFSET))(this, a1);
	}

	/*
	static ::Struct_2_AECA2D14AC7B49F5 Method_2_260E97EFE04A5125(::UnityEngine::AnimatorStateInfo a1)
	{
		return ((::Struct_2_AECA2D14AC7B49F5(*)(::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + STRUCT_2_AECA2D14AC7B49F5_METHOD_2_260E97EFE04A5125_OFFSET))(a1);
	}
	*/
};
