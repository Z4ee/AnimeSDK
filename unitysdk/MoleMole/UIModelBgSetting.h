#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UIMODELBGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x198728D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIModelBgSetting_TypeDefinitionIndex = 89169;

	class UIModelBgSetting : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 ModelPos; // 0x10
		::System::Single ModelScale; // 0x1C
		::UnityEngine::Vector3 ModelRot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODELBGSETTING__CTOR_OFFSET))(this);
		}
	};
}
