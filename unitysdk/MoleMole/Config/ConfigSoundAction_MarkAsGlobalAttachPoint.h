#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17D601E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x17D60190)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x17D601D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x17D60520)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D605B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x17D605F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_MarkAsGlobalAttachPoint_TypeDefinitionIndex = 87565;

	class ConfigSoundAction_MarkAsGlobalAttachPoint : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* attachPointName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
