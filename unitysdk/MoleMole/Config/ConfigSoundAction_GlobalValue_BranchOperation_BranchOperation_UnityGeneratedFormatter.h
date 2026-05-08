#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_GlobalValue_BranchOperation; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_BRANCHOPERATION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x159F4FE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_BRANCHOPERATION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x159F4FF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_BRANCHOPERATION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x159F5290)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_BRANCHOPERATION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x159F5480)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_BRANCHOPERATION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x159F5440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_GlobalValue_BranchOperation_BranchOperation_UnityGeneratedFormatter_TypeDefinitionIndex = 57582;

	class ConfigSoundAction_GlobalValue_BranchOperation_BranchOperation_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_BranchOperation_BranchOperation_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49350);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_BranchOperation_BranchOperation_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49358);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_BRANCHOPERATION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_BRANCHOPERATION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_BRANCHOPERATION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_BRANCHOPERATION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_BRANCHOPERATION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
