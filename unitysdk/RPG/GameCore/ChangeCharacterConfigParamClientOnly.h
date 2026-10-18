#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChangeCharacterConfigParam.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_427707F2D7B6B1A6_OFFSET UNITYSDK_OFFSET(0x1D565710)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_FF522ABA7F10AD26_OFFSET UNITYSDK_OFFSET(0x1D564F40)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D564EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterConfigParamClientOnly_TypeDefinitionIndex = 23680;

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

		static ::System::Void Method_4_FF522ABA7F10AD26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAMCLIENTONLY_METHOD_4_FF522ABA7F10AD26_OFFSET))(a1, a2);
		}
	};
}
