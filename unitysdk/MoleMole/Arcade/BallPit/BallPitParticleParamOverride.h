#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallPit/BallPitParticleParamOverride_Enum_3_302427176DA7531C.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_GET_HASSCALETARGETS_OFFSET UNITYSDK_OFFSET(0x1CFA0600)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_METHOD_5_9AD643C22023EC87_OFFSET UNITYSDK_OFFSET(0x1CF9FF70)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETLENGTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1CF9FC70)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1CF9F9D0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONFROMDIRECTION_OFFSET UNITYSDK_OFFSET(0x1CFA0260)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONZDEG_OFFSET UNITYSDK_OFFSET(0x1CF9FED0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONZ_OFFSET UNITYSDK_OFFSET(0x1CFA01C0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETSCALE_OFFSET UNITYSDK_OFFSET(0x1CFA03A0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA0660)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitParticleParamOverride_TypeDefinitionIndex = 89400;

	class BallPitParticleParamOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::ParticleSystem*>* targets; // 0x18
		::MoleMole::Arcade::BallPit::BallPitParticleParamOverride_Enum_3_302427176DA7531C axis; // 0x20
		::System::Boolean enableRotationOverride; // 0x24
		::Il2CppArray<::UnityEngine::Transform*>* rotationTargets; // 0x28
		::Il2CppArray<::UnityEngine::Transform*>* scaleTargets; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE__CTOR_OFFSET))(this);
		}

		::System::Void SetLength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Void SetLengthMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETLENGTHMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Void SetRotationZDeg(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONZDEG_OFFSET))(this, a1);
		}

		::System::Void SetRotationZ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONZ_OFFSET))(this, a1);
		}

		::System::Void SetRotationFromDirection(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETROTATIONFROMDIRECTION_OFFSET))(this, a1);
		}

		::System::Void SetScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_SETSCALE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasScaleTargets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_GET_HASSCALETARGETS_OFFSET))(this);
		}

		::System::Void Method_5_9AD643C22023EC87(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITPARTICLEPARAMOVERRIDE_METHOD_5_9AD643C22023EC87_OFFSET))(this, a1);
		}
	};
}
