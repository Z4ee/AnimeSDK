#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_NOTIFYSHOWFUNCBTNPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x190031E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyShowFuncBtnParam_TypeDefinitionIndex = 53526;

	class NotifyShowFuncBtnParam : public ::System::Object
	{
	public:
		::System::String* CustomEvent; // 0x10
		::System::String* OverrideIconPath; // 0x18
		::RPG::GameCore::GameEntity* OwnerEntity; // 0x20
		::RPG::GameCore::PuzzleFunc FuncType; // 0x28
		::System::Single CDDuration; // 0x2C
		::System::Boolean ShowBtnEffect; // 0x30
		::System::Boolean ShowBtnFuncHint; // 0x31
		::System::Int32 MissionID; // 0x34
		::RPG::Client::TextID BtnHintTextID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYSHOWFUNCBTNPARAM__CTOR_OFFSET))(this);
		}
	};
}
