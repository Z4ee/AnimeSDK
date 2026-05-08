#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_147;
namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x123153B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x12315370)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_ISMATCH_OFFSET UNITYSDK_OFFSET(0x123156C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12315790)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x12315750)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12315870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SceneTag_TypeDefinitionIndex = 70835;

	class ConfigSoundAction_SceneTag : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_operateTypes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SceneTag_TypeDefinitionIndex)->GetStaticField(0x3C420);
		}
		::System::String* tag; // 0x20
		::System::Int32 operateType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG__CCTOR_OFFSET))();
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_147* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
