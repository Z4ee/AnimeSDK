#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOPARTYSEESAWOBJ2_AWAKE_OFFSET UNITYSDK_OFFSET(0x18083530)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2_METHOD_8_852D8F76817124D8_OFFSET UNITYSDK_OFFSET(0x180837E0)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2_METHOD_8_EE4AB4BF6BACDEBA_OFFSET UNITYSDK_OFFSET(0x18082AC0)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x18082910)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2__CCTOR_OFFSET UNITYSDK_OFFSET(0x18083700)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2__CTOR_OFFSET UNITYSDK_OFFSET(0x18083650)
#define MOLEMOLE_MONOPARTYSEESAWOBJ2___BASE_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x18083750)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartySeesawObj2_TypeDefinitionIndex = 56131;

	class MonoPartySeesawObj2 : public ::MoleMole::MonoPartySceneObject
	{
	public:
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_8_3()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoPartySeesawObj2_TypeDefinitionIndex)->GetStaticField(0x4C410);
		}
		::System::Single maxAngle; // 0x30
		::System::Single rotateSpeed; // 0x34
		::System::Single recoverSpeed; // 0x38
		::UnityEngine::BoxCollider* mainCollider; // 0x40
		::UnityEngine::Vector3 Field_8_6; // 0x48
		::System::Single Field_8_5; // 0x54

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

		static ::System::Int32 Method_8_852D8F76817124D8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2_METHOD_8_852D8F76817124D8_OFFSET))(a1, a2);
		}

		::System::Single Method_8_EE4AB4BF6BACDEBA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSEESAWOBJ2_METHOD_8_EE4AB4BF6BACDEBA_OFFSET))(this);
		}
	};
}
