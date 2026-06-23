#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AA618C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1AA61810)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1AA61850)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1AA61EC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA61F50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1AA61F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RemoveGlobalAttachPoint_TypeDefinitionIndex = 52513;

	class ConfigSoundAction_RemoveGlobalAttachPoint : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* attachPointName; // 0x20
		::System::Boolean removeAll; // 0x28
		::System::Boolean preferOld; // 0x29
		::System::Boolean onlyRemoveSelf; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEGLOBALATTACHPOINT___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
