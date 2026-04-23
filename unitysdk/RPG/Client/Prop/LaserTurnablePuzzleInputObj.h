#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEINPUTOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0xAE41E00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnablePuzzleInputObj_TypeDefinitionIndex = 72163;

	class LaserTurnablePuzzleInputObj : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 InitDegree; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEINPUTOBJ__CTOR_OFFSET))(this);
		}
	};
}
