#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }

#define CLASS_2_4D7E8AD230C47EB3_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x10956980)
#define CLASS_2_4D7E8AD230C47EB3_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10956A00)
#define CLASS_2_4D7E8AD230C47EB3_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x10956A60)
#define CLASS_2_4D7E8AD230C47EB3_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x109568E0)
#define CLASS_2_4D7E8AD230C47EB3__CTOR_OFFSET UNITYSDK_OFFSET(0x109568D0)

inline static constexpr unsigned int Class_2_4D7E8AD230C47EB3_TypeDefinitionIndex = 63716;

class Class_2_4D7E8AD230C47EB3 : public ::Class_1_FD611945730E269E
{
public:
	::RPG::Client::Prop::ChimeraDuelBubbleEvent* Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x24
	::System::Boolean Field_2_0; // 0x25

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

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D7E8AD230C47EB3_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4D7E8AD230C47EB3_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
