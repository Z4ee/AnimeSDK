#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIINLEVELRANKINGSABINFOROWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1984FFC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelRankingSABInfoRowConfig_TypeDefinitionIndex = 79746;

	class UIInLevelRankingSABInfoRowConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single TipStayDuration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELRANKINGSABINFOROWCONFIG__CTOR_OFFSET))(this);
		}
	};
}
