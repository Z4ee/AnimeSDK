#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamagePerformFinish.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_METHOD_4_406B041D4C16506A_OFFSET UNITYSDK_OFFSET(0x1D014BB0)
#define RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_METHOD_4_A23F61D188A40423_OFFSET UNITYSDK_OFFSET(0x1D014D50)
#define RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D014BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamagePerformFinishOnScepter_TypeDefinitionIndex = 22843;

	class DamagePerformFinishOnScepter : public ::RPG::GameCore::DamagePerformFinish
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A23F61D188A40423(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamagePerformFinishOnScepter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamagePerformFinishOnScepter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_METHOD_4_A23F61D188A40423_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_406B041D4C16506A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamagePerformFinishOnScepter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamagePerformFinishOnScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_METHOD_4_406B041D4C16506A_OFFSET))(a1, a2);
		}
	};
}
