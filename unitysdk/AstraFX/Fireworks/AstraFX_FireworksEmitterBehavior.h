#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace AstraFX::Fireworks { class AstraFX_FireworksEmitter; }

#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTERBEHAVIOR_GET__OWNEREMITTER_OFFSET UNITYSDK_OFFSET(0x159712C0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15971340)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x159713A0)

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int AstraFX_FireworksEmitterBehavior_TypeDefinitionIndex = 49454;

	class AstraFX_FireworksEmitterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::AstraFX::Fireworks::AstraFX_FireworksEmitter* get__OwnerEmitter()
		{
			return ((::AstraFX::Fireworks::AstraFX_FireworksEmitter*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTERBEHAVIOR_GET__OWNEREMITTER_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSEMITTERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
