#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA976CA0)
#define RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA976D40)
#define RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA976CF0)
#define RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xA976C50)
#define RPG_GAMECORE_LEVELAFTERSTACKMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA976D90)
#define RPG_GAMECORE_LEVELAFTERSTACKMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA976DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAfterStackModifier_TypeDefinitionIndex = 45671;

	class LevelAfterStackModifier : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSTACKMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelAfterStackModifier* Init(::RPG::GameCore::TurnBasedModifierInstance* mdf)
		{
			return ((::RPG::GameCore::LevelAfterStackModifier*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_INIT_OFFSET))(this, mdf);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSTACKMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSTACKMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
