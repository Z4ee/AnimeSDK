#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleCharacterIDMapping; }

#define RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG_METHOD_2_0A1B688B71BC30ED_OFFSET UNITYSDK_OFFSET(0x18932400)
#define RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189324D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleCharacterIDMappingConfig_TypeDefinitionIndex = 15436;

	class FreeStyleCharacterIDMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleCharacterIDMapping*>* Map; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0A1B688B71BC30ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleCharacterIDMappingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleCharacterIDMappingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG_METHOD_2_0A1B688B71BC30ED_OFFSET))(a1, a2);
		}
	};
}
