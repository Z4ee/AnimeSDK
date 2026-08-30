#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_SKYDOMECONTROLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC499CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int A4SkyDomeEffectControlBehavior_SkyDomeControlData_TypeDefinitionIndex = 70834;

	class A4SkyDomeEffectControlBehavior_SkyDomeControlData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_SKYDOMECONTROLDATA__CTOR_OFFSET))(this);
		}
	};
}
