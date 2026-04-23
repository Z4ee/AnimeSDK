#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_UICOLORUTILS_HPCOLORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D3D50)

namespace RPG::Client
{
	inline static constexpr unsigned int UIColorUtils_HPColorInfo_TypeDefinitionIndex = 67375;

	class UIColorUtils_HPColorInfo : public ::System::Object
	{
	public:
		::System::Boolean IsDanger; // 0x10
		::UnityEngine::Color HPColor; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_HPCOLORINFO__CTOR_OFFSET))(this);
		}
	};
}
