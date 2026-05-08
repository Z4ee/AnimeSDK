#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginTransform_Enum_3_7C5E2AB6BB04F67F.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_CLASS_1_D15846DA6A50C310_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x170E3470)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_CLASS_1_D15846DA6A50C310__CTOR_OFFSET UNITYSDK_OFFSET(0x170E3460)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginTransform_Class_1_D15846DA6A50C310_TypeDefinitionIndex = 79006;

	class MonoEffectPluginTransform_Class_1_D15846DA6A50C310 : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* Field_1_2; // 0x10
		::UnityEngine::ParticleSystemRenderer* Field_1_3; // 0x18
		::System::Boolean Field_1_1; // 0x20
		::MoleMole::MonoEffectPluginTransform_Enum_3_7C5E2AB6BB04F67F Field_1_0; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_CLASS_1_D15846DA6A50C310__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_CLASS_1_D15846DA6A50C310_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
