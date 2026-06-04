#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MaskType.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define RPG_CUSTOMRP_MASKTYPEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EEAB40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MaskTypeParameter_TypeDefinitionIndex = 35491;

	class MaskTypeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::MaskType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MASKTYPEPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
