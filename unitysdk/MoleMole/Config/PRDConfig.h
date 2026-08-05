#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_PRDCONFIG_CALACPRD_OFFSET UNITYSDK_OFFSET(0x1B566390)
#define MOLEMOLE_CONFIG_PRDCONFIG_CFROMP_OFFSET UNITYSDK_OFFSET(0x1B5665B0)
#define MOLEMOLE_CONFIG_PRDCONFIG_PFROMC_OFFSET UNITYSDK_OFFSET(0x1B5668B0)
#define MOLEMOLE_CONFIG_PRDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B566A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PRDConfig_TypeDefinitionIndex = 67606;

	class PRDConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Double>* configDic; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PRDCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void CalacPRD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PRDCONFIG_CALACPRD_OFFSET))(this);
		}

		::System::Double PFromC(::System::Double c)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PRDCONFIG_PFROMC_OFFSET))(this, c);
		}

		::System::Double CFromP(::System::Double p)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PRDCONFIG_CFROMP_OFFSET))(this, p);
		}
	};
}
