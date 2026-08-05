#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGACTIVEPROPSBUDDYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C2E50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigActivePropsBuddySetting_TypeDefinitionIndex = 49434;

	class ConfigActivePropsBuddySetting : public ::System::Object
	{
	public:
		::Foundation::AssetPath ActivePropsBuddyBackGround; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGACTIVEPROPSBUDDYSETTING__CTOR_OFFSET))(this);
		}
	};
}
