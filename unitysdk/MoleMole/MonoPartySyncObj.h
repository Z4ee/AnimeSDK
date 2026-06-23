#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6E947E50DF49EE88.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/RootMotion/Axis.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_MONOPARTYSYNCOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x130391F0)
#define MOLEMOLE_MONOPARTYSYNCOBJ_GETSYNCVAL_OFFSET UNITYSDK_OFFSET(0x13039340)
#define MOLEMOLE_MONOPARTYSYNCOBJ_SETSYNCVAL_OFFSET UNITYSDK_OFFSET(0x13039640)
#define MOLEMOLE_MONOPARTYSYNCOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13039930)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartySyncObj_TypeDefinitionIndex = 47822;

	class MonoPartySyncObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::RootMotion::Axis Axis; // 0x30
		::Enum_3_6E947E50DF49EE88 CtrlType; // 0x34
		::UnityEngine::Vector3 Field_8_2; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSYNCOBJ__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSYNCOBJ_AWAKE_OFFSET))(this);
		}

		::System::Single GetSyncVal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSYNCOBJ_GETSYNCVAL_OFFSET))(this);
		}

		::System::Void SetSyncVal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSYNCOBJ_SETSYNCVAL_OFFSET))(this, a1);
		}
	};
}
