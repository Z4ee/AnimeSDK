#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtModifierEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtAbilityPropertyRangeGroup; }
namespace RPG::GameCore { class RtDynamicValueRangeGroup; }
namespace RPG::GameCore { class RtModifierCallbackConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_17E28D96F5D35177_OFFSET UNITYSDK_OFFSET(0x1CCEB4C0)
#define RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_9E44E6F8EAB9EA1D_OFFSET UNITYSDK_OFFSET(0x1CCEB420)
#define RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_9F91AECC294331DD_OFFSET UNITYSDK_OFFSET(0x1CCEBCF0)
#define RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_A95C7D9BBBD85EEB_OFFSET UNITYSDK_OFFSET(0x1CCEBC40)
#define RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_AA0E071F299C1742_OFFSET UNITYSDK_OFFSET(0x1CCEBB30)
#define RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_B49F6902F02AD973_OFFSET UNITYSDK_OFFSET(0x1CCEBA90)
#define RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_FFB102BD9EB3B306_OFFSET UNITYSDK_OFFSET(0x1CCEBC90)
#define RPG_GAMECORE_RTMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEB480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtModifierConfig_TypeDefinitionIndex = 17446;

	class RtModifierConfig : public ::RPG::GameCore::ModifierConfig
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet__RtModifierEventNameList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RtModifierConfig_TypeDefinitionIndex)->GetStaticField(0x6CDD0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__RtModifierEventPriorityNameList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RtModifierConfig_TypeDefinitionIndex)->GetStaticField(0x6CDD8);
		}
		::RPG::GameCore::FixPoint LifeTime; // 0x38
		::System::Int32 MaxLayer; // 0x40
		::System::Int32 LayerAddWhenStack; // 0x44
		::RPG::GameCore::FixPoint TickInterval; // 0x48
		::System::String* EffectPriority; // 0x50
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* BehaviorFlagList; // 0x58
		::Il2CppArray<::RPG::GameCore::RtModifierCallbackConfig*>* _CallbackList; // 0x60
		::Il2CppArray<::RPG::GameCore::RtDynamicValueRangeGroup*>* OnDynamicValueChange; // 0x68
		::Il2CppArray<::RPG::GameCore::RtAbilityPropertyRangeGroup*>* OnAbilityPropertyChange; // 0x70
		::System::Boolean IsGlobalModifier; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9E44E6F8EAB9EA1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_9E44E6F8EAB9EA1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_17E28D96F5D35177(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_17E28D96F5D35177_OFFSET))(a1, a2);
		}

		::System::Boolean Method_3_B49F6902F02AD973(::RPG::GameCore::RtBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_B49F6902F02AD973_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_AA0E071F299C1742(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_AA0E071F299C1742_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtModifierCallbackConfig* Method_3_A95C7D9BBBD85EEB(::RPG::GameCore::RtModifierEvent a1)
		{
			return ((::RPG::GameCore::RtModifierCallbackConfig*(*)(::PVOID, ::RPG::GameCore::RtModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_A95C7D9BBBD85EEB_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Method_3_FFB102BD9EB3B306(::RPG::GameCore::RtModifierEvent a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID, ::RPG::GameCore::RtModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_FFB102BD9EB3B306_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_9F91AECC294331DD(::RPG::GameCore::RtModifierEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_METHOD_3_9F91AECC294331DD_OFFSET))(this, a1);
		}
	};
}
