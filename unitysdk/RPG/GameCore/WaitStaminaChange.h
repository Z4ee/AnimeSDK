#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSTAMINACHANGE_METHOD_3_702C6D87D788BEC4_OFFSET UNITYSDK_OFFSET(0x17905400)
#define RPG_GAMECORE_WAITSTAMINACHANGE_METHOD_3_8DCB64DC79BA7B5D_OFFSET UNITYSDK_OFFSET(0x17905480)
#define RPG_GAMECORE_WAITSTAMINACHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17905450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitStaminaChange_TypeDefinitionIndex = 18791;

	class WaitStaminaChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsDecrease; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTAMINACHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_702C6D87D788BEC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitStaminaChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitStaminaChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTAMINACHANGE_METHOD_3_702C6D87D788BEC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8DCB64DC79BA7B5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitStaminaChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitStaminaChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTAMINACHANGE_METHOD_3_8DCB64DC79BA7B5D_OFFSET))(a1, a2);
		}
	};
}
