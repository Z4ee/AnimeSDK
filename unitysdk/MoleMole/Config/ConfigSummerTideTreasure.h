#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigSummerTideTreasure_SummerTideItemSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1170DD40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSummerTideTreasure_TypeDefinitionIndex = 45388;

	class ConfigSummerTideTreasure : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigSummerTideTreasure_SummerTideItemSetting*>* ItemSettings; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>* SimmerTideMonsterTags; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* BornInvincibleTimes; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE__CTOR_OFFSET))(this);
		}
	};
}
