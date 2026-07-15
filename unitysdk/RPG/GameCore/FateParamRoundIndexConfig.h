#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_6_9F1FD203E85FE4AD_OFFSET UNITYSDK_OFFSET(0x1BA751C0)
#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_6_DDB3D951A9C19F29_OFFSET UNITYSDK_OFFSET(0x1BA75170)
#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA751B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamRoundIndexConfig_TypeDefinitionIndex = 15974;

	class FateParamRoundIndexConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DDB3D951A9C19F29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamRoundIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamRoundIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_6_DDB3D951A9C19F29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9F1FD203E85FE4AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamRoundIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamRoundIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_6_9F1FD203E85FE4AD_OFFSET))(a1, a2);
		}
	};
}
