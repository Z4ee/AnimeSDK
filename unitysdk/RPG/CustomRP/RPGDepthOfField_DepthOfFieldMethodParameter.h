#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_DOFMethod.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define RPG_CUSTOMRP_RPGDEPTHOFFIELD_DEPTHOFFIELDMETHODPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAE910)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfField_DepthOfFieldMethodParameter_TypeDefinitionIndex = 29407;

	class RPGDepthOfField_DepthOfFieldMethodParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::RPGDepthOfField_DOFMethod>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELD_DEPTHOFFIELDMETHODPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
