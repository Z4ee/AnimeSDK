#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AudioRTPCConvert_ConvertType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AudioRTPCConvert; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_AUDIORTPCCONVERT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x144D2970)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_AUDIORTPCCONVERT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x144D2980)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_AUDIORTPCCONVERT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x144D2CE0)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_AUDIORTPCCONVERT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x144D2F30)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_AUDIORTPCCONVERT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x144D2EF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioRTPCConvert_AudioRTPCConvert_UnityGeneratedFormatter_TypeDefinitionIndex = 75873;

	class AudioRTPCConvert_AudioRTPCConvert_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AudioRTPCConvert*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AudioRTPCConvert_AudioRTPCConvert_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C200);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AudioRTPCConvert_ConvertType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AudioRTPCConvert_ConvertType>**)Il2CppClass::FromTypeDefinitionIndex(AudioRTPCConvert_AudioRTPCConvert_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C208);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AudioRTPCConvert_AudioRTPCConvert_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C210);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_AUDIORTPCCONVERT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_AUDIORTPCCONVERT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_AUDIORTPCCONVERT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AudioRTPCConvert*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AudioRTPCConvert*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_AUDIORTPCCONVERT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AudioRTPCConvert*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AudioRTPCConvert*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_AUDIORTPCCONVERT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
