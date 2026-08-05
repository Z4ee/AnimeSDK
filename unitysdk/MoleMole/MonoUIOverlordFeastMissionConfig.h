#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOUIOVERLORDFEASTMISSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x144F83B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIOverlordFeastMissionConfig_TypeDefinitionIndex = 52222;

	class MonoUIOverlordFeastMissionConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single fadeInFirstGameAnimDelay; // 0x18
		::System::Single fadeInGameItemAnimDelay; // 0x1C
		::System::Single switchFirstGameAnimDelay; // 0x20
		::System::Single switchGameItemAnimDelay; // 0x24
		::System::Single unlockBtnAnimDelay; // 0x28
		::System::Single getStarAnimDelay; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOVERLORDFEASTMISSIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
