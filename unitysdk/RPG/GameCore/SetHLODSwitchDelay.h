#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETHLODSWITCHDELAY_METHOD_3_6CB80C3FE3CD8584_OFFSET UNITYSDK_OFFSET(0x18E33EE0)
#define RPG_GAMECORE_SETHLODSWITCHDELAY_METHOD_3_8FB91A4D73AF0F1D_OFFSET UNITYSDK_OFFSET(0x18E33F60)
#define RPG_GAMECORE_SETHLODSWITCHDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18E33F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetHLODSwitchDelay_TypeDefinitionIndex = 19474;

	class SetHLODSwitchDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean NoDelay; // 0x18
		::System::Boolean DefaultDelay; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHLODSWITCHDELAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6CB80C3FE3CD8584(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetHLODSwitchDelay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetHLODSwitchDelay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHLODSWITCHDELAY_METHOD_3_6CB80C3FE3CD8584_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FB91A4D73AF0F1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetHLODSwitchDelay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetHLODSwitchDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHLODSWITCHDELAY_METHOD_3_8FB91A4D73AF0F1D_OFFSET))(a1, a2);
		}
	};
}
