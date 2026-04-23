#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CRPSFXSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x9EBAD20)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPSFXSettings_TypeDefinitionIndex = 62623;

	class CRPSFXSettings : public ::System::Object
	{
	public:
		::System::Int32 LineRendererAniLod; // 0x10
		::System::Boolean UseParticleDistanceLOD; // 0x14
		::System::Int32 ParticleEmitLevel; // 0x18
		::System::Single ParticleDecreaseThresh; // 0x1C
		::System::Boolean HighQualityEffect; // 0x20
		::System::Boolean EnableSkillRadialBlur; // 0x21
		::System::Boolean NeedSFXTransparentRefraction; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPSFXSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
