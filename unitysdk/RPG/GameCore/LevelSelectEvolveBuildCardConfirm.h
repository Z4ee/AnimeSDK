#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDCONFIRM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE02FA0)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDCONFIRM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BE02F50)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDCONFIRM_INIT_OFFSET UNITYSDK_OFFSET(0x1BE02F00)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE02FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSelectEvolveBuildCardConfirm_TypeDefinitionIndex = 54282;

	class LevelSelectEvolveBuildCardConfirm : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 SelectIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDCONFIRM__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectEvolveBuildCardConfirm* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelSelectEvolveBuildCardConfirm*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDCONFIRM_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDCONFIRM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDCONFIRM_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
