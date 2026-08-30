#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PAUSETOTURNEND_METHOD_3_2A979BB884BADA1F_OFFSET UNITYSDK_OFFSET(0x1D4194A0)
#define RPG_GAMECORE_PAUSETOTURNEND_METHOD_3_60DA35A2615B4584_OFFSET UNITYSDK_OFFSET(0x1D419460)
#define RPG_GAMECORE_PAUSETOTURNEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D419490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseToTurnEnd_TypeDefinitionIndex = 23151;

	class PauseToTurnEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Pause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOTURNEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_60DA35A2615B4584(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseToTurnEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseToTurnEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOTURNEND_METHOD_3_60DA35A2615B4584_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A979BB884BADA1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseToTurnEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseToTurnEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOTURNEND_METHOD_3_2A979BB884BADA1F_OFFSET))(a1, a2);
		}
	};
}
