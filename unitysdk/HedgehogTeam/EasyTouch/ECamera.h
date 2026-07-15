#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }

#define HEDGEHOGTEAM_EASYTOUCH_ECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DB3B0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int ECamera_TypeDefinitionIndex = 38129;

	class ECamera : public ::System::Object
	{
	public:
		::UnityEngine::Camera* camera; // 0x10
		::System::Boolean guiCamera; // 0x18

		::System::Void _ctor(::UnityEngine::Camera* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_ECAMERA__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
