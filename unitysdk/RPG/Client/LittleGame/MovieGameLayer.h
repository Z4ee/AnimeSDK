#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E3730)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameLayer_TypeDefinitionIndex = 70368;

	class MovieGameLayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Layer; // 0x18
		::UnityEngine::Transform* StartPos; // 0x20
		::UnityEngine::Transform* EndPos; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMELAYER__CTOR_OFFSET))(this);
		}
	};
}
