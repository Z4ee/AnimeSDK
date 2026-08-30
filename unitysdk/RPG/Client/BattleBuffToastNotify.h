#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEBUFFTOASTNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xC8F0810)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffToastNotify_TypeDefinitionIndex = 71491;

	class BattleBuffToastNotify : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::String* CustomUIModelAttachPointName; // 0x18
		::RPG::MVector3 CustomOffset; // 0x20
		::RPG::Client::TextID TextID; // 0x30
		::System::Single InternalTime; // 0x40
		::System::Single DelayTime; // 0x44
		::RPG::GameCore::FloatMessageType MessageType; // 0x48
		::System::Boolean IsShowUIMessageFromModel; // 0x4C
		::System::Boolean ScreenSpaceFloatMsg; // 0x4D
		::System::Boolean ForceVisible; // 0x4E
		::System::Boolean UseFixedPosition; // 0x4F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFTOASTNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
