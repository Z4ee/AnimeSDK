#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUISound_StateTransition; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUISOUND_STATETRIGGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABA680)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUISound_StateTriggerConfig_TypeDefinitionIndex = 75888;

	class ConfigUISound_StateTriggerConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigUISound_StateTransition*>* transitions; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* fromAnyToThis; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* fromThisToAny; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_STATETRIGGERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
