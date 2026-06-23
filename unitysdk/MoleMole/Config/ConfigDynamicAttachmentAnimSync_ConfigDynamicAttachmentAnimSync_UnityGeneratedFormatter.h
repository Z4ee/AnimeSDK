#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicAttachmentAnimSync.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CONFIGDYNAMICATTACHMENTANIMSYNC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10CFEC50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CONFIGDYNAMICATTACHMENTANIMSYNC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10CFEC60)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CONFIGDYNAMICATTACHMENTANIMSYNC_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10CFEF70)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CONFIGDYNAMICATTACHMENTANIMSYNC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CFF1A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CONFIGDYNAMICATTACHMENTANIMSYNC_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10CFF140)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAttachmentAnimSync_ConfigDynamicAttachmentAnimSync_UnityGeneratedFormatter_TypeDefinitionIndex = 71683;

	class ConfigDynamicAttachmentAnimSync_ConfigDynamicAttachmentAnimSync_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigDynamicAttachmentAnimSync>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicAttachmentAnimSync_ConfigDynamicAttachmentAnimSync_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x464E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicAttachmentAnimSync_ConfigDynamicAttachmentAnimSync_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x464E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CONFIGDYNAMICATTACHMENTANIMSYNC_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CONFIGDYNAMICATTACHMENTANIMSYNC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CONFIGDYNAMICATTACHMENTANIMSYNC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigDynamicAttachmentAnimSync& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAttachmentAnimSync&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CONFIGDYNAMICATTACHMENTANIMSYNC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigDynamicAttachmentAnimSync& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAttachmentAnimSync&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CONFIGDYNAMICATTACHMENTANIMSYNC_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
