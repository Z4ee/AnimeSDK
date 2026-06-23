#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAudioFetchAnimatorParam_AnimatorParamType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAudioFetchAnimatorParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CONFIGAUDIOFETCHANIMATORPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x106C8D60)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CONFIGAUDIOFETCHANIMATORPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x106C8D70)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CONFIGAUDIOFETCHANIMATORPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x106C8F50)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CONFIGAUDIOFETCHANIMATORPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x106C90F0)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CONFIGAUDIOFETCHANIMATORPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x106C90B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAudioFetchAnimatorParam_ConfigAudioFetchAnimatorParam_UnityGeneratedFormatter_TypeDefinitionIndex = 72151;

	class ConfigAudioFetchAnimatorParam_ConfigAudioFetchAnimatorParam_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigAudioFetchAnimatorParam*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAudioFetchAnimatorParam_ConfigAudioFetchAnimatorParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B10);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAudioFetchAnimatorParam_AnimatorParamType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAudioFetchAnimatorParam_AnimatorParamType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAudioFetchAnimatorParam_ConfigAudioFetchAnimatorParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39B18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CONFIGAUDIOFETCHANIMATORPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CONFIGAUDIOFETCHANIMATORPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CONFIGAUDIOFETCHANIMATORPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAudioFetchAnimatorParam*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAudioFetchAnimatorParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CONFIGAUDIOFETCHANIMATORPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigAudioFetchAnimatorParam*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAudioFetchAnimatorParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CONFIGAUDIOFETCHANIMATORPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
