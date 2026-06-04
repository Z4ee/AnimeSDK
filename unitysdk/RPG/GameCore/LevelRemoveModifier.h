#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELREMOVEMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE4CCC0)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE4CD60)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE4CD10)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xCE4CDD0)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCE4CDB0)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_SHOWFLOATMSG_OFFSET UNITYSDK_OFFSET(0xCE4CDF0)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xCE4CC60)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xCE4CDE0)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCE4CDC0)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_SHOWFLOATMSG_OFFSET UNITYSDK_OFFSET(0xCE4CE00)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4CE10)
#define RPG_GAMECORE_LEVELREMOVEMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE4CE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRemoveModifier_TypeDefinitionIndex = 53024;

	class LevelRemoveModifier : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* _ModifierInstance_k__BackingField; // 0x18
		::System::Boolean _ShowFloatMsg_k__BackingField; // 0x20
		::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelRemoveModifier* Init(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::ModifierDeathSource a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::LevelRemoveModifier*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::ModifierDeathSource, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedModifierInstance* get_ModifierInstance()
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_MODIFIERINSTANCE_OFFSET))(this);
		}

		::System::Void set_ModifierInstance(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_MODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ModifierDeathSource get_DeathSource()
		{
			return ((::RPG::GameCore::ModifierDeathSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_DEATHSOURCE_OFFSET))(this);
		}

		::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_DEATHSOURCE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowFloatMsg()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_GET_SHOWFLOATMSG_OFFSET))(this);
		}

		::System::Void set_ShowFloatMsg(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER_SET_SHOWFLOATMSG_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVEMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
