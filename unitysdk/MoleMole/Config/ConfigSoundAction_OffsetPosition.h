#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF98AF40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0xF98AE80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xF98AEC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_ISMATCH_OFFSET UNITYSDK_OFFSET(0xF98B940)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_WALK_OFFSET UNITYSDK_OFFSET(0xF98B9E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xF98BAF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xF98BB30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_WALK_OFFSET UNITYSDK_OFFSET(0xF98BB40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_OffsetPosition_TypeDefinitionIndex = 54858;

	class ConfigSoundAction_OffsetPosition : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* actionOnComplete; // 0x20
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x28
		::DG::Tweening::Ease moveEase; // 0x30
		::UnityEngine::Vector3 offset; // 0x34
		::System::Boolean createNewEmitter; // 0x40
		::System::Single moveDuration; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
