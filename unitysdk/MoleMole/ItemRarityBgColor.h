#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_ITEMRARITYBGCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15134550)

namespace MoleMole
{
	inline static constexpr unsigned int ItemRarityBgColor_TypeDefinitionIndex = 85986;

	class ItemRarityBgColor : public ::System::Object
	{
	public:
		::UnityEngine::Color RarityBgColor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMRARITYBGCOLOR__CTOR_OFFSET))(this);
		}
	};
}
