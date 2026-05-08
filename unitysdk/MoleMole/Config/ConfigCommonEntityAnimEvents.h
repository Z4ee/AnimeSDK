#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1752E720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCommonEntityAnimEvents_TypeDefinitionIndex = 46548;

	class ConfigCommonEntityAnimEvents : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>* AnimEvents; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS__CTOR_OFFSET))(this);
		}
	};
}
