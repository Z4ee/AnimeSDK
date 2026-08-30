#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class MonoEffect; }

#define STRUCT_2_0B84ADD7815498A2_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x3AE3A60)
#define STRUCT_2_0B84ADD7815498A2_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x3AE39B0)
#define STRUCT_2_0B84ADD7815498A2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x3AE3A10)
#define STRUCT_2_0B84ADD7815498A2__CTOR_OFFSET UNITYSDK_OFFSET(0x39A9C20)

inline static constexpr unsigned int Struct_2_0B84ADD7815498A2_TypeDefinitionIndex = 69887;

struct alignas(8) Struct_2_0B84ADD7815498A2
{
	::System::UInt32 GDBJDAOOCOH; // 0x10
	::RPG::Client::MonoEffect* LNGIDPGDHCL; // 0x18

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
