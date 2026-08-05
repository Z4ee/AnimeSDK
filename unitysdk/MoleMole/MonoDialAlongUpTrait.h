#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class DialAlongUpTrait; }
namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_MONODIALALONGUPTRAIT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x144E40D0)
#define MOLEMOLE_MONODIALALONGUPTRAIT_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x144E4400)
#define MOLEMOLE_MONODIALALONGUPTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x144E4760)
#define MOLEMOLE_MONODIALALONGUPTRAIT___BASE_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x144E48A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDialAlongUpTrait_TypeDefinitionIndex = 89080;

	class MonoDialAlongUpTrait : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::System::Single Field_8_3; // 0x30
		::System::Single Field_8_2; // 0x34
		::UnityEngine::Vector3 Field_8_1; // 0x38
		::UnityEngine::Quaternion Field_8_0; // 0x44
		::UnityEngine::Rigidbody* Field_8_7; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIALALONGUPTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::MoleMole::Config::DialAlongUpTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DialAlongUpTrait*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIALALONGUPTRAIT_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIALALONGUPTRAIT_ONDOUPDATE_OFFSET))(this, a1);
		}

		::System::Void __base_OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIALALONGUPTRAIT___BASE_ONDOUPDATE_OFFSET))(this, a1);
		}
	};
}
