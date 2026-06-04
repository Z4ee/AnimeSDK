#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEBUFFTOASTNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D3160)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffToastNotify_TypeDefinitionIndex = 66868;

	class BattleBuffToastNotify : public ::System::Object
	{
	public:
		::System::String* CustomUIModelAttachPointName; // 0x10
		::RPG::GameCore::GameEntity* Entity; // 0x18
		::RPG::Client::TextID TextID; // 0x20
		::RPG::GameCore::FloatMessageType MessageType; // 0x30
		::System::Boolean ForceVisible; // 0x34
		::System::Boolean IsShowUIMessageFromModel; // 0x35
		::System::Boolean ScreenSpaceFloatMsg; // 0x36
		::System::Boolean UseFixedPosition; // 0x37
		::RPG::MVector3 CustomOffset; // 0x38
		::System::Single InternalTime; // 0x44
		::System::Single DelayTime; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFTOASTNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
