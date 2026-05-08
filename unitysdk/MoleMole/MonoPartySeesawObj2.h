#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOPARTYSEESAWOBJ2_AWAKE_OFFSET UNITYSDK_OFFSET(0x15846F70)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2_METHOD_8_852D8F76817124D8_OFFSET UNITYSDK_OFFSET(0x15847220)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2_METHOD_8_9C260A5B78AFA0A5_OFFSET UNITYSDK_OFFSET(0x15846550)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x15846390)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2__CCTOR_OFFSET UNITYSDK_OFFSET(0x15847140)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2__CTOR_OFFSET UNITYSDK_OFFSET(0x15847090)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2___BASE_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x15847190)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartySeesawObj2_TypeDefinitionIndex = 52273;

	class MonoPartySeesawObj2 : public ::MoleMole::MonoPartySceneObject
	{
	public:
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_8_0()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoPartySeesawObj2_TypeDefinitionIndex)->GetStaticField(0x495B0);
		}
		::System::Single maxAngle; // 0x30
		::System::Single rotateSpeed; // 0x34
		::System::Single recoverSpeed; // 0x38
		::UnityEngine::BoxCollider* mainCollider; // 0x40
		::UnityEngine::Vector3 Field_8_5; // 0x48
		::System::Single Field_8_6; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2__CCTOR_OFFSET))();
		}

		::System::Void OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2_ONDOUPDATE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2___BASE_ONDOUPDATE_OFFSET))(this, a1);
		}

		::System::Single Method_8_9C260A5B78AFA0A5()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2_METHOD_8_9C260A5B78AFA0A5_OFFSET))(this);
		}

		static ::System::Int32 Method_8_852D8F76817124D8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2_METHOD_8_852D8F76817124D8_OFFSET))(a1, a2);
		}
	};
}
