#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPGTOOLS_BATTLERECORDERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xCFCDAE0)

namespace RPGTools
{
	inline static constexpr unsigned int BattleRecorderSettings_TypeDefinitionIndex = 45090;

	class BattleRecorderSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_BATTLERECORDERSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
