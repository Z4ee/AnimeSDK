#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class SoundActionWithWeight; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_SOUNDACTIONWITHWEIGHT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192AE780)
#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_SOUNDACTIONWITHWEIGHT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192AE790)
#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_SOUNDACTIONWITHWEIGHT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x192AE970)
#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_SOUNDACTIONWITHWEIGHT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x192AEB10)
#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_SOUNDACTIONWITHWEIGHT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x192AEAD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SoundActionWithWeight_SoundActionWithWeight_UnityGeneratedFormatter_TypeDefinitionIndex = 79459;

	class SoundActionWithWeight_SoundActionWithWeight_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::SoundActionWithWeight*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(SoundActionWithWeight_SoundActionWithWeight_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40DD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(SoundActionWithWeight_SoundActionWithWeight_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40DD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_SOUNDACTIONWITHWEIGHT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_SOUNDACTIONWITHWEIGHT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_SOUNDACTIONWITHWEIGHT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SoundActionWithWeight*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SoundActionWithWeight*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_SOUNDACTIONWITHWEIGHT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::SoundActionWithWeight*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SoundActionWithWeight*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_SOUNDACTIONWITHWEIGHT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
