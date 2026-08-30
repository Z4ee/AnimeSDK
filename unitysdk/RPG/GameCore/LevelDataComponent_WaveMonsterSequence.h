#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelDataComponent_PerMonster; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELDATACOMPONENT_WAVEMONSTERSEQUENCE_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1DD211E0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_WAVEMONSTERSEQUENCE_GET_PASSCOUNT_OFFSET UNITYSDK_OFFSET(0x1DD216D0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_WAVEMONSTERSEQUENCE_GET_SUMMONEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1DD213D0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_WAVEMONSTERSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD1BB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataComponent_WaveMonsterSequence_TypeDefinitionIndex = 57749;

	class LevelDataComponent_WaveMonsterSequence : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::LevelDataComponent_PerMonster*>* Sequence; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_WAVEMONSTERSEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_WAVEMONSTERSEQUENCE_GET_MAXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SummonedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_WAVEMONSTERSEQUENCE_GET_SUMMONEDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_PassCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_WAVEMONSTERSEQUENCE_GET_PASSCOUNT_OFFSET))(this);
		}
	};
}
