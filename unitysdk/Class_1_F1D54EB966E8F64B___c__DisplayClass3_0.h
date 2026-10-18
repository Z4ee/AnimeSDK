#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_116;

#define CLASS_1_F1D54EB966E8F64B___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C529170)
#define CLASS_1_F1D54EB966E8F64B___C__DISPLAYCLASS3_0__GETSORTEDTYPES_B__0_OFFSET UNITYSDK_OFFSET(0x1C529180)

inline static constexpr unsigned int Class_1_F1D54EB966E8F64B___c__DisplayClass3_0_TypeDefinitionIndex = 41889;

class Class_1_F1D54EB966E8F64B___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_116* displayConfigRepository; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1D54EB966E8F64B___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetSortedTypes_b__0(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::RPG::Client::MechCraft::MechCraftAttributeType a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_1_F1D54EB966E8F64B___C__DISPLAYCLASS3_0__GETSORTEDTYPES_B__0_OFFSET))(this, a1, a2);
	}
};
