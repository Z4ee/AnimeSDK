#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }

#define MIHOYO_SDK_PASSPORTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA49F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PassportConfig_TypeDefinitionIndex = 18798;

	class PassportConfig : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::Boolean> ageGateEnabledForCurrentCountry; // 0x10

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* json)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PASSPORTCONFIG__CTOR_OFFSET))(this, json);
		}
	};
}
