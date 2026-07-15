#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_425;
class Class_1_9CEAB4C068D9D9DB;
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F1C3EBA366E084A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A13260)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_1D083CAB146B83E4_1_OFFSET UNITYSDK_OFFSET(0x16A14E60)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_1D083CAB146B83E4_OFFSET UNITYSDK_OFFSET(0x16A14B10)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x16A129E0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x16A153A0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x16A15390)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_314AF0349B7630EC_OFFSET UNITYSDK_OFFSET(0x16A14A70)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16A14530)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x16A12BE0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_42E356AFD917DF99_OFFSET UNITYSDK_OFFSET(0x16A13F10)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x16A130C0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x16A13680)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_5946D138E912C7D6_OFFSET UNITYSDK_OFFSET(0x16A13580)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_758868DB59BDD653_OFFSET UNITYSDK_OFFSET(0x16A15120)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_8BF711C73CC86CFA_OFFSET UNITYSDK_OFFSET(0x16A14EF0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_9B087AB721E15AF6_OFFSET UNITYSDK_OFFSET(0x16A14080)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_A86C74DA7D6F53E8_OFFSET UNITYSDK_OFFSET(0x16A14BA0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_AD9D5BA6923A02DC_OFFSET UNITYSDK_OFFSET(0x16A13FC0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_D624B14B3F0F67A4_OFFSET UNITYSDK_OFFSET(0x16A14580)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_D632BCCC272D40EA_OFFSET UNITYSDK_OFFSET(0x16A13E10)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_EDEEF29F84C85865_OFFSET UNITYSDK_OFFSET(0x16A14240)
#define CLASS_2_F1C3EBA366E084A2_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x16A14890)
#define CLASS_2_F1C3EBA366E084A2_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x16A14A30)
#define CLASS_2_F1C3EBA366E084A2_TICK_OFFSET UNITYSDK_OFFSET(0x16A13BF0)
#define CLASS_2_F1C3EBA366E084A2__CTOR_OFFSET UNITYSDK_OFFSET(0x16A153B0)

inline static constexpr unsigned int Class_2_F1C3EBA366E084A2_TypeDefinitionIndex = 54493;

class Class_2_F1C3EBA366E084A2 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::Class_1_9CEAB4C068D9D9DB*>* Field_2_0; // 0x18
	::Class_1_9CEAB4C068D9D9DB* Field_2_1; // 0x20
	::Class_1_9CEAB4C068D9D9DB* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::Class_1_9CEAB4C068D9D9DB*>* Field_2_3; // 0x30
	::RPG::GameCore::NPCComponent* Field_2_4; // 0x38
	::Class_1_9CEAB4C068D9D9DB* Field_2_5; // 0x40
	::System::UInt32 Field_2_6; // 0x48
	::RPG::GameCore::AdventureBehaviorClampAlertLevel Field_2_7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5946D138E912C7D6(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_5946D138E912C7D6_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D632BCCC272D40EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_D632BCCC272D40EA_OFFSET))(this);
	}

	::Class_1_9CEAB4C068D9D9DB* Method_2_42E356AFD917DF99(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
	{
		return ((::Class_1_9CEAB4C068D9D9DB*(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_42E356AFD917DF99_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AD9D5BA6923A02DC(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_AD9D5BA6923A02DC_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureCharacterUnitState Method_2_9B087AB721E15AF6()
	{
		return ((::RPG::GameCore::AdventureCharacterUnitState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_9B087AB721E15AF6_OFFSET))(this);
	}

	::System::Boolean Method_2_EDEEF29F84C85865(::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_EDEEF29F84C85865_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_D624B14B3F0F67A4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_D624B14B3F0F67A4_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_314AF0349B7630EC(::System::Boolean a1, ::RPG::GameCore::AdventureModifierBehaviorFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_314AF0349B7630EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4D606E0EBD8E195C(::Class_1_9CEAB4C068D9D9DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CEAB4C068D9D9DB*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D083CAB146B83E4(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_1D083CAB146B83E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D083CAB146B83E4_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_1D083CAB146B83E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BF711C73CC86CFA(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_8BF711C73CC86CFA_OFFSET))(this, a1);
	}

	::System::Void Method_2_A86C74DA7D6F53E8(::System::Boolean a1, ::RPG::GameCore::AdventureModifierInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_A86C74DA7D6F53E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Boolean Method_2_758868DB59BDD653(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_758868DB59BDD653_OFFSET))(this, a1);
	}

	::Class_1_9CEAB4C068D9D9DB* Method_2_24748FC20F375725()
	{
		return ((::Class_1_9CEAB4C068D9D9DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_9CEAB4C068D9D9DB* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_9CEAB4C068D9D9DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}
};
