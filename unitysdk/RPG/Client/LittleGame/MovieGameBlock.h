#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameProp.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_FD51057495DB654F;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1B1D31C0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK_ONHIT_OFFSET UNITYSDK_OFFSET(0x1B1D3050)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D3260)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameBlock_TypeDefinitionIndex = 76124;

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
	};
}
