#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_6_9F1FD203E85FE4AD_OFFSET UNITYSDK_OFFSET(0x188D95D0)
#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_6_DCFBA9F8F18722D9_OFFSET UNITYSDK_OFFSET(0x188D9410)
#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D9510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamRoundIndexConfig_TypeDefinitionIndex = 15745;

	class FateParamRoundIndexConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DCFBA9F8F18722D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamRoundIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamRoundIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_6_DCFBA9F8F18722D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9F1FD203E85FE4AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamRoundIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamRoundIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_METHOD_6_9F1FD203E85FE4AD_OFFSET))(a1, a2);
		}
	};
}
