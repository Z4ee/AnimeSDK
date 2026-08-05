#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicAttachmentAnimSync.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CLASS_3_6E1F63F6702F3BDA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1436D4A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CLASS_3_6E1F63F6702F3BDA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1436D4B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CLASS_3_6E1F63F6702F3BDA_WRITE_OFFSET UNITYSDK_OFFSET(0x1436D780)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CLASS_3_6E1F63F6702F3BDA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1436D980)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CLASS_3_6E1F63F6702F3BDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1436D920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAttachmentAnimSync_Class_3_6E1F63F6702F3BDA_TypeDefinitionIndex = 80136;

	class ConfigDynamicAttachmentAnimSync_Class_3_6E1F63F6702F3BDA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigDynamicAttachmentAnimSync>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicAttachmentAnimSync_Class_3_6E1F63F6702F3BDA_TypeDefinitionIndex)->GetStaticField(0x36490);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicAttachmentAnimSync_Class_3_6E1F63F6702F3BDA_TypeDefinitionIndex)->GetStaticField(0x36498);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CLASS_3_6E1F63F6702F3BDA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CLASS_3_6E1F63F6702F3BDA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CLASS_3_6E1F63F6702F3BDA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigDynamicAttachmentAnimSync& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAttachmentAnimSync&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CLASS_3_6E1F63F6702F3BDA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigDynamicAttachmentAnimSync& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAttachmentAnimSync&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_CLASS_3_6E1F63F6702F3BDA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
