#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_HoudiniRampInterpolationTypeWrapper.h"
#include "unitysdk/HoudiniEngineUnity/HEU_RampPointWrapper.h"
#include "unitysdk/UnityEngine/Color.h"

#define HOUDINIENGINEUNITY_HEU_COLORRAMPPOINTWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17EB4DC0)
#define HOUDINIENGINEUNITY_HEU_COLORRAMPPOINTWRAPPER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x17EB4DD0)
#define HOUDINIENGINEUNITY_HEU_COLORRAMPPOINTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB4DE0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ColorRampPointWrapper_TypeDefinitionIndex = 37609;

	class HEU_ColorRampPointWrapper : public ::HoudiniEngineUnity::HEU_RampPointWrapper
	{
	public:
		::UnityEngine::Color _Value_k__BackingField; // 0x18

		::System::Void _ctor(::System::Single a1, ::UnityEngine::Color a2, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Color, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COLORRAMPPOINTWRAPPER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Color get_Value()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COLORRAMPPOINTWRAPPER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COLORRAMPPOINTWRAPPER_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
