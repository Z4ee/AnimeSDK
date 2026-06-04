#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_METHOD_3_9375824386727BFA_OFFSET UNITYSDK_OFFSET(0x19E19220)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_METHOD_3_E8E58EAB46C095CE_OFFSET UNITYSDK_OFFSET(0x19E19110)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19E191F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamActionPhaseTalk_TypeDefinitionIndex = 18904;

	class TriggerPamActionPhaseTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8E58EAB46C095CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_METHOD_3_E8E58EAB46C095CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9375824386727BFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_METHOD_3_9375824386727BFA_OFFSET))(a1, a2);
		}
	};
}
