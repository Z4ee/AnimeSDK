#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapGradient;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x14863960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGhostEffect_TypeDefinitionIndex = 76591;

	class ConfigGhostEffect : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NapGradient*>* MaterialColorProperties; // 0x10
		::UnityEngine::Material* GhostMaterial; // 0x18
		::System::String* LODPrefabPath; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>* MaterialVectorProperties; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* MaterialFloatProperties; // 0x30
		::System::Boolean IsFreeFromDeviceControl; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECT__CTOR_OFFSET))(this);
		}
	};
}
