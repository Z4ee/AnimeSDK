#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameProp.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_FD51057495DB654F;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xBE30D40)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_ONHIT_OFFSET UNITYSDK_OFFSET(0xBE30BD0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xBE30DE0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xBE30F80)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK___IFIXBASEPROXY_ONHIT_OFFSET UNITYSDK_OFFSET(0xBE30E00)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameBlock_TypeDefinitionIndex = 71175;

	class MovieGameBlock : public ::RPG::Client::LittleGame::MovieGameProp
	{
	public:
		::UnityEngine::Transform* CenterTrans; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void OnHit(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_ONHIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHit(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK___IFIXBASEPROXY_ONHIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET))(this);
		}
	};
}
