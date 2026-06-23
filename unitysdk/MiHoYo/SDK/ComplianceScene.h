#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_COMPLIANCESCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA22C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ComplianceScene_TypeDefinitionIndex = 19660;

	class ComplianceScene : public ::System::Object
	{
	public:
		::System::String* compliance_experiment_id; // 0x10
		::System::String* compliance_scene_id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMPLIANCESCENE__CTOR_OFFSET))(this);
		}
	};
}
