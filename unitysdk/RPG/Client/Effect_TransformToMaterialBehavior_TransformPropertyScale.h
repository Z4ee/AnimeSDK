#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_TransformToMaterialBehavior_TransformProperty.h"
#include "unitysdk/RPG/Client/Effect_TransformToMaterialBehavior_TransformPropertyScale_ScaleMode.h"
#include "unitysdk/RPG/Client/Effect_TransformToMaterialBehavior_TransformPropertyScale_ScaleWMode.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYSCALE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB895590)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0xB8956C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformToMaterialBehavior_TransformPropertyScale_TypeDefinitionIndex = 65994;

	class Effect_TransformToMaterialBehavior_TransformPropertyScale : public ::RPG::Client::Effect_TransformToMaterialBehavior_TransformProperty
	{
	public:
		::RPG::Client::Effect_TransformToMaterialBehavior_TransformPropertyScale_ScaleMode scaleMode; // 0x30
		::RPG::Client::Effect_TransformToMaterialBehavior_TransformPropertyScale_ScaleWMode wMode; // 0x34
		::System::Single w; // 0x38
		::System::Boolean worldSpace; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYSCALE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_value()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYSCALE_GET_VALUE_OFFSET))(this);
		}
	};
}
