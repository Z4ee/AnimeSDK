#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityCameraStretch; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_CONFIGENTITYCAMERASTRETCH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x144DD1B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_CONFIGENTITYCAMERASTRETCH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x144DD1C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_CONFIGENTITYCAMERASTRETCH_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x144DD3A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_CONFIGENTITYCAMERASTRETCH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x144DD540)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_CONFIGENTITYCAMERASTRETCH_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x144DD500)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCameraStretch_ConfigEntityCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex = 57881;

	class ConfigEntityCameraStretch_ConfigEntityCameraStretch_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityCameraStretch*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityCameraStretch_ConfigEntityCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C230);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityCameraStretch_ConfigEntityCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C238);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_CONFIGENTITYCAMERASTRETCH_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_CONFIGENTITYCAMERASTRETCH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_CONFIGENTITYCAMERASTRETCH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityCameraStretch*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityCameraStretch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_CONFIGENTITYCAMERASTRETCH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityCameraStretch*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCameraStretch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_CONFIGENTITYCAMERASTRETCH_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
