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

class Class_0_16E4307DCC419505_409;
class Class_1_3CE169FA8918702D;
class Class_1_5469D397DAE62876;
class Class_1_A2D8E5AB4B623162;
class Class_1_E44054C0F1A43C8E;
class Class_2_24193089A4D2255F_Class_1_9E9CD814853F8968;
class Class_2_7AA0468CE6C1F3D7;
class Class_3_024B137FE9F1BACE;
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_24193089A4D2255F_DESTROY_OFFSET UNITYSDK_OFFSET(0x128F20D0)
#define CLASS_2_24193089A4D2255F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128F1020)
#define CLASS_2_24193089A4D2255F_GETOWNERABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x128F3CA0)
#define CLASS_2_24193089A4D2255F_METHOD_2_0A1942356C4F6DDB_OFFSET UNITYSDK_OFFSET(0x128F4100)
#define CLASS_2_24193089A4D2255F_METHOD_2_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x128F1090)
#define CLASS_2_24193089A4D2255F_METHOD_2_12D5689C323E6435_OFFSET UNITYSDK_OFFSET(0x128F3370)
#define CLASS_2_24193089A4D2255F_METHOD_2_16B5254E8F103A0F_OFFSET UNITYSDK_OFFSET(0x128F2A40)
#define CLASS_2_24193089A4D2255F_METHOD_2_1D083CAB146B83E4_OFFSET UNITYSDK_OFFSET(0x128F0440)
#define CLASS_2_24193089A4D2255F_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x128F4200)
#define CLASS_2_24193089A4D2255F_METHOD_2_3E51EEFB06718274_OFFSET UNITYSDK_OFFSET(0x128F4180)
#define CLASS_2_24193089A4D2255F_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x128F0370)
#define CLASS_2_24193089A4D2255F_METHOD_2_5C68806FAE4AEDDE_OFFSET UNITYSDK_OFFSET(0x128F0570)
#define CLASS_2_24193089A4D2255F_METHOD_2_6C333911088C7B35_OFFSET UNITYSDK_OFFSET(0x128F3460)
#define CLASS_2_24193089A4D2255F_METHOD_2_74423D7D8FA233A8_OFFSET UNITYSDK_OFFSET(0x128F18C0)
#define CLASS_2_24193089A4D2255F_METHOD_2_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x128F0DC0)
#define CLASS_2_24193089A4D2255F_METHOD_2_868E218E9A597FAC_OFFSET UNITYSDK_OFFSET(0x128F3CF0)
#define CLASS_2_24193089A4D2255F_METHOD_2_A106CAAAE67EBA4E_OFFSET UNITYSDK_OFFSET(0x128F0820)
#define CLASS_2_24193089A4D2255F_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x128F2B60)
#define CLASS_2_24193089A4D2255F_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x128F41E0)
#define CLASS_2_24193089A4D2255F_METHOD_2_B1876E99234659C8_OFFSET UNITYSDK_OFFSET(0x128F3030)
#define CLASS_2_24193089A4D2255F_METHOD_2_C1B6F4C96C8BE2FB_OFFSET UNITYSDK_OFFSET(0x128F35D0)
#define CLASS_2_24193089A4D2255F_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x128F4170)
#define CLASS_2_24193089A4D2255F_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x128F0FA0)
#define CLASS_2_24193089A4D2255F_METHOD_2_D3B61B6729519CA7_OFFSET UNITYSDK_OFFSET(0x128F41F0)
#define CLASS_2_24193089A4D2255F_METHOD_2_D73AAFC35ED56CEB_OFFSET UNITYSDK_OFFSET(0x128F2FB0)
#define CLASS_2_24193089A4D2255F_METHOD_2_E84EF6A7AD54388C_OFFSET UNITYSDK_OFFSET(0x128F3530)
#define CLASS_2_24193089A4D2255F_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0x128F1170)
#define CLASS_2_24193089A4D2255F_ONADDED_OFFSET UNITYSDK_OFFSET(0x128F2890)
#define CLASS_2_24193089A4D2255F_ONMODIFIERCASTERCHANGED_OFFSET UNITYSDK_OFFSET(0x128F28D0)
#define CLASS_2_24193089A4D2255F_ONREPLACE_OFFSET UNITYSDK_OFFSET(0x128F2C10)
#define CLASS_2_24193089A4D2255F_ONSTACK_OFFSET UNITYSDK_OFFSET(0x128F19C0)
#define CLASS_2_24193089A4D2255F_TICK_OFFSET UNITYSDK_OFFSET(0x128F36D0)
#define CLASS_2_24193089A4D2255F_UNSTACK_OFFSET UNITYSDK_OFFSET(0x128F2BC0)
#define CLASS_2_24193089A4D2255F__CTOR_OFFSET UNITYSDK_OFFSET(0x128F0970)
#define CLASS_2_24193089A4D2255F__SEQUENCEENDANDFLUSH_OFFSET UNITYSDK_OFFSET(0x128F3B60)
#define CLASS_2_24193089A4D2255F__TRYATTACHMUTEXEFFECTS_OFFSET UNITYSDK_OFFSET(0x128F3C50)
#define CLASS_2_24193089A4D2255F___IFIXBASEPROXY_DESTROY_OFFSET UNITYSDK_OFFSET(0x128F4220)
#define CLASS_2_24193089A4D2255F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128F4210)
#define CLASS_2_24193089A4D2255F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x128F4230)
#define CLASS_2_24193089A4D2255F___IFIXBASEPROXY__SEQUENCEENDANDFLUSH_OFFSET UNITYSDK_OFFSET(0x128F42A0)

inline static constexpr unsigned int Class_2_24193089A4D2255F_TypeDefinitionIndex = 49561;

class Class_2_24193089A4D2255F : public ::RPG::GameCore::BaseModifierInstance
{
public:
	::RPG::GameCore::GameEntity* Field_2_11; // 0xA0
	::Class_3_024B137FE9F1BACE* Field_2_10; // 0xA8
	::Class_1_3CE169FA8918702D* Field_2_17; // 0xB0
	::System::Collections::Generic::List_1<::Class_2_24193089A4D2255F*>* Field_2_18; // 0xB8
	::Il2CppArray<::Class_2_24193089A4D2255F_Class_1_9E9CD814853F8968*>* Field_2_19; // 0xC0
	::Class_1_E44054C0F1A43C8E* Field_2_15; // 0xC8
	::RPG::GameCore::RtModifierConfig* Field_2_14; // 0xD0
	::System::Action_1<::Class_2_24193089A4D2255F*>* Field_2_16; // 0xD8
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_409*>* Field_2_0; // 0xE0
	::Struct_2_4488F62D15BCE04B Field_2_13; // 0xE8
	::System::Boolean Field_2_12; // 0xEB
	::System::Int32 Field_2_1; // 0xEC
	::System::Int32 Field_2_2; // 0xF0
	::System::Int32 Field_2_6; // 0xF4
	::RPG::GameCore::FixPoint Field_2_8; // 0xF8
	::RPG::GameCore::FixPoint Field_2_3; // 0x100
	::RPG::GameCore::FixPoint Field_2_4; // 0x108
	::System::Nullable_1<::System::Int32> Field_2_7; // 0x110
	::System::Int32 Field_2_5; // 0x118
	::RPG::GameCore::FixPoint Field_2_9; // 0x120

	::System::Void _ctor(::System::String* a1, ::RPG::GameCore::RtModifierConfig* a2, ::Class_3_024B137FE9F1BACE* a3, ::Class_1_A2D8E5AB4B623162* a4, ::Class_2_7AA0468CE6C1F3D7* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::RtModifierConfig*, ::Class_3_024B137FE9F1BACE*, ::Class_1_A2D8E5AB4B623162*, ::Class_2_7AA0468CE6C1F3D7*))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_409* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_409*))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D083CAB146B83E4(::Class_0_16E4307DCC419505_409* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_409*))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_1D083CAB146B83E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5C68806FAE4AEDDE(::RPG::GameCore::RtModifierBehaviorLifeBinding a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierBehaviorLifeBinding))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_5C68806FAE4AEDDE_OFFSET))(this, a1);
	}

	static ::Class_2_24193089A4D2255F* Method_2_A106CAAAE67EBA4E(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2)
	{
		return ((::Class_2_24193089A4D2255F*(*)(::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_A106CAAAE67EBA4E_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnActivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_ONACTIVATE_OFFSET))(this);
	}

	::System::Void OnAdded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_ONADDED_OFFSET))(this);
	}

	::System::Void OnModifierCasterChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_ONMODIFIERCASTERCHANGED_OFFSET))(this);
	}

	::System::Void Method_2_16B5254E8F103A0F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_16B5254E8F103A0F_OFFSET))(this, a1, a2);
	}

	::System::Void OnStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_ONSTACK_OFFSET))(this);
	}

	::System::Void UnStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_UNSTACK_OFFSET))(this);
	}

	::System::Void OnReplace(::Class_1_A2D8E5AB4B623162* a1, ::Class_2_7AA0468CE6C1F3D7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2D8E5AB4B623162*, ::Class_2_7AA0468CE6C1F3D7*))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_ONREPLACE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D73AAFC35ED56CEB(::RPG::GameCore::ModifierDeathSource a1, ::Struct_2_4488F62D15BCE04B a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource, ::Struct_2_4488F62D15BCE04B))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_D73AAFC35ED56CEB_OFFSET))(this, a1, a2);
	}

	::System::Void Destroy(::RPG::GameCore::ModifierDeathSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_DESTROY_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B1876E99234659C8(::RPG::GameCore::RtModifierEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtModifierEvent))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_B1876E99234659C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_74423D7D8FA233A8(::RPG::GameCore::RtModifierEvent a1, ::Class_1_5469D397DAE62876* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierEvent, ::Class_1_5469D397DAE62876*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_74423D7D8FA233A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_12D5689C323E6435(::Class_2_24193089A4D2255F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_12D5689C323E6435_OFFSET))(this, a1);
	}

	::System::Void Method_2_6C333911088C7B35(::Class_2_24193089A4D2255F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_6C333911088C7B35_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E84EF6A7AD54388C(::RPG::GameCore::RtBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_E84EF6A7AD54388C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C1B6F4C96C8BE2FB(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_C1B6F4C96C8BE2FB_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_816ED7FC0A7FCCD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_816ED7FC0A7FCCD1_OFFSET))(this);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void _SequenceEndAndFlush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F__SEQUENCEENDANDFLUSH_OFFSET))(this);
	}

	::System::Void _TryAttachMutexEffects(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F__TRYATTACHMUTEXEFFECTS_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameComponentBase* GetOwnerAbilityComponent()
	{
		return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_GETOWNERABILITYCOMPONENT_OFFSET))(this);
	}

	::System::Boolean Method_2_868E218E9A597FAC(::RPG::GameCore::RtModifierPropertyType a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtModifierPropertyType, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_868E218E9A597FAC_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_0A1942356C4F6DDB(::RPG::GameCore::RtModifierPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtModifierPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_0A1942356C4F6DDB_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_2_3E51EEFB06718274()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_3E51EEFB06718274_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierConfig* Method_2_D3B61B6729519CA7()
	{
		return ((::RPG::GameCore::RtModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_D3B61B6729519CA7_OFFSET))(this);
	}

	::Class_1_E44054C0F1A43C8E* Method_2_24748FC20F375725()
	{
		return ((::Class_1_E44054C0F1A43C8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Destroy(::RPG::GameCore::ModifierDeathSource P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F___IFIXBASEPROXY_DESTROY_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__SequenceEndAndFlush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24193089A4D2255F___IFIXBASEPROXY__SEQUENCEENDANDFLUSH_OFFSET))(this);
	}
};
