#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/PingPongView.h"

namespace RPG::Client::LittleGame::PingPong { class PingPongEnemyView_ChildInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGENEMYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D7E00)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongEnemyView_TypeDefinitionIndex = 76202;

	class PingPongEnemyView : public ::RPG::Client::LittleGame::PingPong::PingPongView
	{
	public:
		::UnityEngine::Transform* BoneRoot; // 0x38
		::UnityEngine::Transform* ModelRoot; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PingPong::PingPongEnemyView_ChildInfo*>* BoneChildren; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGENEMYVIEW__CTOR_OFFSET))(this);
		}
	};
}
