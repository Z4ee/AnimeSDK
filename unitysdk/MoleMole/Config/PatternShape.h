#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/PatternShape_BasePosXZType.h"
#include "unitysdk/MoleMole/Config/PatternShape_BasePosYType.h"
#include "unitysdk/MoleMole/Config/PatternShape_BaseRotXZType.h"
#include "unitysdk/MoleMole/Config/PatternShape_BaseRotYType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_PATTERNSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA717B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PatternShape_TypeDefinitionIndex = 51464;

	class PatternShape : public ::System::Object
	{
	public:
		::System::String* BaseCenterTargetCustomKey; // 0x10
		::System::String* BaseAttachPoint; // 0x18
		::System::Single CenterZOffset; // 0x20
		::System::Single AngleZOffset; // 0x24
		::System::Single AngleXOffset; // 0x28
		::MoleMole::Config::PatternShape_BasePosYType BaseYType; // 0x2C
		::System::Boolean LockXAxis; // 0x30
		::System::Boolean IsAngleOffsetLocal; // 0x31
		::System::Boolean LockYAxis; // 0x32
		::System::Boolean LockZAxis; // 0x33
		::System::Single AngleYOffset; // 0x34
		::MoleMole::Config::PatternShape_BaseRotXZType BaseXZRotType; // 0x38
		::MoleMole::Config::PatternShape_BasePosXZType BaseXZType; // 0x3C
		::System::Single CenterXOffset; // 0x40
		::System::Single CenterYOffset; // 0x44
		::MoleMole::Config::PatternShape_BaseRotYType BaseYRotType; // 0x48
		::MoleMole::Config::AbilityTargetting BaseCenterTarget; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATTERNSHAPE__CTOR_OFFSET))(this);
		}
	};
}
