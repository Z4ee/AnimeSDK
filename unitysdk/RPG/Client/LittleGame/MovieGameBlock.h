#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameProp.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9850514C0F89B91A;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A32DD0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_ONHIT_OFFSET UNITYSDK_OFFSET(0x9A32C60)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x9A32E70)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A33010)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK___IFIXBASEPROXY_ONHIT_OFFSET UNITYSDK_OFFSET(0x9A32E90)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameBlock_TypeDefinitionIndex = 62360;

	class MovieGameBlock : public ::RPG::Client::LittleGame::MovieGameProp
	{
	public:
		::UnityEngine::Transform* CenterTrans; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void OnHit(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_ONHIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHit(::Class_2_9850514C0F89B91A* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK___IFIXBASEPROXY_ONHIT_OFFSET))(this, P0);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET))(this);
		}
	};
}
