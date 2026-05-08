#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_PSCOMPREFERENCE_RECOVERREFERENCE_OFFSET UNITYSDK_OFFSET(0x123F3970)
#define MIHOYO_TOOLKIT_CGTOOLKIT_PSCOMPREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x123F37A0)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int PsCompReference_TypeDefinitionIndex = 78118;

	class PsCompReference : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* psComp; // 0x10
		::System::String* meshRelatePath; // 0x18

		::System::Void _ctor(::UnityEngine::ParticleSystem* psComp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_PSCOMPREFERENCE__CTOR_OFFSET))(this, psComp);
		}

		::System::Void RecoverReference(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_PSCOMPREFERENCE_RECOVERREFERENCE_OFFSET))(this, root);
		}
	};
}
