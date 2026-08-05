#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_BATTLEEVALUTEBGCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x134D27C0)

namespace MoleMole
{
	inline static constexpr unsigned int BattleEvaluteBgColor_TypeDefinitionIndex = 55814;

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
