#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleCharacterIDMapping; }

#define RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG_METHOD_2_2D78784A1E21C7B0_OFFSET UNITYSDK_OFFSET(0x1D11A1A0)
#define RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11A260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleCharacterIDMappingConfig_TypeDefinitionIndex = 16139;

	class FreeStyleCharacterIDMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleCharacterIDMapping*>* Map; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2D78784A1E21C7B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleCharacterIDMappingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleCharacterIDMappingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG_METHOD_2_2D78784A1E21C7B0_OFFSET))(a1, a2);
		}
	};
}
