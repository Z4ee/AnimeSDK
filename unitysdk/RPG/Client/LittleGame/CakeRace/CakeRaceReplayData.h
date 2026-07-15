#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceReplayRecord; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B82750)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceReplayData_TypeDefinitionIndex = 74138;

	class CakeRaceReplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::CakeRace::CakeRaceReplayRecord*>* Records; // 0x10
		::System::String* ExceptionDesc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEREPLAYDATA__CTOR_OFFSET))(this);
		}
	};
}
