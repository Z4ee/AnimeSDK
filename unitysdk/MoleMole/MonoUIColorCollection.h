#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Graphic; }

#define MOLEMOLE_MONOUICOLORCOLLECTION_TRIGGERIMAGEGREYCOLOR_OFFSET UNITYSDK_OFFSET(0x11D59540)
#define MOLEMOLE_MONOUICOLORCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11D596D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIColorCollection_TypeDefinitionIndex = 62055;

	class MonoUIColorCollection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Graphic* _uImage; // 0x18
		::UnityEngine::Color greyColor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICOLORCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void TriggerImageGreyColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICOLORCOLLECTION_TRIGGERIMAGEGREYCOLOR_OFFSET))(this);
		}
	};
}
