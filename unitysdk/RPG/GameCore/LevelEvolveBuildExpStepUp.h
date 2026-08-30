#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD242D0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD24280)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GET_NEWSTEP_OFFSET UNITYSDK_OFFSET(0x1DD24340)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GET_OLDSTEP_OFFSET UNITYSDK_OFFSET(0x1DD24320)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_INIT_OFFSET UNITYSDK_OFFSET(0x1DD24220)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_SET_NEWSTEP_OFFSET UNITYSDK_OFFSET(0x1DD24350)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_SET_OLDSTEP_OFFSET UNITYSDK_OFFSET(0x1DD24330)
#define RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD24360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildExpStepUp_TypeDefinitionIndex = 57007;

	class LevelEvolveBuildExpStepUp : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 _OldStep_k__BackingField; // 0x18
		::System::UInt32 _NewStep_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEvolveBuildExpStepUp* Init(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LevelEvolveBuildExpStepUp*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_INIT_OFFSET))(this, a1, a2);
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

		::System::Void set_OldStep(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_SET_OLDSTEP_OFFSET))(this, a1);
		}

		::System::UInt32 get_NewStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_GET_NEWSTEP_OFFSET))(this);
		}

		::System::Void set_NewStep(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDEXPSTEPUP_SET_NEWSTEP_OFFSET))(this, a1);
		}
	};
}
