#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ABILITYCHARACTERMODELCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x106C3C60)
#define RPG_GAMECORE_ABILITYCHARACTERMODELCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x106C3C20)
#define RPG_GAMECORE_ABILITYCHARACTERMODELCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x106C3BD0)
#define RPG_GAMECORE_ABILITYCHARACTERMODELCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x106C3CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCharacterModelChange_TypeDefinitionIndex = 54031;

	class AbilityCharacterModelChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCHARACTERMODELCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCharacterModelChange* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AbilityCharacterModelChange*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCHARACTERMODELCHANGE_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCHARACTERMODELCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCHARACTERMODELCHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
