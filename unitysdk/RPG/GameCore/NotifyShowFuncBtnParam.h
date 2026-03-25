#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_NOTIFYSHOWFUNCBTNPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FE5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyShowFuncBtnParam_TypeDefinitionIndex = 43130;

	class NotifyShowFuncBtnParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* OwnerEntity; // 0x10
		::System::String* CustomEvent; // 0x18
		::System::String* OverrideIconPath; // 0x20
		::System::Int32 MissionID; // 0x28
		::System::Boolean ShowBtnEffect; // 0x2C
		::System::Boolean ShowBtnFuncHint; // 0x2D
		::RPG::GameCore::PuzzleFunc FuncType; // 0x30
		::System::Single CDDuration; // 0x34
		::RPG::Client::TextID BtnHintTextID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYSHOWFUNCBTNPARAM__CTOR_OFFSET))(this);
		}
	};
}
