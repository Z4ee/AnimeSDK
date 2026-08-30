#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAVELSHIPRESETSTATE_METHOD_3_1A6F4C6FAAC2A2AD_OFFSET UNITYSDK_OFFSET(0x1D540FE0)
#define RPG_GAMECORE_TRAVELSHIPRESETSTATE_METHOD_3_C7A767B6207627C8_OFFSET UNITYSDK_OFFSET(0x1D540F90)
#define RPG_GAMECORE_TRAVELSHIPRESETSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D540FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipResetState_TypeDefinitionIndex = 20738;

	class TravelShipResetState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ShowToast; // 0x18
		::System::Boolean StopMove; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPRESETSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C7A767B6207627C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipResetState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipResetState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPRESETSTATE_METHOD_3_C7A767B6207627C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A6F4C6FAAC2A2AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipResetState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipResetState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPRESETSTATE_METHOD_3_1A6F4C6FAAC2A2AD_OFFSET))(a1, a2);
		}
	};
}
