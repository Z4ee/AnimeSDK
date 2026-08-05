#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B913BD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRealtimeQTE_TypeDefinitionIndex = 60212;

	class ConfigRealtimeQTE : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTETaskEntryBase*>* RealtimeQTETaskEntryDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTEStyleEntryBase*>* RealtimeQTEStyleEntryDict; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE__CTOR_OFFSET))(this);
		}
	};
}
