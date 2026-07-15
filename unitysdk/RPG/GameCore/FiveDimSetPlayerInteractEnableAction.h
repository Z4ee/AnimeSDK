#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_METHOD_3_B97AE86A62C32C7F_OFFSET UNITYSDK_OFFSET(0x1BEB0F50)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_METHOD_3_DF4434DE9A3CF742_OFFSET UNITYSDK_OFFSET(0x1BEB0E70)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB0F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerInteractEnableAction_TypeDefinitionIndex = 18037;

	class FiveDimSetPlayerInteractEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF4434DE9A3CF742(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_METHOD_3_DF4434DE9A3CF742_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B97AE86A62C32C7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_METHOD_3_B97AE86A62C32C7F_OFFSET))(a1, a2);
		}
	};
}
