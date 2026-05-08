#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/RootMotion/Axis.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_MONOPARTYROTATEOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x1605DE00)
#define MOLEMOLE_MONOPARTYROTATEOBJ_CALCURROTVALUE_OFFSET UNITYSDK_OFFSET(0x1605E100)
#define MOLEMOLE_MONOPARTYROTATEOBJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1605DFA0)
#define MOLEMOLE_MONOPARTYROTATEOBJ_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x1605E170)
#define MOLEMOLE_MONOPARTYROTATEOBJ_SYNCROTATION_OFFSET UNITYSDK_OFFSET(0x1605DE50)
#define MOLEMOLE_MONOPARTYROTATEOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1605E4C0)
#define MOLEMOLE_MONOPARTYROTATEOBJ___BASE_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x1605E560)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartyRotateObj_TypeDefinitionIndex = 79143;

	class MonoPartyRotateObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::System::Single rotateSpeedPerS; // 0x30
		::System::Single startRot; // 0x34
		::RootMotion::Axis rotateAxis; // 0x38
		::UnityEngine::Vector3 Field_8_3; // 0x3C
		::UnityEngine::Rigidbody* Field_8_4; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ_AWAKE_OFFSET))(this);
		}

		::System::Void SyncRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ_SYNCROTATION_OFFSET))(this);
		}

		::System::Void Initialize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Single CalCurRotValue(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ_CALCURROTVALUE_OFFSET))(this, a1);
		}

		::System::Void OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ_ONDOUPDATE_OFFSET))(this, a1);
		}

		::System::Void __base_OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ___BASE_ONDOUPDATE_OFFSET))(this, a1);
		}
	};
}
