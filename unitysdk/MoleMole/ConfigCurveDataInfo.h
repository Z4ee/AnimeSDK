#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGCURVEDATAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94A2F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCurveDataInfo_TypeDefinitionIndex = 55629;

	class ConfigCurveDataInfo : public ::System::Object
	{
	public:
		::System::Single DelayTime; // 0x10
		::System::Single DurationTime; // 0x14
		::System::String* CurveKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCURVEDATAINFO__CTOR_OFFSET))(this);
		}
	};
}
