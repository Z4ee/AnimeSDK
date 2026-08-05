#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class HighLightAirCombatCameraConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBATCAMERA_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1B4CC400)
#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBATCAMERA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1B4CCCB0)
#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBATCAMERA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1B4CC600)
#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBATCAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4CCEA0)
#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBATCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CCDC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHighLightAirCombatCamera_TypeDefinitionIndex = 82354;

	class ConfigHighLightAirCombatCamera : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HighLightAirCombatCameraConfig*>** StaticGet__dicRuntimeConfigs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HighLightAirCombatCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHighLightAirCombatCamera_TypeDefinitionIndex)->GetStaticField(0x4D400);
		}
		// static const ::System::String* DEFAULT_KEY; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HighLightAirCombatCameraConfig*>* DicConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBATCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBATCAMERA__CCTOR_OFFSET))();
		}

		static ::MoleMole::Config::HighLightAirCombatCameraConfig* GetConfig(::System::String* key)
		{
			return ((::MoleMole::Config::HighLightAirCombatCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBATCAMERA_GETCONFIG_OFFSET))(key);
		}

		static ::System::Void ReloadFromFile(::System::Boolean isAsync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBATCAMERA_RELOADFROMFILE_OFFSET))(isAsync, complete);
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBATCAMERA_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}
	};
}
