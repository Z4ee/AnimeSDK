#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectForUIScale.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_GLITCH01FORUISCALE_ADAPTATION_OFFSET UNITYSDK_OFFSET(0x170D3FF0)
#define MOLEMOLE_GLITCH01FORUISCALE_GETDURATION_OFFSET UNITYSDK_OFFSET(0x170D47A0)
#define MOLEMOLE_GLITCH01FORUISCALE_METHOD_6_9AD0A34018F596D0_OFFSET UNITYSDK_OFFSET(0x170D44A0)
#define MOLEMOLE_GLITCH01FORUISCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x170D4E20)
#define MOLEMOLE_GLITCH01FORUISCALE___BASE_GETDURATION_OFFSET UNITYSDK_OFFSET(0x170D4E70)

namespace MoleMole
{
	inline static constexpr unsigned int Glitch01ForUIScale_TypeDefinitionIndex = 72107;

	class Glitch01ForUIScale : public ::MoleMole::EffectForUIScale
	{
	public:
		::System::Single xsize; // 0x18
		::System::Single ysize; // 0x1C
		::UnityEngine::Transform* Root; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCH01FORUISCALE__CTOR_OFFSET))(this);
		}

		::System::Void Adaptation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCH01FORUISCALE_ADAPTATION_OFFSET))(this);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCH01FORUISCALE_GETDURATION_OFFSET))(this);
		}

		::System::Single __base_GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCH01FORUISCALE___BASE_GETDURATION_OFFSET))(this);
		}

		::System::Void Method_6_9AD0A34018F596D0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCH01FORUISCALE_METHOD_6_9AD0A34018F596D0_OFFSET))(this, a1);
		}
	};
}
