#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseChestSystem_1.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_2_6DDA91CFFA134F45__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x18383AA0)
#define CLASS_2_6DDA91CFFA134F45__CTOR_OFFSET UNITYSDK_OFFSET(0x183837F0)
#define CLASS_2_6DDA91CFFA134F45__REMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0x18383FE0)
#define CLASS_2_6DDA91CFFA134F45__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x183839F0)

inline static constexpr unsigned int Class_2_6DDA91CFFA134F45_TypeDefinitionIndex = 76597;

class Class_2_6DDA91CFFA134F45 : public ::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x40

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_6DDA91CFFA134F45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DDA91CFFA134F45__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateTrigger(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_6DDA91CFFA134F45__CREATETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _RemoveTrigger(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_6DDA91CFFA134F45__REMOVETRIGGER_OFFSET))(this, a1);
	}
};
