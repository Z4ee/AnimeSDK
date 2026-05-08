#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"
#include "unitysdk/MoleMole/Config/ConfigSoundAction_Random_RandomType.h"

class Class_0_16E4307DCC419505_147;
namespace MoleMole::Config { class SoundActionWithWeight; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17454BF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x17454A50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_ISMATCH_OFFSET UNITYSDK_OFFSET(0x174554D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_RESETDATA_OFFSET UNITYSDK_OFFSET(0x17454A90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_WALK_OFFSET UNITYSDK_OFFSET(0x17455750)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x17455A20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x17455AE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x17455AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Random_TypeDefinitionIndex = 78568;

	class ConfigSoundAction_Random : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::SoundActionWithWeight*>* randoms; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::SoundActionWithWeight*>* candidates; // 0x28
		::System::Int32 playTimeIndex; // 0x30
		::MoleMole::Config::ConfigSoundAction_Random_RandomType randomType; // 0x34
		::System::Int32 avoidRepeatingCount; // 0x38
		::System::Boolean avoidRepeating; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_RESETDATA_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
