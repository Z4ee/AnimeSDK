#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C411A3DD6A930CFA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_709BBC1863417E95;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_62EE30D390CBCE45_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x12820460)
#define CLASS_2_62EE30D390CBCE45_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12820950)
#define CLASS_2_62EE30D390CBCE45_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x128208F0)
#define CLASS_2_62EE30D390CBCE45_METHOD_2_7C36EAAD98BD537A_OFFSET UNITYSDK_OFFSET(0x128206D0)
#define CLASS_2_62EE30D390CBCE45_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x12820530)
#define CLASS_2_62EE30D390CBCE45_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12820470)
#define CLASS_2_62EE30D390CBCE45_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x128205B0)
#define CLASS_2_62EE30D390CBCE45__CTOR_OFFSET UNITYSDK_OFFSET(0x128208A0)

inline static constexpr unsigned int Class_2_62EE30D390CBCE45_TypeDefinitionIndex = 49545;

class Class_2_62EE30D390CBCE45 : public ::Class_1_C411A3DD6A930CFA
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::GameCore::RtAbilityProperty, ::System::Int32>>* Field_2_1; // 0x18
	::Class_3_709BBC1863417E95* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EE30D390CBCE45__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EE30D390CBCE45_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EE30D390CBCE45_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EE30D390CBCE45_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_7C36EAAD98BD537A(::RPG::GameCore::RtAbilityProperty a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_62EE30D390CBCE45_METHOD_2_7C36EAAD98BD537A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EE30D390CBCE45_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EE30D390CBCE45_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EE30D390CBCE45_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
