#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UIMODELBGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x15101920)

namespace MoleMole
{
	inline static constexpr unsigned int UIModelBgSetting_TypeDefinitionIndex = 59541;

	class UIModelBgSetting : public ::System::Object
	{
	public:
		::System::Single ModelScale; // 0x10
		::UnityEngine::Vector3 ModelPos; // 0x14
		::UnityEngine::Vector3 ModelRot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODELBGSETTING__CTOR_OFFSET))(this);
		}
	};
}
