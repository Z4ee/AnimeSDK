#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IKHitReactionChainEnd.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_IKHITREACTIONLIMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1982EF60)

namespace RPG::Client
{
	inline static constexpr unsigned int IKHitReactionLimb_TypeDefinitionIndex = 68424;

	class IKHitReactionLimb : public ::System::Object
	{
	public:
		::RPG::Client::IKHitReactionChainEnd End; // 0x10
		::System::Single UnitLengthMass; // 0x28
		::System::Single Stiffness; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTIONLIMB__CTOR_OFFSET))(this);
		}
	};
}
