#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamagePerformFinish.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_METHOD_4_18A33010630CCE5B_OFFSET UNITYSDK_OFFSET(0x17148360)
#define RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_METHOD_4_406B041D4C16506A_OFFSET UNITYSDK_OFFSET(0x171481C0)
#define RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17148190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamagePerformFinishOnScepter_TypeDefinitionIndex = 21325;

	class DamagePerformFinishOnScepter : public ::RPG::GameCore::DamagePerformFinish
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_18A33010630CCE5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamagePerformFinishOnScepter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamagePerformFinishOnScepter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_METHOD_4_18A33010630CCE5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_406B041D4C16506A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamagePerformFinishOnScepter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamagePerformFinishOnScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_METHOD_4_406B041D4C16506A_OFFSET))(a1, a2);
		}
	};
}
