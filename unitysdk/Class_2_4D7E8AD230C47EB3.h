#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }

#define CLASS_2_4D7E8AD230C47EB3_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xB60AF60)
#define CLASS_2_4D7E8AD230C47EB3_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB60AEC0)
#define CLASS_2_4D7E8AD230C47EB3__CTOR_OFFSET UNITYSDK_OFFSET(0xB60AEB0)

inline static constexpr unsigned int Class_2_4D7E8AD230C47EB3_TypeDefinitionIndex = 77795;

class Class_2_4D7E8AD230C47EB3 : public ::Class_1_FD611945730E269E
{
public:
	::RPG::Client::Prop::ChimeraDuelBubbleEvent* FLPMDDEMIBJ; // 0x18
	::System::Single HBDJCFFDGDD; // 0x20
	::System::Boolean OELBLBCINNB; // 0x24
	::System::Boolean MFLJMFPCNFL; // 0x25

	::System::Void _ctor(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4D7E8AD230C47EB3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D7E8AD230C47EB3_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4D7E8AD230C47EB3_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}
};
