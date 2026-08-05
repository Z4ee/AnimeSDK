#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_When; }
namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CLASS_3_8C39B43522B6D9BF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B916E40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CLASS_3_8C39B43522B6D9BF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B916E50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CLASS_3_8C39B43522B6D9BF_WRITE_OFFSET UNITYSDK_OFFSET(0x1B9170A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CLASS_3_8C39B43522B6D9BF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B917260)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CLASS_3_8C39B43522B6D9BF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B917220)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_When_Class_3_8C39B43522B6D9BF_TypeDefinitionIndex = 90172;

	class ConfigSoundAction_When_Class_3_8C39B43522B6D9BF : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_When*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_When_Class_3_8C39B43522B6D9BF_TypeDefinitionIndex)->GetStaticField(0x39CF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ISoundActionTriggerCondition*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ISoundActionTriggerCondition*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_When_Class_3_8C39B43522B6D9BF_TypeDefinitionIndex)->GetStaticField(0x39CF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_When_Class_3_8C39B43522B6D9BF_TypeDefinitionIndex)->GetStaticField(0x39D00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CLASS_3_8C39B43522B6D9BF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CLASS_3_8C39B43522B6D9BF__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CLASS_3_8C39B43522B6D9BF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_When*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_When*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CLASS_3_8C39B43522B6D9BF_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_When*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_When*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_CLASS_3_8C39B43522B6D9BF_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
