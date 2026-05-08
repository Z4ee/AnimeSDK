#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CHANGEFGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xED0E850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChangeFGItem_TypeDefinitionIndex = 61289;

	class ChangeFGItem : public ::System::Object
	{
	public:
		::MoleMole::Vector2Int RelativePos; // 0x10
		::System::Single BeginDelay; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHANGEFGITEM__CTOR_OFFSET))(this);
		}
	};
}
