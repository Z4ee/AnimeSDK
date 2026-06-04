#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_DDDB57AA67C3A9EA;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define STRUCT_2_A7EFF121F1A9ACBF_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x2BC59E0)
#define STRUCT_2_A7EFF121F1A9ACBF_METHOD_2_BD4DDE41C2687AA5_OFFSET UNITYSDK_OFFSET(0x2BC5A30)
#define STRUCT_2_A7EFF121F1A9ACBF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x2BC5990)

inline static constexpr unsigned int Struct_2_A7EFF121F1A9ACBF_TypeDefinitionIndex = 66662;

struct alignas(8) Struct_2_A7EFF121F1A9ACBF
{
	::Class_1_DDDB57AA67C3A9EA* Field_2_0; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A7EFF121F1A9ACBF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A7EFF121F1A9ACBF_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_BD4DDE41C2687AA5(::Struct_2_A7EFF121F1A9ACBF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A7EFF121F1A9ACBF))((::PBYTE)hIl2Cpp + STRUCT_2_A7EFF121F1A9ACBF_METHOD_2_BD4DDE41C2687AA5_OFFSET))(this, a1);
	}
};
