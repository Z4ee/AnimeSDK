#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_884;
namespace RPG::Client { class RootMotionHandler; }

#define STRUCT_2_2B16FFFF87B43037_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161E820)
#define STRUCT_2_2B16FFFF87B43037_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x161E7C0)
#define STRUCT_2_2B16FFFF87B43037__CTOR_OFFSET UNITYSDK_OFFSET(0x161E7B0)

inline static constexpr unsigned int Struct_2_2B16FFFF87B43037_TypeDefinitionIndex = 63461;

struct alignas(8) Struct_2_2B16FFFF87B43037
{
	::Class_0_16E4307DCC419505_884* Field_2_0; // 0x10
	::RPG::Client::RootMotionHandler* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::Client::RootMotionHandler* a1, ::Class_0_16E4307DCC419505_884* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RootMotionHandler*, ::Class_0_16E4307DCC419505_884*))((::PBYTE)hIl2Cpp + STRUCT_2_2B16FFFF87B43037__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2B16FFFF87B43037_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2B16FFFF87B43037_DISPOSE_OFFSET))(this);
	}
};
