#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateTextDynamicParamConfig; }

#define RPG_GAMECORE_FATEMASTERCONFIG_METHOD_2_C8E9746DD6E6761B_OFFSET UNITYSDK_OFFSET(0x188D2CC0)
#define RPG_GAMECORE_FATEMASTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D2D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateMasterConfig_TypeDefinitionIndex = 15739;

	class FateMasterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateTextDynamicParamConfig* TextDynamicParamConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMASTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C8E9746DD6E6761B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateMasterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateMasterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMASTERCONFIG_METHOD_2_C8E9746DD6E6761B_OFFSET))(a1, a2);
		}
	};
}
