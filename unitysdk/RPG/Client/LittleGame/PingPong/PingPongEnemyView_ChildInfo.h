#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGENEMYVIEW_CHILDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9A38B80)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongEnemyView_ChildInfo_TypeDefinitionIndex = 62439;

	class PingPongEnemyView_ChildInfo : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::Transform* Trans; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGENEMYVIEW_CHILDINFO__CTOR_OFFSET))(this);
		}
	};
}
