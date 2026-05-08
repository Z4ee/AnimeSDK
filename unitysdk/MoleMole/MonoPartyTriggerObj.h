#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3E5EB79C23788F08.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOPARTYTRIGGEROBJ_ONDOCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x15847320)
#define MOLEMOLE_MONOPARTYTRIGGEROBJ_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x158472D0)
#define MOLEMOLE_MONOPARTYTRIGGEROBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x158474E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartyTriggerObj_TypeDefinitionIndex = 38873;

	class MonoPartyTriggerObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* Field_8_0; // 0x30
		::Enum_3_3E5EB79C23788F08 triggerType; // 0x38
		::System::String* triggerName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYTRIGGEROBJ__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYTRIGGEROBJ_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnDoCollisionEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYTRIGGEROBJ_ONDOCOLLISIONENTER_OFFSET))(this, a1);
		}
	};
}
