#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define RPG_CUSTOMRP_RPGDEPTHOFFIELD_COCMETHODPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFD850)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfField_CoCMethodParameter_TypeDefinitionIndex = 36260;

	class RPGDepthOfField_CoCMethodParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::RPGDepthOfField_CoCMethod>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELD_COCMETHODPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
