#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE_METHOD_3_6F4CA32FB4E2AF24_OFFSET UNITYSDK_OFFSET(0x19E18BA0)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE_METHOD_3_F046CBEF26475B70_OFFSET UNITYSDK_OFFSET(0x19E18CB0)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E18C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamActionPhaseDone_TypeDefinitionIndex = 18908;

	class TriggerPamActionPhaseDone : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F4CA32FB4E2AF24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseDone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseDone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE_METHOD_3_6F4CA32FB4E2AF24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F046CBEF26475B70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseDone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseDone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE_METHOD_3_F046CBEF26475B70_OFFSET))(a1, a2);
		}
	};
}
