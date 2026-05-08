#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1753B450)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1753B440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_GlobalValue_BranchOperation_TypeDefinitionIndex = 57581;

	class ConfigSoundAction_GlobalValue_BranchOperation : public ::System::Object
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_ops()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_BranchOperation_TypeDefinitionIndex)->GetStaticField(0x3A300);
		}
		::System::Int32 op; // 0x10
		::System::Int32 value; // 0x14
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION__CCTOR_OFFSET))();
		}
	};
}
