#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class IWaterFlowGameplayConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWWATERFLOWQTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A34BA40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowWaterFlowQTE_TypeDefinitionIndex = 72874;

	class ConfigHollowWaterFlowQTE : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::IWaterFlowGameplayConfig*>* GameplayConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWWATERFLOWQTE__CTOR_OFFSET))(this);
		}
	};
}
