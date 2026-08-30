#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"
#include "unitysdk/Struct_2_27685EFF2E84A814.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_96C40A1EA5B0D62E_10_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x1605F530)
#define CLASS_2_96C40A1EA5B0D62E_10_METHOD_2_87411ABA28C869BA_OFFSET UNITYSDK_OFFSET(0x1605F820)
#define CLASS_2_96C40A1EA5B0D62E_10_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1605F770)
#define CLASS_2_96C40A1EA5B0D62E_10_TICK_OFFSET UNITYSDK_OFFSET(0x1605F7B0)
#define CLASS_2_96C40A1EA5B0D62E_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1605F520)

inline static constexpr unsigned int Class_2_96C40A1EA5B0D62E_10_TypeDefinitionIndex = 56454;

class Class_2_96C40A1EA5B0D62E_10 : public ::Class_1_20D3150E1235DCB5
{
public:
	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_10_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_10_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_10_TICK_OFFSET))(this, a1);
	}

	::Struct_2_27685EFF2E84A814 Method_2_87411ABA28C869BA()
	{
		return ((::Struct_2_27685EFF2E84A814(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_10_METHOD_2_87411ABA28C869BA_OFFSET))(this);
	}
};
