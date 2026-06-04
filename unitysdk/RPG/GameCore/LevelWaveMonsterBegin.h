#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELWAVEMONSTERBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE574E0)
#define RPG_GAMECORE_LEVELWAVEMONSTERBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE57530)
#define RPG_GAMECORE_LEVELWAVEMONSTERBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCE57580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelWaveMonsterBegin_TypeDefinitionIndex = 52977;

	class LevelWaveMonsterBegin : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* WaveMonsterIds; // 0x10
		::System::Int32 WaveCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAVEMONSTERBEGIN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAVEMONSTERBEGIN_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAVEMONSTERBEGIN_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
