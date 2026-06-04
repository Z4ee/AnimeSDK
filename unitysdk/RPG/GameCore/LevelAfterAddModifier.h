#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELAFTERADDMODIFIER_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE324A0)
#define RPG_GAMECORE_LEVELAFTERADDMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE32540)
#define RPG_GAMECORE_LEVELAFTERADDMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE324F0)
#define RPG_GAMECORE_LEVELAFTERADDMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xCE32450)
#define RPG_GAMECORE_LEVELAFTERADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xCE32590)
#define RPG_GAMECORE_LEVELAFTERADDMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE325A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAfterAddModifier_TypeDefinitionIndex = 53019;

	class LevelAfterAddModifier : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERADDMODIFIER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelAfterAddModifier* Init(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::GameCore::LevelAfterAddModifier*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERADDMODIFIER_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERADDMODIFIER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERADDMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERADDMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERADDMODIFIER___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
