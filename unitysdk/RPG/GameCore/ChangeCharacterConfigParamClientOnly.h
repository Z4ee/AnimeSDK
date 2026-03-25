#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChangeCharacterConfigParam.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_63FDA03847DD5B14_OFFSET UNITYSDK_OFFSET(0x170614A0)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_73A51CC14A070A8D_OFFSET UNITYSDK_OFFSET(0x17060FF0)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x17060F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterConfigParamClientOnly_TypeDefinitionIndex = 21930;

	class ChangeCharacterConfigParamClientOnly : public ::RPG::GameCore::ChangeCharacterConfigParam
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_63FDA03847DD5B14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_63FDA03847DD5B14_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_73A51CC14A070A8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_73A51CC14A070A8D_OFFSET))(a1, a2);
		}
	};
}
