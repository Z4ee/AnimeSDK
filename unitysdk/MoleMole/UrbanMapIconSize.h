#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_URBANMAPICONSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1491F930)

namespace MoleMole
{
	inline static constexpr unsigned int UrbanMapIconSize_TypeDefinitionIndex = 44989;

	class UrbanMapIconSize : public ::System::Object
	{
	public:
		::Foundation::AssetPath IconPath; // 0x10
		::UnityEngine::Vector2 Size; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPICONSIZE__CTOR_OFFSET))(this);
		}
	};
}
