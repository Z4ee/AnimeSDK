#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseModifierInstance.h"
#include "unitysdk/RPG/GameCore/ChessModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ChessModifierEvent.h"

class Class_1_5469D397DAE62876;
class Class_1_A2D8E5AB4B623162;
class Class_2_9578C231AE3EB57A;
class Class_2_DE4AC8AE3B4F2B78_Class_4_7667F072E5B7101F;
class Class_2_EA46C5F9F8D34AB4;
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class ChessModifierConfig; }
namespace RPG::GameCore { class GameComponentBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DE4AC8AE3B4F2B78_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111C6DC0)
#define CLASS_2_DE4AC8AE3B4F2B78_GETOWNERABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x111C7550)
#define CLASS_2_DE4AC8AE3B4F2B78_GET_ADDTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x111C7640)
#define CLASS_2_DE4AC8AE3B4F2B78_GET_CUREVENTTYPE_OFFSET UNITYSDK_OFFSET(0x111C7680)
#define CLASS_2_DE4AC8AE3B4F2B78_GET_RENEWTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x111C7660)
#define CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_20EF91E75BB7E34F_OFFSET UNITYSDK_OFFSET(0x111C73B0)
#define CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0x111C72E0)
#define CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x111C70B0)
#define CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_6EFE459E10EB1D5E_OFFSET UNITYSDK_OFFSET(0x111C7210)
#define CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_7DDE67A206CF4ECC_OFFSET UNITYSDK_OFFSET(0x111C6F00)
#define CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_B8901FF181A22875_OFFSET UNITYSDK_OFFSET(0x111C75F0)
#define CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_C81FA0FD0D507FD5_OFFSET UNITYSDK_OFFSET(0x111C7450)
#define CLASS_2_DE4AC8AE3B4F2B78_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0x111C6E80)
#define CLASS_2_DE4AC8AE3B4F2B78_ONADDED_OFFSET UNITYSDK_OFFSET(0x111C6FF0)
#define CLASS_2_DE4AC8AE3B4F2B78_ONMODIFIERCASTERCHANGED_OFFSET UNITYSDK_OFFSET(0x111C7030)
#define CLASS_2_DE4AC8AE3B4F2B78_ONSTACK_OFFSET UNITYSDK_OFFSET(0x111C6FB0)
#define CLASS_2_DE4AC8AE3B4F2B78_SET_ADDTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x111C7650)
#define CLASS_2_DE4AC8AE3B4F2B78_SET_CUREVENTTYPE_OFFSET UNITYSDK_OFFSET(0x111C7690)
#define CLASS_2_DE4AC8AE3B4F2B78_SET_RENEWTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x111C7670)
#define CLASS_2_DE4AC8AE3B4F2B78_UNSTACK_OFFSET UNITYSDK_OFFSET(0x111C7070)
#define CLASS_2_DE4AC8AE3B4F2B78__CTOR_OFFSET UNITYSDK_OFFSET(0x111C6CE0)
#define CLASS_2_DE4AC8AE3B4F2B78__TRYATTACHMUTEXEFFECTS_OFFSET UNITYSDK_OFFSET(0x111C75A0)
#define CLASS_2_DE4AC8AE3B4F2B78___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111C76A0)

inline static constexpr unsigned int Class_2_DE4AC8AE3B4F2B78_TypeDefinitionIndex = 45184;

class Class_2_DE4AC8AE3B4F2B78 : public ::RPG::GameCore::BaseModifierInstance
{
public:
	::System::Collections::Generic::List_1<::Class_2_DE4AC8AE3B4F2B78*>* Field_2_8; // 0xA0
	::Class_2_EA46C5F9F8D34AB4* Field_2_6; // 0xA8
	::RPG::GameCore::ChessModifierConfig* Field_2_7; // 0xB0
	::Il2CppArray<::Class_2_DE4AC8AE3B4F2B78_Class_4_7667F072E5B7101F*>* Field_2_10; // 0xB8
	::System::Int32 Field_2_2; // 0xC0
	::System::Int32 _RenewTurnCount_k__BackingField; // 0xC4
	::System::Int32 Field_2_1; // 0xC8
	::System::Int32 _AddTurnCount_k__BackingField; // 0xCC
	::System::Int32 Field_2_0; // 0xD0
	::System::Int32 Field_2_3; // 0xD4
	::RPG::GameCore::ChessModifierEvent _CurEventType_k__BackingField; // 0xD8

	::System::Void _ctor(::System::String* a1, ::RPG::GameCore::ChessModifierConfig* a2, ::Class_2_EA46C5F9F8D34AB4* a3, ::Class_1_A2D8E5AB4B623162* a4, ::Class_2_9578C231AE3EB57A* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ChessModifierConfig*, ::Class_2_EA46C5F9F8D34AB4*, ::Class_1_A2D8E5AB4B623162*, ::Class_2_9578C231AE3EB57A*))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_DISPOSE_OFFSET))(this);
	}

	::System::Void OnActivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_ONACTIVATE_OFFSET))(this);
	}

	::System::Void OnAdded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_ONADDED_OFFSET))(this);
	}

	::System::Void OnModifierCasterChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_ONMODIFIERCASTERCHANGED_OFFSET))(this);
	}

	::System::Void OnStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_ONSTACK_OFFSET))(this);
	}

	::System::Void UnStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_UNSTACK_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_7DDE67A206CF4ECC(::RPG::GameCore::ChessModifierEvent a1, ::Class_1_5469D397DAE62876* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessModifierEvent, ::Class_1_5469D397DAE62876*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_7DDE67A206CF4ECC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6EFE459E10EB1D5E(::Class_2_DE4AC8AE3B4F2B78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DE4AC8AE3B4F2B78*))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_6EFE459E10EB1D5E_OFFSET))(this, a1);
	}

	::System::Void Method_2_323DCA18419DFB89(::Class_2_DE4AC8AE3B4F2B78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DE4AC8AE3B4F2B78*))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_323DCA18419DFB89_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_20EF91E75BB7E34F(::RPG::GameCore::ChessModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChessModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_20EF91E75BB7E34F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C81FA0FD0D507FD5(::Il2CppArray<::RPG::GameCore::ChessModifierBehaviorFlag>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChessModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_C81FA0FD0D507FD5_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameComponentBase* GetOwnerAbilityComponent()
	{
		return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_GETOWNERABILITYCOMPONENT_OFFSET))(this);
	}

	::System::Void _TryAttachMutexEffects(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78__TRYATTACHMUTEXEFFECTS_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ChessModifierConfig* Method_2_B8901FF181A22875()
	{
		return ((::RPG::GameCore::ChessModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_METHOD_2_B8901FF181A22875_OFFSET))(this);
	}

	::System::Int32 get_AddTurnCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_GET_ADDTURNCOUNT_OFFSET))(this);
	}

	::System::Void set_AddTurnCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_SET_ADDTURNCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_RenewTurnCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_GET_RENEWTURNCOUNT_OFFSET))(this);
	}

	::System::Void set_RenewTurnCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_SET_RENEWTURNCOUNT_OFFSET))(this, value);
	}

	::RPG::GameCore::ChessModifierEvent get_CurEventType()
	{
		return ((::RPG::GameCore::ChessModifierEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_GET_CUREVENTTYPE_OFFSET))(this);
	}

	::System::Void set_CurEventType(::RPG::GameCore::ChessModifierEvent value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessModifierEvent))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78_SET_CUREVENTTYPE_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE4AC8AE3B4F2B78___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
