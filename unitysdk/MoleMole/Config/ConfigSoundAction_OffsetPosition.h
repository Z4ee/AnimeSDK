#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x170B57C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x170B5700)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x170B5740)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x170B61C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_WALK_OFFSET UNITYSDK_OFFSET(0x170B6260)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x170B6370)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x170B63B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x170B63C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_OffsetPosition_TypeDefinitionIndex = 73656;

	class ConfigSoundAction_OffsetPosition : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* actionOnComplete; // 0x20
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x28
		::System::Boolean createNewEmitter; // 0x30
		::System::Single moveDuration; // 0x34
		::DG::Tweening::Ease moveEase; // 0x38
		::UnityEngine::Vector3 offset; // 0x3C

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

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_EXECUTE_OFFSET))(this, context);
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
