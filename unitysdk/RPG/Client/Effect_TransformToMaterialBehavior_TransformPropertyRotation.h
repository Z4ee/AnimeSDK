#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_TransformToMaterialBehavior_TransformProperty.h"
#include "unitysdk/RPG/Client/Effect_TransformToMaterialBehavior_TransformPropertyRotation_RotationMode.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYROTATION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA211260)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0xA2114F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformToMaterialBehavior_TransformPropertyRotation_TypeDefinitionIndex = 65066;

	class Effect_TransformToMaterialBehavior_TransformPropertyRotation : public ::RPG::Client::Effect_TransformToMaterialBehavior_TransformProperty
	{
	public:
		::RPG::Client::Effect_TransformToMaterialBehavior_TransformPropertyRotation_RotationMode mode; // 0x30
		::System::Single w; // 0x34
		::System::Boolean normalizeAngle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYROTATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_value()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYROTATION_GET_VALUE_OFFSET))(this);
		}
	};
}
