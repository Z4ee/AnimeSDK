#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_401;
class Class_1_9CEAB4C068D9D9DB;
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F1C3EBA366E084A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAA8BB0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_0B8CE76BCB21827F_OFFSET UNITYSDK_OFFSET(0xAAAA730)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_151A925CE7371396_OFFSET UNITYSDK_OFFSET(0xAAA9A50)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_1D083CAB146B83E4_1_OFFSET UNITYSDK_OFFSET(0xAAAA500)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_1D083CAB146B83E4_OFFSET UNITYSDK_OFFSET(0xAAAA140)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xAAA8390)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0xAAAA8E0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xAAAA8D0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_314AF0349B7630EC_OFFSET UNITYSDK_OFFSET(0xAAAA0A0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAAA9CC0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0xAAA8590)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_42E356AFD917DF99_OFFSET UNITYSDK_OFFSET(0xAAA9800)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xAAA8F40)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_6DDB92EC78EDF8C8_OFFSET UNITYSDK_OFFSET(0xAAAA590)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_9EF071EFB1B6B19B_OFFSET UNITYSDK_OFFSET(0xAAA9D10)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_A86C74DA7D6F53E8_OFFSET UNITYSDK_OFFSET(0xAAAA1D0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_AD9D5BA6923A02DC_OFFSET UNITYSDK_OFFSET(0xAAA98B0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_D632BCCC272D40EA_OFFSET UNITYSDK_OFFSET(0xAAA9700)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_D886A15FD89DA55A_OFFSET UNITYSDK_OFFSET(0xAAA8E50)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_DAF13E2DDF8F15E7_OFFSET UNITYSDK_OFFSET(0xAAA8A70)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_E92E7185E8BB256F_OFFSET UNITYSDK_OFFSET(0xAAA9970)
#define CLASS_2_F1C3EBA366E084A2_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xAAA9F50)
#define CLASS_2_F1C3EBA366E084A2_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xAAAA060)
#define CLASS_2_F1C3EBA366E084A2_TICK_OFFSET UNITYSDK_OFFSET(0xAAA94C0)
#define CLASS_2_F1C3EBA366E084A2__CTOR_OFFSET UNITYSDK_OFFSET(0xAAAA8F0)
#define CLASS_2_F1C3EBA366E084A2___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAAAA990)

inline static constexpr unsigned int Class_2_F1C3EBA366E084A2_TypeDefinitionIndex = 53278;

class Class_2_F1C3EBA366E084A2 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::NPCComponent* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_9CEAB4C068D9D9DB*>* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::Class_1_9CEAB4C068D9D9DB*>* Field_2_2; // 0x28
	::Class_1_9CEAB4C068D9D9DB* Field_2_3; // 0x30
	::Class_1_9CEAB4C068D9D9DB* Field_2_4; // 0x38
	::Class_1_9CEAB4C068D9D9DB* Field_2_5; // 0x40
	::RPG::GameCore::AdventureBehaviorClampAlertLevel Field_2_6; // 0x48
	::System::UInt32 Field_2_7; // 0x4C

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

	::System::Void Method_2_D886A15FD89DA55A(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_D886A15FD89DA55A_OFFSET))(this, a1);
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

	::RPG::GameCore::AdventureCharacterUnitState Method_2_E92E7185E8BB256F()
	{
		return ((::RPG::GameCore::AdventureCharacterUnitState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_E92E7185E8BB256F_OFFSET))(this);
	}

	::System::Boolean Method_2_151A925CE7371396(::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_151A925CE7371396_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_9EF071EFB1B6B19B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_9EF071EFB1B6B19B_OFFSET))(this);
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

	::System::Void Method_2_DAF13E2DDF8F15E7(::Class_1_9CEAB4C068D9D9DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CEAB4C068D9D9DB*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_DAF13E2DDF8F15E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D083CAB146B83E4(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_1D083CAB146B83E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D083CAB146B83E4_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_1D083CAB146B83E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DDB92EC78EDF8C8(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_6DDB92EC78EDF8C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_A86C74DA7D6F53E8(::System::Boolean a1, ::RPG::GameCore::AdventureModifierInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_A86C74DA7D6F53E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Boolean Method_2_0B8CE76BCB21827F(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_0B8CE76BCB21827F_OFFSET))(this, a1);
	}

	::Class_1_9CEAB4C068D9D9DB* Method_2_24748FC20F375725()
	{
		return ((::Class_1_9CEAB4C068D9D9DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_9CEAB4C068D9D9DB* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_9CEAB4C068D9D9DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
