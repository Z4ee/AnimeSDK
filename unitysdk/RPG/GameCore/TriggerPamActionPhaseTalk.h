#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_METHOD_3_9375824386727BFA_OFFSET UNITYSDK_OFFSET(0x1D291D80)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_METHOD_3_EA283F0610CBCB57_OFFSET UNITYSDK_OFFSET(0x1D291CB0)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D291D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamActionPhaseTalk_TypeDefinitionIndex = 19795;

	class TriggerPamActionPhaseTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA283F0610CBCB57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_METHOD_3_EA283F0610CBCB57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9375824386727BFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_METHOD_3_9375824386727BFA_OFFSET))(a1, a2);
		}
	};
}
