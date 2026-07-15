#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseModifierInstance.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/RPG/GameCore/RtModifierEvent.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
#include "unitysdk/Struct_2_4488F62D15BCE04B.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_452;
class Class_1_5469D397DAE62876;
class Class_1_8A072C6DB11EDA5C;
class Class_1_A2D8E5AB4B623162;
class Class_1_D9413DC99216F54F;
class Class_2_291F7DA21A504FC4_Class_1_9E9CD814853F8968;
class Class_2_7AA0468CE6C1F3D7;
class Class_3_BB8B7764D3497776;
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_291F7DA21A504FC4_DESTROY_OFFSET UNITYSDK_OFFSET(0x16A8B580)
#define CLASS_2_291F7DA21A504FC4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A8EE20)
#define CLASS_2_291F7DA21A504FC4_GETOWNERABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16A8BB70)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_0A1942356C4F6DDB_OFFSET UNITYSDK_OFFSET(0x16A913A0)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x16A8EE90)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_16B5254E8F103A0F_OFFSET UNITYSDK_OFFSET(0x16A8BC20)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x16A914A0)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_3E51EEFB06718274_OFFSET UNITYSDK_OFFSET(0x16A91420)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_4A70D7AAB499694A_OFFSET UNITYSDK_OFFSET(0x16A8E210)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_4C6323B24B55F693_OFFSET UNITYSDK_OFFSET(0x16A8E310)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_63A2948F54D4AE22_OFFSET UNITYSDK_OFFSET(0x16A8E3C0)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_6C333911088C7B35_OFFSET UNITYSDK_OFFSET(0x16A907F0)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_74423D7D8FA233A8_OFFSET UNITYSDK_OFFSET(0x16A8F590)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x16A8EBE0)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_85901F24CD7E77C9_OFFSET UNITYSDK_OFFSET(0x16A908C0)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_868E218E9A597FAC_OFFSET UNITYSDK_OFFSET(0x16A90FB0)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16A8BBC0)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_A2892F137626651E_OFFSET UNITYSDK_OFFSET(0x16A8E650)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_B11BEC95C0E6EDCA_OFFSET UNITYSDK_OFFSET(0x16A90690)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x16A91480)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_B1876E99234659C8_OFFSET UNITYSDK_OFFSET(0x16A90360)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16A91410)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x16A8EDA0)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_CF29E0A0FC701940_OFFSET UNITYSDK_OFFSET(0x16A909A0)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_D3B61B6729519CA7_OFFSET UNITYSDK_OFFSET(0x16A91490)
#define CLASS_2_291F7DA21A504FC4_METHOD_2_D73AAFC35ED56CEB_OFFSET UNITYSDK_OFFSET(0x16A902E0)
#define CLASS_2_291F7DA21A504FC4_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0x16A8EF70)
#define CLASS_2_291F7DA21A504FC4_ONADDED_OFFSET UNITYSDK_OFFSET(0x16A8FCB0)
#define CLASS_2_291F7DA21A504FC4_ONMODIFIERCASTERCHANGED_OFFSET UNITYSDK_OFFSET(0x16A8FCF0)
#define CLASS_2_291F7DA21A504FC4_ONREPLACE_OFFSET UNITYSDK_OFFSET(0x16A90070)
#define CLASS_2_291F7DA21A504FC4_ONSTACK_OFFSET UNITYSDK_OFFSET(0x16A8F680)
#define CLASS_2_291F7DA21A504FC4_TICK_OFFSET UNITYSDK_OFFSET(0x16A90A00)
#define CLASS_2_291F7DA21A504FC4_UNSTACK_OFFSET UNITYSDK_OFFSET(0x16A90020)
#define CLASS_2_291F7DA21A504FC4__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8E830)
#define CLASS_2_291F7DA21A504FC4__SEQUENCEENDANDFLUSH_OFFSET UNITYSDK_OFFSET(0x16A90EF0)
#define CLASS_2_291F7DA21A504FC4__TRYATTACHMUTEXEFFECTS_OFFSET UNITYSDK_OFFSET(0x16A90F60)

inline static constexpr unsigned int Class_2_291F7DA21A504FC4_TypeDefinitionIndex = 51310;

class Class_2_291F7DA21A504FC4 : public ::RPG::GameCore::BaseModifierInstance
{
public:
	::Class_1_D9413DC99216F54F* Field_2_0; // 0xA0
	::RPG::GameCore::RtModifierConfig* Field_2_1; // 0xA8
	::System::Collections::Generic::List_1<::Class_2_291F7DA21A504FC4*>* Field_2_2; // 0xB0
	::System::Action_1<::Class_2_291F7DA21A504FC4*>* Field_2_3; // 0xB8
	::Class_3_BB8B7764D3497776* Field_2_4; // 0xC0
	::Il2CppArray<::Class_2_291F7DA21A504FC4_Class_1_9E9CD814853F8968*>* Field_2_5; // 0xC8
	::Class_1_8A072C6DB11EDA5C* Field_2_6; // 0xD0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_452*>* Field_2_7; // 0xD8
	::RPG::GameCore::GameEntity* Field_2_8; // 0xE0
	::RPG::GameCore::FixPoint Field_2_9; // 0xE8
	::RPG::GameCore::FixPoint Field_2_10; // 0xF0
	::System::Int32 Field_2_11; // 0xF8
	::System::Int32 Field_2_12; // 0xFC
	::System::Nullable_1<::System::Int32> Field_2_13; // 0x100
	::System::Int32 Field_2_14; // 0x108
	::RPG::GameCore::FixPoint Field_2_15; // 0x110
	::RPG::GameCore::FixPoint Field_2_16; // 0x118
	::System::Boolean Field_2_17; // 0x120
	::Struct_2_4488F62D15BCE04B Field_2_18; // 0x121
	::System::Int32 Field_2_19; // 0x124

	::System::Void _ctor(::System::String* a1, ::RPG::GameCore::RtModifierConfig* a2, ::Class_3_BB8B7764D3497776* a3, ::Class_1_A2D8E5AB4B623162* a4, ::Class_2_7AA0468CE6C1F3D7* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::RtModifierConfig*, ::Class_3_BB8B7764D3497776*, ::Class_1_A2D8E5AB4B623162*, ::Class_2_7AA0468CE6C1F3D7*))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_4A70D7AAB499694A(::Class_0_16E4307DCC419505_452* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_452*))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_4A70D7AAB499694A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C6323B24B55F693(::Class_0_16E4307DCC419505_452* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_452*))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_4C6323B24B55F693_OFFSET))(this, a1);
	}

	::System::Void Method_2_63A2948F54D4AE22(::RPG::GameCore::RtModifierBehaviorLifeBinding a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierBehaviorLifeBinding))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_63A2948F54D4AE22_OFFSET))(this, a1);
	}

	static ::Class_2_291F7DA21A504FC4* Method_2_A2892F137626651E(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2)
	{
		return ((::Class_2_291F7DA21A504FC4*(*)(::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_A2892F137626651E_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnActivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_ONACTIVATE_OFFSET))(this);
	}

	::System::Void OnAdded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_ONADDED_OFFSET))(this);
	}

	::System::Void OnModifierCasterChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_ONMODIFIERCASTERCHANGED_OFFSET))(this);
	}

	::System::Void Method_2_16B5254E8F103A0F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_16B5254E8F103A0F_OFFSET))(this, a1, a2);
	}

	::System::Void OnStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_ONSTACK_OFFSET))(this);
	}

	::System::Void UnStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_UNSTACK_OFFSET))(this);
	}

	::System::Void OnReplace(::Class_1_A2D8E5AB4B623162* a1, ::Class_2_7AA0468CE6C1F3D7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2D8E5AB4B623162*, ::Class_2_7AA0468CE6C1F3D7*))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_ONREPLACE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D73AAFC35ED56CEB(::RPG::GameCore::ModifierDeathSource a1, ::Struct_2_4488F62D15BCE04B a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource, ::Struct_2_4488F62D15BCE04B))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_D73AAFC35ED56CEB_OFFSET))(this, a1, a2);
	}

	::System::Void Destroy(::RPG::GameCore::ModifierDeathSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_DESTROY_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B1876E99234659C8(::RPG::GameCore::RtModifierEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtModifierEvent))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_B1876E99234659C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_74423D7D8FA233A8(::RPG::GameCore::RtModifierEvent a1, ::Class_1_5469D397DAE62876* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierEvent, ::Class_1_5469D397DAE62876*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_74423D7D8FA233A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B11BEC95C0E6EDCA(::Class_2_291F7DA21A504FC4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_291F7DA21A504FC4*))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_B11BEC95C0E6EDCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_6C333911088C7B35(::Class_2_291F7DA21A504FC4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_291F7DA21A504FC4*))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_6C333911088C7B35_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_85901F24CD7E77C9(::RPG::GameCore::RtBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_85901F24CD7E77C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CF29E0A0FC701940(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_CF29E0A0FC701940_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_816ED7FC0A7FCCD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_816ED7FC0A7FCCD1_OFFSET))(this);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void _SequenceEndAndFlush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4__SEQUENCEENDANDFLUSH_OFFSET))(this);
	}

	::System::Void _TryAttachMutexEffects(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4__TRYATTACHMUTEXEFFECTS_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameComponentBase* GetOwnerAbilityComponent()
	{
		return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_GETOWNERABILITYCOMPONENT_OFFSET))(this);
	}

	::System::Boolean Method_2_868E218E9A597FAC(::RPG::GameCore::RtModifierPropertyType a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtModifierPropertyType, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_868E218E9A597FAC_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_0A1942356C4F6DDB(::RPG::GameCore::RtModifierPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtModifierPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_0A1942356C4F6DDB_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_2_3E51EEFB06718274()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_3E51EEFB06718274_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierConfig* Method_2_D3B61B6729519CA7()
	{
		return ((::RPG::GameCore::RtModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_D3B61B6729519CA7_OFFSET))(this);
	}

	::Class_1_8A072C6DB11EDA5C* Method_2_24748FC20F375725()
	{
		return ((::Class_1_8A072C6DB11EDA5C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_291F7DA21A504FC4_METHOD_2_24748FC20F375725_OFFSET))(this);
	}
};
