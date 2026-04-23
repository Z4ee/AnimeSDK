#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHIMERADUELENTITIESSELECTORCONFIG_METHOD_2_202E88481F6266B8_OFFSET UNITYSDK_OFFSET(0x186E98C0)
#define RPG_GAMECORE_BASECHIMERADUELENTITIESSELECTORCONFIG_METHOD_2_ABB06EDDA336ABAB_OFFSET UNITYSDK_OFFSET(0x186EA3B0)
#define RPG_GAMECORE_BASECHIMERADUELENTITIESSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x186EA410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChimeraDuelEntitiesSelectorConfig_TypeDefinitionIndex = 15061;

	class BaseChimeraDuelEntitiesSelectorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELENTITIESSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_202E88481F6266B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELENTITIESSELECTORCONFIG_METHOD_2_202E88481F6266B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_ABB06EDDA336ABAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELENTITIESSELECTORCONFIG_METHOD_2_ABB06EDDA336ABAB_OFFSET))(a1, a2);
		}
	};
}
