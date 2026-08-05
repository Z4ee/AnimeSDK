#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class MeshListToParticle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_MESHLISTTOPARTICLEREFERENCE_RECOVERREFERENCE_OFFSET UNITYSDK_OFFSET(0x167D4870)
#define MIHOYO_TOOLKIT_CGTOOLKIT_MESHLISTTOPARTICLEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x167D47C0)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int MeshListToParticleReference_TypeDefinitionIndex = 66211;

	class MeshListToParticleReference : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* Values; // 0x18

		::System::Void _ctor(::MoleMole::Timeline::MeshListToParticle* mlpComp)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::MeshListToParticle*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_MESHLISTTOPARTICLEREFERENCE__CTOR_OFFSET))(this, mlpComp);
		}

		::System::Void RecoverReference(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_MESHLISTTOPARTICLEREFERENCE_RECOVERREFERENCE_OFFSET))(this, root);
		}
	};
}
