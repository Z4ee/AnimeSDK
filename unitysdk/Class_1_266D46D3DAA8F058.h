#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1338;
class Class_1_046112F54DBF767D;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirExcelValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterAttributeConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterCalculateConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterCompareConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterSumAttributeConfig; }

#define CLASS_1_266D46D3DAA8F058_METHOD_1_231A12B2875A02A0_OFFSET UNITYSDK_OFFSET(0xB577F80)
#define CLASS_1_266D46D3DAA8F058_METHOD_1_296F09526D6E7616_OFFSET UNITYSDK_OFFSET(0xB577DD0)
#define CLASS_1_266D46D3DAA8F058_METHOD_1_3B963A91DFF02E36_OFFSET UNITYSDK_OFFSET(0xB577A30)
#define CLASS_1_266D46D3DAA8F058_METHOD_1_67165D7557FCC825_OFFSET UNITYSDK_OFFSET(0xB578310)
#define CLASS_1_266D46D3DAA8F058_METHOD_1_97EB5C61D3012BFC_OFFSET UNITYSDK_OFFSET(0xB5780A0)
#define CLASS_1_266D46D3DAA8F058_METHOD_1_AEB48B1E01C81E2C_OFFSET UNITYSDK_OFFSET(0xB578260)
#define CLASS_1_266D46D3DAA8F058_METHOD_1_B8CA957B6928C3ED_OFFSET UNITYSDK_OFFSET(0xB577D40)
#define CLASS_1_266D46D3DAA8F058__CTOR_OFFSET UNITYSDK_OFFSET(0xB5785B0)

inline static constexpr unsigned int Class_1_266D46D3DAA8F058_TypeDefinitionIndex = 78924;

class Class_1_266D46D3DAA8F058 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_266D46D3DAA8F058__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_3B963A91DFF02E36(::Class_0_16E4307DCC419505_1338* a1, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_1338*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_266D46D3DAA8F058_METHOD_1_3B963A91DFF02E36_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_B8CA957B6928C3ED(::Class_0_16E4307DCC419505_1338* a1, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_1338*, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_266D46D3DAA8F058_METHOD_1_B8CA957B6928C3ED_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_296F09526D6E7616(::Class_0_16E4307DCC419505_1338* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_1338*, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig*))((::PBYTE)hIl2Cpp + CLASS_1_266D46D3DAA8F058_METHOD_1_296F09526D6E7616_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_231A12B2875A02A0(::Class_0_16E4307DCC419505_1338* a1, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_1338*, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_266D46D3DAA8F058_METHOD_1_231A12B2875A02A0_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_97EB5C61D3012BFC(::Class_0_16E4307DCC419505_1338* a1, ::RPG::GameCore::LittleGameAbilityValueGetterSumAttributeConfig* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_1338*, ::RPG::GameCore::LittleGameAbilityValueGetterSumAttributeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_266D46D3DAA8F058_METHOD_1_97EB5C61D3012BFC_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_AEB48B1E01C81E2C(::Class_0_16E4307DCC419505_1338* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_1338*, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig*))((::PBYTE)hIl2Cpp + CLASS_1_266D46D3DAA8F058_METHOD_1_AEB48B1E01C81E2C_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_67165D7557FCC825(::Class_1_046112F54DBF767D* a1, ::RPG::GameCore::LittleGameAbilityAttributeType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_1_046112F54DBF767D*, ::RPG::GameCore::LittleGameAbilityAttributeType))((::PBYTE)hIl2Cpp + CLASS_1_266D46D3DAA8F058_METHOD_1_67165D7557FCC825_OFFSET))(this, a1, a2);
	}
};
