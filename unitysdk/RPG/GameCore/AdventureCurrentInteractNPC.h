#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ADVENTURECURRENTINTERACTNPC_GETCURRENTINTERACTNPCID_OFFSET UNITYSDK_OFFSET(0x15407A20)
#define RPG_GAMECORE_ADVENTURECURRENTINTERACTNPC_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x154079D0)
#define RPG_GAMECORE_ADVENTURECURRENTINTERACTNPC_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15407980)
#define RPG_GAMECORE_ADVENTURECURRENTINTERACTNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x15407970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCurrentInteractNPC_TypeDefinitionIndex = 54060;

	class AdventureCurrentInteractNPC : public ::System::Object
	{
	public:
		::System::UInt32 _CurrentInteractNPCID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECURRENTINTERACTNPC__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECURRENTINTERACTNPC_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECURRENTINTERACTNPC_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetCurrentInteractNPCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECURRENTINTERACTNPC_GETCURRENTINTERACTNPCID_OFFSET))(this);
		}
	};
}
