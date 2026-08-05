#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_Branch; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CLASS_3_FDBFA515B3A816B9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B914F80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CLASS_3_FDBFA515B3A816B9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B914F90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CLASS_3_FDBFA515B3A816B9_WRITE_OFFSET UNITYSDK_OFFSET(0x1B9152A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CLASS_3_FDBFA515B3A816B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9154B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CLASS_3_FDBFA515B3A816B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1B915470)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Branch_Class_3_FDBFA515B3A816B9_TypeDefinitionIndex = 43873;

	class ConfigSoundAction_Branch_Class_3_FDBFA515B3A816B9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_Branch*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Branch_Class_3_FDBFA515B3A816B9_TypeDefinitionIndex)->GetStaticField(0x39CC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Branch_Class_3_FDBFA515B3A816B9_TypeDefinitionIndex)->GetStaticField(0x39CC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Branch_Class_3_FDBFA515B3A816B9_TypeDefinitionIndex)->GetStaticField(0x39CD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CLASS_3_FDBFA515B3A816B9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CLASS_3_FDBFA515B3A816B9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CLASS_3_FDBFA515B3A816B9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Branch*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Branch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CLASS_3_FDBFA515B3A816B9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Branch*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Branch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CLASS_3_FDBFA515B3A816B9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
