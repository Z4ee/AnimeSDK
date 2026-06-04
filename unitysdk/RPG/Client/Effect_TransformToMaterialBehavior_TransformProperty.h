#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY_METHOD_2_4F515A5348AB9F15_OFFSET UNITYSDK_OFFSET(0xB894B80)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xB894C10)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformToMaterialBehavior_TransformProperty_TypeDefinitionIndex = 65990;

	class Effect_TransformToMaterialBehavior_TransformProperty : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property
	{
	public:
		::UnityEngine::Transform* transform; // 0x20
		::System::Boolean worldSpace; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_4F515A5348AB9F15(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY_METHOD_2_4F515A5348AB9F15_OFFSET))(this, a1);
		}
	};
}
