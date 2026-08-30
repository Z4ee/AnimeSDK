#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY_METHOD_2_289133ED16ED02FB_OFFSET UNITYSDK_OFFSET(0x15EA55A0)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA5690)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformToMaterialBehavior_TransformProperty_TypeDefinitionIndex = 70537;

	class Effect_TransformToMaterialBehavior_TransformProperty : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property
	{
	public:
		::UnityEngine::Transform* transform; // 0x20
		::System::Boolean worldSpace; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_289133ED16ED02FB(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY_METHOD_2_289133ED16ED02FB_OFFSET))(this, a1);
		}
	};
}
