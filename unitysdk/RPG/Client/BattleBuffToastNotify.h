#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEBUFFTOASTNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x9193D20)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffToastNotify_TypeDefinitionIndex = 58615;

	class BattleBuffToastNotify : public ::System::Object
	{
	public:
		::System::String* CustomUIModelAttachPointName; // 0x10
		::RPG::GameCore::GameEntity* Entity; // 0x18
		::System::Single DelayTime; // 0x20
		::System::Boolean IsShowUIMessageFromModel; // 0x24
		::System::Boolean UseFixedPosition; // 0x25
		::System::Boolean ForceVisible; // 0x26
		::System::Boolean ScreenSpaceFloatMsg; // 0x27
		::RPG::GameCore::FloatMessageType MessageType; // 0x28
		::RPG::Client::TextID TextID; // 0x30
		::RPG::MVector3 CustomOffset; // 0x40
		::System::Single InternalTime; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFTOASTNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
