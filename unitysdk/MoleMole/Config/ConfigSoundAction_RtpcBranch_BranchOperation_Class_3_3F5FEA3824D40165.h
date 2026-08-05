#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_RtpcBranch_BranchOperation; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION_CLASS_3_3F5FEA3824D40165_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19AC8890)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION_CLASS_3_3F5FEA3824D40165_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19AC88A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION_CLASS_3_3F5FEA3824D40165_WRITE_OFFSET UNITYSDK_OFFSET(0x19AC8AF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION_CLASS_3_3F5FEA3824D40165__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AC8CB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION_CLASS_3_3F5FEA3824D40165__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC8C70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RtpcBranch_BranchOperation_Class_3_3F5FEA3824D40165_TypeDefinitionIndex = 59703;

	class ConfigSoundAction_RtpcBranch_BranchOperation_Class_3_3F5FEA3824D40165 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_RtpcBranch_BranchOperation*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_BranchOperation_Class_3_3F5FEA3824D40165_TypeDefinitionIndex)->GetStaticField(0x51810);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_BranchOperation_Class_3_3F5FEA3824D40165_TypeDefinitionIndex)->GetStaticField(0x51818);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_BranchOperation_Class_3_3F5FEA3824D40165_TypeDefinitionIndex)->GetStaticField(0x51820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION_CLASS_3_3F5FEA3824D40165__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION_CLASS_3_3F5FEA3824D40165__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION_CLASS_3_3F5FEA3824D40165_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_RtpcBranch_BranchOperation*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RtpcBranch_BranchOperation*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION_CLASS_3_3F5FEA3824D40165_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_RtpcBranch_BranchOperation*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RtpcBranch_BranchOperation*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_BRANCHOPERATION_CLASS_3_3F5FEA3824D40165_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
