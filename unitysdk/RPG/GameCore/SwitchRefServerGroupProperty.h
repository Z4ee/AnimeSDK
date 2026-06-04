#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY_METHOD_3_01E5FCF6A8901713_OFFSET UNITYSDK_OFFSET(0x19CDF960)
#define RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY_METHOD_3_9114C06F0BCDE266_OFFSET UNITYSDK_OFFSET(0x19CE0060)
#define RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDF950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefServerGroupProperty_TypeDefinitionIndex = 16668;

	class SwitchRefServerGroupProperty : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9114C06F0BCDE266(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefServerGroupProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefServerGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY_METHOD_3_9114C06F0BCDE266_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_01E5FCF6A8901713(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefServerGroupProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefServerGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY_METHOD_3_01E5FCF6A8901713_OFFSET))(a1, a2);
		}
	};
}
