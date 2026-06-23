#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_UIMODELBGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA2630)

namespace MoleMole
{
	inline static constexpr unsigned int UIModelBgSetting_TypeDefinitionIndex = 46687;

	class UIModelBgSetting : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 ModelPos; // 0x10
		::UnityEngine::Vector3 ModelRot; // 0x1C
		::System::Single ModelScale; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODELBGSETTING__CTOR_OFFSET))(this);
		}
	};
}
