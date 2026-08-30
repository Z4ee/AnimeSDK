#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveFuncUnlockType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveFuncUnlockHintRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_FUNCUNLOCKUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC587FC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FUNCUNLOCKUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC588080)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int FuncUnlockUiData_TypeDefinitionIndex = 75124;

	class FuncUnlockUiData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::RPG::GameCore::IdleLiveFuncUnlockType Type; // 0x28

		::System::Void _ctor(::RPG::GameCore::IdleLiveFuncUnlockHintRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FUNCUNLOCKUIDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityIdleLive::FuncUnlockUiData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::FuncUnlockUiData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FUNCUNLOCKUIDATA_CREATE_OFFSET))(a1);
		}
	};
}
