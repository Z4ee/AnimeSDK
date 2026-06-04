#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_DepthOfFieldDebugMethod.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define RPG_CUSTOMRP_RPGDEPTHOFFIELD_DEPTHOFFIELDDEBUGMETHODPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF7F40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfField_DepthOfFieldDebugMethodParameter_TypeDefinitionIndex = 35479;

	class RPGDepthOfField_DepthOfFieldDebugMethodParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::RPGDepthOfField_DepthOfFieldDebugMethod>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELD_DEPTHOFFIELDDEBUGMETHODPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
