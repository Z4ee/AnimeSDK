#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_CARDOPTIONBGCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x144C6270)

namespace MoleMole
{
	inline static constexpr unsigned int CardOptionBgColor_TypeDefinitionIndex = 46046;

	class CardOptionBgColor : public ::System::Object
	{
	public:
		::UnityEngine::Color CardBgColor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CARDOPTIONBGCOLOR__CTOR_OFFSET))(this);
		}
	};
}
