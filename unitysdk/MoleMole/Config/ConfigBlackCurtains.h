#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigBlackCurtain; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGBLACKCURTAINS__CTOR_OFFSET UNITYSDK_OFFSET(0x1743E020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBlackCurtains_TypeDefinitionIndex = 76212;

	class ConfigBlackCurtains : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigBlackCurtain*>* blackCurtains; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKCURTAINS__CTOR_OFFSET))(this);
		}
	};
}
