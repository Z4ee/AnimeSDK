#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB0B680)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0B670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RtpcBranch_BranchOperation_TypeDefinitionIndex = 48091;

	class ConfigSoundAction_RtpcBranch_BranchOperation : public ::System::Object
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_ops()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_BranchOperation_TypeDefinitionIndex)->GetStaticField(0x44670);
		}
		::System::Int32 op; // 0x10
		::System::Single value; // 0x14
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION__CCTOR_OFFSET))();
		}
	};
}
