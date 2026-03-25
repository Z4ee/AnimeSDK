#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AREATITANBLESSWEIGHTMODIFYCONFIG_METHOD_2_F6B119FA1B433918_OFFSET UNITYSDK_OFFSET(0x16F87060)
#define RPG_GAMECORE_AREATITANBLESSWEIGHTMODIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F870A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AreaTitanBlessWeightModifyConfig_TypeDefinitionIndex = 16555;

	class AreaTitanBlessWeightModifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREATITANBLESSWEIGHTMODIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F6B119FA1B433918(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AreaTitanBlessWeightModifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AreaTitanBlessWeightModifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREATITANBLESSWEIGHTMODIFYCONFIG_METHOD_2_F6B119FA1B433918_OFFSET))(a1, a2);
		}
	};
}
