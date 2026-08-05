#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOPARTYSEESAWOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x18081B10)
#define MOLEMOLE_MONOPARTYSEESAWOBJ_METHOD_8_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x180827F0)
#define MOLEMOLE_MONOPARTYSEESAWOBJ_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x18081B90)
#define MOLEMOLE_MONOPARTYSEESAWOBJ_UPDATE_OFFSET UNITYSDK_OFFSET(0x18081B50)
#define MOLEMOLE_MONOPARTYSEESAWOBJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x18082700)
#define MOLEMOLE_MONOPARTYSEESAWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18082650)
#define MOLEMOLE_MONOPARTYSEESAWOBJ___BASE_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x18082760)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartySeesawObj_TypeDefinitionIndex = 55215;

	class MonoPartySeesawObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_overlapBuffer()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoPartySeesawObj_TypeDefinitionIndex)->GetStaticField(0x4C400);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_8_6()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(MonoPartySeesawObj_TypeDefinitionIndex)->GetStaticField(0x11A50);
		}
		::System::Single maxAngle; // 0x30
		::System::Single rotateAnglePerSec; // 0x34
		::System::Single recoverDegreePerSec; // 0x38
		::UnityEngine::Vector3 ColliderSize; // 0x3C
		::System::UInt32 Field_8_5; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ_UPDATE_OFFSET))(this);
		}

		::System::Void OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ_ONDOUPDATE_OFFSET))(this, a1);
		}

		::System::Void __base_OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ___BASE_ONDOUPDATE_OFFSET))(this, a1);
		}

		::System::Void Method_8_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ_METHOD_8_33ACA6CB2ABC73F7_OFFSET))(this);
		}
	};
}
