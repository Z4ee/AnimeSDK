#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_GAMEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13840BA0)

namespace MoleMole
{
	inline static constexpr unsigned int GameEntry_TypeDefinitionIndex = 48316;

	class GameEntry : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENTRY__CTOR_OFFSET))(this);
		}
	};
}
