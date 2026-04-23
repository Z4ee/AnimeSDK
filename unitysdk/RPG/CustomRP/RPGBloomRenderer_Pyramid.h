#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

#define RPG_CUSTOMRP_RPGBLOOMRENDERER_PYRAMID__CTOR_OFFSET UNITYSDK_OFFSET(0x1814B1E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGBloomRenderer_Pyramid_TypeDefinitionIndex = 35166;

	class RPGBloomRenderer_Pyramid : public ::System::Object
	{
	public:
		::RPG::CustomRP::RTIDHandle rtB; // 0x10
		::RPG::CustomRP::RTIDHandle rtA; // 0x48
		::UnityEngine::Rect rect; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLOOMRENDERER_PYRAMID__CTOR_OFFSET))(this);
		}
	};
}
