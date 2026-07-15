#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define HEDGEHOGTEAM_EASYTOUCH_TOUCHABLEUIELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F9F20)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TouchableUIElement_TypeDefinitionIndex = 38186;

	class TouchableUIElement : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TOUCHABLEUIELEMENT__CTOR_OFFSET))(this);
		}
	};
}
