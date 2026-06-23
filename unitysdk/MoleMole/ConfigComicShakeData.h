#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigPerformUIShake; }
namespace MoleMole::Config { class AnimCurveParam; }

#define MOLEMOLE_CONFIGCOMICSHAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE983290)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigComicShakeData_TypeDefinitionIndex = 43181;

	class ConfigComicShakeData : public ::System::Object
	{
	public:
		::MoleMole::ConfigPerformUIShake* configShake; // 0x10
		::MoleMole::Config::AnimCurveParam* EnlargeScaleParam; // 0x18
		::MoleMole::Config::AnimCurveParam* ShrinkScaleParam; // 0x20
		::System::Boolean IsShrinkSameAsEnlarge; // 0x28
		::System::Single maxDeltaScale; // 0x2C
		::System::Single TotalDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCOMICSHAKEDATA__CTOR_OFFSET))(this);
		}
	};
}
