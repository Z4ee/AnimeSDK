#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE_METHOD_3_0B0AACFD3204AE8B_OFFSET UNITYSDK_OFFSET(0x190C9A90)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE_METHOD_3_39E21FE64A37CDFF_OFFSET UNITYSDK_OFFSET(0x190C9BA0)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x190C9B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamActionPhaseSettle_TypeDefinitionIndex = 18953;

	class TriggerPamActionPhaseSettle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B0AACFD3204AE8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseSettle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseSettle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE_METHOD_3_0B0AACFD3204AE8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_39E21FE64A37CDFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseSettle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseSettle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASESETTLE_METHOD_3_39E21FE64A37CDFF_OFFSET))(a1, a2);
		}
	};
}
