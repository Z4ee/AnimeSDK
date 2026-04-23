#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_NOTIFYSHOWFUNCBTNPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB6FE2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyShowFuncBtnParam_TypeDefinitionIndex = 49121;

	class NotifyShowFuncBtnParam : public ::System::Object
	{
	public:
		::System::String* OverrideIconPath; // 0x10
		::RPG::GameCore::GameEntity* OwnerEntity; // 0x18
		::System::String* CustomEvent; // 0x20
		::RPG::Client::TextID BtnHintTextID; // 0x28
		::System::Boolean ShowBtnFuncHint; // 0x38
		::System::Boolean ShowBtnEffect; // 0x39
		::System::Single CDDuration; // 0x3C
		::System::Int32 MissionID; // 0x40
		::RPG::GameCore::PuzzleFunc FuncType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYSHOWFUNCBTNPARAM__CTOR_OFFSET))(this);
		}
	};
}
