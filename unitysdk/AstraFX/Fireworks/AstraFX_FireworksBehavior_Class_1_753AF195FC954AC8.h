#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace AstraFX::Fireworks { class FireworkType; }

#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CLASS_1_753AF195FC954AC8__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC92E0)

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int AstraFX_FireworksBehavior_Class_1_753AF195FC954AC8_TypeDefinitionIndex = 49022;

	class AstraFX_FireworksBehavior_Class_1_753AF195FC954AC8 : public ::System::Object
	{
	public:
		::AstraFX::Fireworks::FireworkType* HGNAACJNIPH; // 0x10
		::System::Int32 EAFOPCOOJDA; // 0x18
		::UnityEngine::Vector3 JHOGJELLFPF; // 0x1C
		::System::Int32 AAEHGBPKDPK; // 0x28
		::UnityEngine::Vector3 FILFKDALEPE; // 0x2C
		::System::Single ACHAOEPNEBC; // 0x38
		::System::Single FAHLBOLIGNH; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CLASS_1_753AF195FC954AC8__CTOR_OFFSET))(this);
		}
	};
}
