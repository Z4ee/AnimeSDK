#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_CARDOPTIONRARITYBGCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFAEFFA0)

namespace MoleMole
{
	inline static constexpr unsigned int CardOptionRarityBgColor_TypeDefinitionIndex = 71874;

	class CardOptionRarityBgColor : public ::System::Object
	{
	public:
		::UnityEngine::Color CardBgColor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CARDOPTIONRARITYBGCOLOR__CTOR_OFFSET))(this);
		}
	};
}
