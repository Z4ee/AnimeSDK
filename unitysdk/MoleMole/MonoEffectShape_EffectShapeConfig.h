#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOEFFECTSHAPE_EFFECTSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178233F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectShape_EffectShapeConfig_TypeDefinitionIndex = 66959;

	class MonoEffectShape_EffectShapeConfig : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* Effect; // 0x10
		::System::Boolean IsAll; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* IgnoreMeshPathes; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* MeshPathes; // 0x28
		::System::Int32 TotalParticleCount; // 0x30
		::System::Boolean rendererEnabledInherited; // 0x34
		::System::Boolean SyncCasterRendererVisible; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSHAPE_EFFECTSHAPECONFIG__CTOR_OFFSET))(this);
		}
	};
}
