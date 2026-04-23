#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class HitMotionParams; }

#define RPG_GAMECORE_ENTITYHITMOTION_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB62C460)
#define RPG_GAMECORE_ENTITYHITMOTION_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB62C420)
#define RPG_GAMECORE_ENTITYHITMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB62C410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityHitMotion_TypeDefinitionIndex = 52231;

	class EntityHitMotion : public ::System::Object
	{
	public:
		::RPG::GameCore::HitMotionParams* MotionParams; // 0x10
		::System::Boolean IgnoreHeightCheck; // 0x18
		::System::Single FreezeTime; // 0x1C
		::System::UInt32 _EntityRuntimeID; // 0x20

		::System::Void _ctor(::System::UInt32 nEntityRuntimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYHITMOTION__CTOR_OFFSET))(this, nEntityRuntimeID);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYHITMOTION_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYHITMOTION_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
