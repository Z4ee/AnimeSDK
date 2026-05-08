#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundAction_Random_RandomType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_Random; }
namespace MoleMole::Config { class SoundActionWithWeight; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CONFIGSOUNDACTION_RANDOM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1242CC30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CONFIGSOUNDACTION_RANDOM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1242CC40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CONFIGSOUNDACTION_RANDOM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1242D040)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CONFIGSOUNDACTION_RANDOM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1242D2E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CONFIGSOUNDACTION_RANDOM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1242D2A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Random_ConfigSoundAction_Random_UnityGeneratedFormatter_TypeDefinitionIndex = 78570;

	class ConfigSoundAction_Random_ConfigSoundAction_Random_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_Random*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundAction_Random_RandomType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundAction_Random_RandomType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Random_ConfigSoundAction_Random_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40270);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Random_ConfigSoundAction_Random_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40278);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SoundActionWithWeight*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SoundActionWithWeight*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Random_ConfigSoundAction_Random_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40280);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Random_ConfigSoundAction_Random_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40288);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Random_ConfigSoundAction_Random_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40290);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CONFIGSOUNDACTION_RANDOM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CONFIGSOUNDACTION_RANDOM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CONFIGSOUNDACTION_RANDOM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Random*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Random*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CONFIGSOUNDACTION_RANDOM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Random*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Random*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CONFIGSOUNDACTION_RANDOM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
