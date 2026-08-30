#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSHAREFOGGROUPCONFIG_METHOD_2_CB7FDB2FF1F6593C_OFFSET UNITYSDK_OFFSET(0x1D1020C0)
#define RPG_GAMECORE_FIVEDIMSHAREFOGGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D102100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimShareFogGroupConfig_TypeDefinitionIndex = 18313;

	class FiveDimShareFogGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHAREFOGGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CB7FDB2FF1F6593C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimShareFogGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimShareFogGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHAREFOGGROUPCONFIG_METHOD_2_CB7FDB2FF1F6593C_OFFSET))(a1, a2);
		}
	};
}
