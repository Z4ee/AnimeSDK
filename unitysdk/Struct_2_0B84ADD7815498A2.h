#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class MonoEffect; }

#define STRUCT_2_0B84ADD7815498A2_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x1F70650)
#define STRUCT_2_0B84ADD7815498A2_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1F705A0)
#define STRUCT_2_0B84ADD7815498A2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1F70600)
#define STRUCT_2_0B84ADD7815498A2__CTOR_OFFSET UNITYSDK_OFFSET(0x2FAF0)

inline static constexpr unsigned int Struct_2_0B84ADD7815498A2_TypeDefinitionIndex = 65373;

struct alignas(8) Struct_2_0B84ADD7815498A2
{
	::System::UInt32 Field_2_0; // 0x10
	::RPG::Client::MonoEffect* Field_2_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::MonoEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + STRUCT_2_0B84ADD7815498A2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B84ADD7815498A2_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B84ADD7815498A2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0B84ADD7815498A2_METHOD_2_0E142E3463F30350_OFFSET))(this);
	}
};
