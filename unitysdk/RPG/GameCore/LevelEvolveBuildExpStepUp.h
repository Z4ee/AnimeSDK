#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98A470)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98A420)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GET_NEWSTEP_OFFSET UNITYSDK_OFFSET(0xA98A4E0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GET_OLDSTEP_OFFSET UNITYSDK_OFFSET(0xA98A4C0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_INIT_OFFSET UNITYSDK_OFFSET(0xA98A3C0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_SET_NEWSTEP_OFFSET UNITYSDK_OFFSET(0xA98A4F0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_SET_OLDSTEP_OFFSET UNITYSDK_OFFSET(0xA98A4D0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP__CTOR_OFFSET UNITYSDK_OFFSET(0xA98A500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildExpStepUp_TypeDefinitionIndex = 45723;

	class LevelEvolveBuildExpStepUp : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 _OldStep_k__BackingField; // 0x18
		::System::UInt32 _NewStep_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEvolveBuildExpStepUp* Init(::System::UInt32 oldStep, ::System::UInt32 newStep)
		{
			return ((::RPG::GameCore::LevelEvolveBuildExpStepUp*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_INIT_OFFSET))(this, oldStep, newStep);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_OldStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GET_OLDSTEP_OFFSET))(this);
		}

		::System::Void set_OldStep(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_SET_OLDSTEP_OFFSET))(this, value);
		}

		::System::UInt32 get_NewStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GET_NEWSTEP_OFFSET))(this);
		}

		::System::Void set_NewStep(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_SET_NEWSTEP_OFFSET))(this, value);
		}
	};
}
