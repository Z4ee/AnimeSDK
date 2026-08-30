#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define HEDGEHOGTEAM_EASYTOUCH_TOUCHABLEUIELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16D430)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TouchableUIElement_TypeDefinitionIndex = 39045;

	class TouchableUIElement : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TOUCHABLEUIELEMENT__CTOR_OFFSET))(this);
		}
	};
}
