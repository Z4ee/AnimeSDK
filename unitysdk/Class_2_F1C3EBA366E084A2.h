#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_382;
class Class_1_9CEAB4C068D9D9DB;
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F1C3EBA366E084A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90904D0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x908FD10)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x9092110)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x9092100)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_314AF0349B7630EC_OFFSET UNITYSDK_OFFSET(0x9091900)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9091510)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_3D33C2FF671640F7_OFFSET UNITYSDK_OFFSET(0x9091560)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x908FEE0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_42E356AFD917DF99_OFFSET UNITYSDK_OFFSET(0x9091050)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_608DF37B4CA40735_OFFSET UNITYSDK_OFFSET(0x9090730)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x90903E0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_8A9AF30DD7F083EE_OFFSET UNITYSDK_OFFSET(0x9091F90)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_9B8F396A08AE2D04_1_OFFSET UNITYSDK_OFFSET(0x9091D60)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_9B8F396A08AE2D04_OFFSET UNITYSDK_OFFSET(0x90919A0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_A86C74DA7D6F53E8_OFFSET UNITYSDK_OFFSET(0x9091A20)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_AD9D5BA6923A02DC_OFFSET UNITYSDK_OFFSET(0x9091110)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x9090820)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_B4BEA6747420EDBC_OFFSET UNITYSDK_OFFSET(0x90912C0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_E92E7185E8BB256F_OFFSET UNITYSDK_OFFSET(0x90911E0)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_EC90937CEA9AFCA9_OFFSET UNITYSDK_OFFSET(0x9090F70)
#define CLASS_2_F1C3EBA366E084A2_METHOD_2_FF2C9EB2FC419998_OFFSET UNITYSDK_OFFSET(0x9091DE0)
#define CLASS_2_F1C3EBA366E084A2_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x90917A0)
#define CLASS_2_F1C3EBA366E084A2_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x90918C0)
#define CLASS_2_F1C3EBA366E084A2_TICK_OFFSET UNITYSDK_OFFSET(0x9090D60)
#define CLASS_2_F1C3EBA366E084A2__CTOR_OFFSET UNITYSDK_OFFSET(0x9092120)
#define CLASS_2_F1C3EBA366E084A2___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x90921C0)

inline static constexpr unsigned int Class_2_F1C3EBA366E084A2_TypeDefinitionIndex = 52578;

class Class_2_F1C3EBA366E084A2 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::NPCComponent* Field_2_7; // 0x18
	::Class_1_9CEAB4C068D9D9DB* Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::Class_1_9CEAB4C068D9D9DB*>* Field_2_0; // 0x28
	::Class_1_9CEAB4C068D9D9DB* Field_2_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::Class_1_9CEAB4C068D9D9DB*>* Field_2_1; // 0x38
	::Class_1_9CEAB4C068D9D9DB* Field_2_2; // 0x40
	::System::UInt32 Field_2_6; // 0x48
	::RPG::GameCore::AdventureBehaviorClampAlertLevel Field_2_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_608DF37B4CA40735(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_608DF37B4CA40735_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC90937CEA9AFCA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_EC90937CEA9AFCA9_OFFSET))(this);
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

	::System::Boolean Method_2_B4BEA6747420EDBC(::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_B4BEA6747420EDBC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_3D33C2FF671640F7()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_3D33C2FF671640F7_OFFSET))(this);
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

	::System::Void Method_2_6DFEF4918C679AF0(::Class_1_9CEAB4C068D9D9DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CEAB4C068D9D9DB*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B8F396A08AE2D04(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_9B8F396A08AE2D04_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B8F396A08AE2D04_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_9B8F396A08AE2D04_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF2C9EB2FC419998(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_FF2C9EB2FC419998_OFFSET))(this, a1);
	}

	::System::Void Method_2_A86C74DA7D6F53E8(::System::Boolean a1, ::RPG::GameCore::AdventureModifierInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_A86C74DA7D6F53E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Boolean Method_2_8A9AF30DD7F083EE(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_8A9AF30DD7F083EE_OFFSET))(this, a1);
	}

	::Class_1_9CEAB4C068D9D9DB* Method_2_24748FC20F375725()
	{
		return ((::Class_1_9CEAB4C068D9D9DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_9CEAB4C068D9D9DB* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_9CEAB4C068D9D9DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F1C3EBA366E084A2___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
