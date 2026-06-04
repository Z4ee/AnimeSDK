#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChangeCharacterConfigParam.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_A29E4ABE7A613311_OFFSET UNITYSDK_OFFSET(0x196025A0)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_E47A9EF35EBF2EFA_OFFSET UNITYSDK_OFFSET(0x19602010)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x19601F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterConfigParamClientOnly_TypeDefinitionIndex = 22388;

	class ChangeCharacterConfigParamClientOnly : public ::RPG::GameCore::ChangeCharacterConfigParam
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A29E4ABE7A613311(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_A29E4ABE7A613311_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E47A9EF35EBF2EFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_E47A9EF35EBF2EFA_OFFSET))(a1, a2);
		}
	};
}
