#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_ACTIVITYCOLORIMAGESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x12EDCCE0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityColorImageSetting_TypeDefinitionIndex = 47993;

	class ActivityColorImageSetting : public ::System::Object
	{
	public:
		::UnityEngine::UI::Image* targetImage; // 0x10
		::UnityEngine::Color color; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCOLORIMAGESETTING__CTOR_OFFSET))(this);
		}
	};
}
