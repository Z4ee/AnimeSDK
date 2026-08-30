#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_METHOD_5_17D4C3672FD5ECB8_OFFSET UNITYSDK_OFFSET(0x1D534470)
#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_METHOD_5_BAECD8087D163F34_OFFSET UNITYSDK_OFFSET(0x1D5344C0)
#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5344B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondGridIdxBetweenConfig_TypeDefinitionIndex = 17877;

	class TrainPartyCondGridIdxBetweenConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_17D4C3672FD5ECB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_METHOD_5_17D4C3672FD5ECB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BAECD8087D163F34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_METHOD_5_BAECD8087D163F34_OFFSET))(a1, a2);
		}
	};
}
