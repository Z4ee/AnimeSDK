#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_BLOCKPUZZLEBASE_GET_HASINIT_OFFSET UNITYSDK_OFFSET(0xAD94220)
#define RPG_CLIENT_PROP_BLOCKPUZZLEBASE_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAD93C80)
#define RPG_CLIENT_PROP_BLOCKPUZZLEBASE_ISPLAYERONBOARD_OFFSET UNITYSDK_OFFSET(0xAD94020)
#define RPG_CLIENT_PROP_BLOCKPUZZLEBASE_METHOD_6_8369B9BE7F06A56A_OFFSET UNITYSDK_OFFSET(0xAD941D0)
#define RPG_CLIENT_PROP_BLOCKPUZZLEBASE_METHOD_6_D2F6A7A22BCB944C_OFFSET UNITYSDK_OFFSET(0xAD93DB0)
#define RPG_CLIENT_PROP_BLOCKPUZZLEBASE_METHOD_6_DD31BD6ABA02C7FF_OFFSET UNITYSDK_OFFSET(0xAD93D00)
#define RPG_CLIENT_PROP_BLOCKPUZZLEBASE_WORLDPOSITIONTOBLOCKPOSITION_OFFSET UNITYSDK_OFFSET(0xAD93F10)
#define RPG_CLIENT_PROP_BLOCKPUZZLEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xAD94280)
#define RPG_CLIENT_PROP_BLOCKPUZZLEBASE___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAD94290)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockPuzzleBase_TypeDefinitionIndex = 71713;

	class BlockPuzzleBase : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Int32 PuzzleWidth; // 0x48
		::System::Int32 PuzzleHeight; // 0x4C
		::System::Single BlockSize; // 0x50
		::UnityEngine::Vector3 InitBlockPosition; // 0x54
		::UnityEngine::Transform* Field_6_4; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPUZZLEBASE__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPUZZLEBASE_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_6_DD31BD6ABA02C7FF(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPUZZLEBASE_METHOD_6_DD31BD6ABA02C7FF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_6_D2F6A7A22BCB944C(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPUZZLEBASE_METHOD_6_D2F6A7A22BCB944C_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int WorldPositionToBlockPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPUZZLEBASE_WORLDPOSITIONTOBLOCKPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean IsPlayerOnBoard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPUZZLEBASE_ISPLAYERONBOARD_OFFSET))(this);
		}

		::System::Boolean Method_6_8369B9BE7F06A56A(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPUZZLEBASE_METHOD_6_8369B9BE7F06A56A_OFFSET))(this, a1);
		}

		::System::Boolean get_HasInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPUZZLEBASE_GET_HASINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPUZZLEBASE___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}
	};
}
