#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVSPECIALVISIONPROTECT_METHOD_3_D113C68BCFF16166_OFFSET UNITYSDK_OFFSET(0x1CBA4240)
#define RPG_GAMECORE_ADVSPECIALVISIONPROTECT_METHOD_3_F6615DD0B0A736A5_OFFSET UNITYSDK_OFFSET(0x1CBA4280)
#define RPG_GAMECORE_ADVSPECIALVISIONPROTECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA4270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSpecialVisionProtect_TypeDefinitionIndex = 21635;

	class AdvSpecialVisionProtect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPECIALVISIONPROTECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D113C68BCFF16166(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSpecialVisionProtect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSpecialVisionProtect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPECIALVISIONPROTECT_METHOD_3_D113C68BCFF16166_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6615DD0B0A736A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSpecialVisionProtect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSpecialVisionProtect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPECIALVISIONPROTECT_METHOD_3_F6615DD0B0A736A5_OFFSET))(a1, a2);
		}
	};
}
