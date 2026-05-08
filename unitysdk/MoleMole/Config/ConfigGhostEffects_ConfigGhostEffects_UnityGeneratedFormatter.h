#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigGhostEffect; }
namespace MoleMole::Config { class ConfigGhostEffects; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CONFIGGHOSTEFFECTS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF97D310)
#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CONFIGGHOSTEFFECTS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF97D320)
#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CONFIGGHOSTEFFECTS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xF97D500)
#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CONFIGGHOSTEFFECTS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF97D6A0)
#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CONFIGGHOSTEFFECTS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xF97D660)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGhostEffects_ConfigGhostEffects_UnityGeneratedFormatter_TypeDefinitionIndex = 76660;

	class ConfigGhostEffects_ConfigGhostEffects_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigGhostEffects*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::ConfigGhostMove*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::ConfigGhostMove*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGhostEffects_ConfigGhostEffects_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46790);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigGhostEffect*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigGhostEffect*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGhostEffects_ConfigGhostEffects_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46798);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CONFIGGHOSTEFFECTS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CONFIGGHOSTEFFECTS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CONFIGGHOSTEFFECTS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGhostEffects*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffects*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CONFIGGHOSTEFFECTS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigGhostEffects*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffects*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CONFIGGHOSTEFFECTS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
