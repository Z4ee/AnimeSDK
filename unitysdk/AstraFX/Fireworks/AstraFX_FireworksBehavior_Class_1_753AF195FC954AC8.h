#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace AstraFX::Fireworks { class FireworkType; }

#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CLASS_1_753AF195FC954AC8__CTOR_OFFSET UNITYSDK_OFFSET(0x1596F600)

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int AstraFX_FireworksBehavior_Class_1_753AF195FC954AC8_TypeDefinitionIndex = 49448;

	class AstraFX_FireworksBehavior_Class_1_753AF195FC954AC8 : public ::System::Object
	{
	public:
		::AstraFX::Fireworks::FireworkType* HGNAACJNIPH; // 0x10
		::System::Int32 AAEHGBPKDPK; // 0x18
		::System::Single ACHAOEPNEBC; // 0x1C
		::System::Int32 EAFOPCOOJDA; // 0x20
		::System::Single FAHLBOLIGNH; // 0x24
		::UnityEngine::Vector3 JHOGJELLFPF; // 0x28
		::UnityEngine::Vector3 FILFKDALEPE; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CLASS_1_753AF195FC954AC8__CTOR_OFFSET))(this);
		}
	};
}
