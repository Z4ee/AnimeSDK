#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"

class Class_0_16E4307DCC419505_425;
class Class_1_D63DE2EC2835DB62;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_54FF858A31E12283_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1617D6F0)
#define CLASS_2_54FF858A31E12283_METHOD_2_307F2A71BD13D1FE_OFFSET UNITYSDK_OFFSET(0x1617D560)
#define CLASS_2_54FF858A31E12283_METHOD_2_5A959B01CAC89C9F_OFFSET UNITYSDK_OFFSET(0x1617D9E0)
#define CLASS_2_54FF858A31E12283_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x1617DC10)
#define CLASS_2_54FF858A31E12283_METHOD_2_B8D62B19020E5EA4_OFFSET UNITYSDK_OFFSET(0x1617DC70)
#define CLASS_2_54FF858A31E12283_METHOD_2_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0x1617DD30)
#define CLASS_2_54FF858A31E12283_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x1617D850)
#define CLASS_2_54FF858A31E12283_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1617D900)
#define CLASS_2_54FF858A31E12283_TICK_OFFSET UNITYSDK_OFFSET(0x1617D970)
#define CLASS_2_54FF858A31E12283__CTOR_OFFSET UNITYSDK_OFFSET(0x1617DE20)

inline static constexpr unsigned int Class_2_54FF858A31E12283_TypeDefinitionIndex = 54911;

class Class_2_54FF858A31E12283 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::EntityTimeRewindComponent* Field_2_0; // 0x18
	::Class_1_D63DE2EC2835DB62* Field_2_1; // 0x20
	::RPG::GameCore::TimeRewindView Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54FF858A31E12283__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_307F2A71BD13D1FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54FF858A31E12283_METHOD_2_307F2A71BD13D1FE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54FF858A31E12283_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54FF858A31E12283_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54FF858A31E12283_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54FF858A31E12283_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A959B01CAC89C9F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_54FF858A31E12283_METHOD_2_5A959B01CAC89C9F_OFFSET))(this, a1);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54FF858A31E12283_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_2_B8D62B19020E5EA4(::RPG::GameCore::TimeRewindView a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindView))((::PBYTE)hIl2Cpp + CLASS_2_54FF858A31E12283_METHOD_2_B8D62B19020E5EA4_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDB0D8DA4A269034(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_54FF858A31E12283_METHOD_2_EDB0D8DA4A269034_OFFSET))(this, a1);
	}
};
