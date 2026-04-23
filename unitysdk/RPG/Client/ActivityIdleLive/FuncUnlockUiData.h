#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveFuncUnlockType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveFuncUnlockHintRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_FUNCUNLOCKUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B29700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FUNCUNLOCKUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B297C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int FuncUnlockUiData_TypeDefinitionIndex = 69482;

	class FuncUnlockUiData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::IdleLiveFuncUnlockType Type; // 0x18
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor(::RPG::GameCore::IdleLiveFuncUnlockHintRow* meta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FUNCUNLOCKUIDATA__CTOR_OFFSET))(this, meta);
		}

		static ::RPG::Client::ActivityIdleLive::FuncUnlockUiData* Create(::System::UInt32 funcUnlockHintId)
		{
			return ((::RPG::Client::ActivityIdleLive::FuncUnlockUiData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FUNCUNLOCKUIDATA_CREATE_OFFSET))(funcUnlockHintId);
		}
	};
}
