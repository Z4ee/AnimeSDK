#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_TransformToMaterialBehavior_TransformProperty.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYPOSITION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB8951C0)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xB8952B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformToMaterialBehavior_TransformPropertyPosition_TypeDefinitionIndex = 65991;

	class Effect_TransformToMaterialBehavior_TransformPropertyPosition : public ::RPG::Client::Effect_TransformToMaterialBehavior_TransformProperty
	{
	public:
		::UnityEngine::Vector3 offset; // 0x30
		::System::Single w; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYPOSITION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_value()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYPOSITION_GET_VALUE_OFFSET))(this);
		}
	};
}
