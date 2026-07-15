#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SHOTANIMMOVEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F4B230)

namespace RPG::Client
{
	inline static constexpr unsigned int ShotAnimMovementData_TypeDefinitionIndex = 66518;

	class ShotAnimMovementData : public ::System::Object
	{
	public:
		::System::Boolean Stop; // 0x10
		::System::Single AngleXY; // 0x14
		::System::Single DistanceXY; // 0x18
		::System::Single DistanceZ; // 0x1C
		::System::Single Damp; // 0x20
		::System::Single Duration; // 0x24
		::System::Single RecoveryDamp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOTANIMMOVEMENTDATA__CTOR_OFFSET))(this);
		}
	};
}
