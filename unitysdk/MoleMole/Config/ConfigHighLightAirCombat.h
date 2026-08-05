#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class HighLightAirCombatConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x114713C0)
#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x11471C70)
#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x114715C0)
#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x11471E60)
#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x11471D80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHighLightAirCombat_TypeDefinitionIndex = 66515;

	class ConfigHighLightAirCombat : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HighLightAirCombatConfig*>** StaticGet__dicRuntimeHighLightAirCombatConfigs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HighLightAirCombatConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHighLightAirCombat_TypeDefinitionIndex)->GetStaticField(0x46B10);
		}
		// static const ::System::String* DEFAULT_KEY; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HighLightAirCombatConfig*>* DicHighLightAirCombatConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT__CCTOR_OFFSET))();
		}

		static ::MoleMole::Config::HighLightAirCombatConfig* GetConfig(::System::String* key)
		{
			return ((::MoleMole::Config::HighLightAirCombatConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT_GETCONFIG_OFFSET))(key);
		}

		static ::System::Void ReloadFromFile(::System::Boolean isAsync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT_RELOADFROMFILE_OFFSET))(isAsync, complete);
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}
	};
}
