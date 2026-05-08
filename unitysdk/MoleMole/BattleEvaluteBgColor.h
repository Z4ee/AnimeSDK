#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_BATTLEEVALUTEBGCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x159C6680)

namespace MoleMole
{
	inline static constexpr unsigned int BattleEvaluteBgColor_TypeDefinitionIndex = 47714;

	class BattleEvaluteBgColor : public ::System::Object
	{
	public:
		::UnityEngine::Color EvaluateBgColor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEEVALUTEBGCOLOR__CTOR_OFFSET))(this);
		}
	};
}
