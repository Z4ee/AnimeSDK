#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEBUFFTOASTNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x9DFB380)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffToastNotify_TypeDefinitionIndex = 65935;

	class BattleBuffToastNotify : public ::System::Object
	{
	public:
		::System::String* CustomUIModelAttachPointName; // 0x10
		::RPG::GameCore::GameEntity* Entity; // 0x18
		::System::Boolean UseFixedPosition; // 0x20
		::System::Boolean ScreenSpaceFloatMsg; // 0x21
		::System::Boolean ForceVisible; // 0x22
		::System::Boolean IsShowUIMessageFromModel; // 0x23
		::RPG::Client::TextID TextID; // 0x28
		::System::Single DelayTime; // 0x38
		::RPG::MVector3 CustomOffset; // 0x3C
		::RPG::GameCore::FloatMessageType MessageType; // 0x48
		::System::Single InternalTime; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFTOASTNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
