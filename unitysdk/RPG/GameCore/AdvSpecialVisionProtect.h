#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVSPECIALVISIONPROTECT_METHOD_3_8D67088AF2BB7A34_OFFSET UNITYSDK_OFFSET(0x18666960)
#define RPG_GAMECORE_ADVSPECIALVISIONPROTECT_METHOD_3_F6615DD0B0A736A5_OFFSET UNITYSDK_OFFSET(0x186669E0)
#define RPG_GAMECORE_ADVSPECIALVISIONPROTECT__CTOR_OFFSET UNITYSDK_OFFSET(0x186669B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSpecialVisionProtect_TypeDefinitionIndex = 20733;

	class AdvSpecialVisionProtect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPECIALVISIONPROTECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D67088AF2BB7A34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSpecialVisionProtect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSpecialVisionProtect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPECIALVISIONPROTECT_METHOD_3_8D67088AF2BB7A34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6615DD0B0A736A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSpecialVisionProtect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSpecialVisionProtect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPECIALVISIONPROTECT_METHOD_3_F6615DD0B0A736A5_OFFSET))(a1, a2);
		}
	};
}
