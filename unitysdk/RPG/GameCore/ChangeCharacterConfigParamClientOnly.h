#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChangeCharacterConfigParam.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_427707F2D7B6B1A6_OFFSET UNITYSDK_OFFSET(0x1CF8B580)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_E47A9EF35EBF2EFA_OFFSET UNITYSDK_OFFSET(0x1CF8AEC0)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF8AE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterConfigParamClientOnly_TypeDefinitionIndex = 23408;

	class ChangeCharacterConfigParamClientOnly : public ::RPG::GameCore::ChangeCharacterConfigParam
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_427707F2D7B6B1A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_427707F2D7B6B1A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E47A9EF35EBF2EFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_E47A9EF35EBF2EFA_OFFSET))(a1, a2);
		}
	};
}
