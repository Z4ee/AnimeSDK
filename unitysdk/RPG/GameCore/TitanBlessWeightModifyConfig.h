#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TITANBLESSWEIGHTMODIFYCONFIG_METHOD_2_BB4A684A34FD86D9_OFFSET UNITYSDK_OFFSET(0x1D52AAA0)
#define RPG_GAMECORE_TITANBLESSWEIGHTMODIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52AAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TitanBlessWeightModifyConfig_TypeDefinitionIndex = 17802;

	class TitanBlessWeightModifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANBLESSWEIGHTMODIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BB4A684A34FD86D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TitanBlessWeightModifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TitanBlessWeightModifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANBLESSWEIGHTMODIFYCONFIG_METHOD_2_BB4A684A34FD86D9_OFFSET))(a1, a2);
		}
	};
}
