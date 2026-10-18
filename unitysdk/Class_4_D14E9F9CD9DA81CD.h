#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_DCB7F8B839F0C44B.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"

class Class_0_16E4307DCC419505_120;

#define CLASS_4_D14E9F9CD9DA81CD_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1C53E690)
#define CLASS_4_D14E9F9CD9DA81CD_METHOD_4_ACC6B73F43B34F98_1_OFFSET UNITYSDK_OFFSET(0x1C53E7B0)
#define CLASS_4_D14E9F9CD9DA81CD_METHOD_4_ACC6B73F43B34F98_OFFSET UNITYSDK_OFFSET(0x1C53E6E0)
#define CLASS_4_D14E9F9CD9DA81CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53E6D0)

inline static constexpr unsigned int Class_4_D14E9F9CD9DA81CD_TypeDefinitionIndex = 41763;

class Class_4_D14E9F9CD9DA81CD : public ::Class_3_DCB7F8B839F0C44B
{
public:
	::RPG::Client::MechCraft::MechCraftChipTraitType PAEIOKFHAKI; // 0x18
	::System::Int32 COEMCOBPMKD; // 0x1C

	::System::Void _ctor(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + CLASS_4_D14E9F9CD9DA81CD__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D14E9F9CD9DA81CD_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_4_ACC6B73F43B34F98(::Class_0_16E4307DCC419505_120* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_120*))((::PBYTE)hIl2Cpp + CLASS_4_D14E9F9CD9DA81CD_METHOD_4_ACC6B73F43B34F98_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_ACC6B73F43B34F98_1(::Class_0_16E4307DCC419505_120* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_120*))((::PBYTE)hIl2Cpp + CLASS_4_D14E9F9CD9DA81CD_METHOD_4_ACC6B73F43B34F98_1_OFFSET))(this, a1);
	}
};
