#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAttachmentItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_CLASS_3_CA19B56C9B9A55BF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1485C5C0)
#define MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_CLASS_3_CA19B56C9B9A55BF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1485C5D0)
#define MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_CLASS_3_CA19B56C9B9A55BF_WRITE_OFFSET UNITYSDK_OFFSET(0x1485C760)
#define MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_CLASS_3_CA19B56C9B9A55BF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1485C8C0)
#define MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_CLASS_3_CA19B56C9B9A55BF__CTOR_OFFSET UNITYSDK_OFFSET(0x1485C880)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttachmentItem_Class_3_CA19B56C9B9A55BF_TypeDefinitionIndex = 63531;

	class ConfigAttachmentItem_Class_3_CA19B56C9B9A55BF : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigAttachmentItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAttachmentItem_Class_3_CA19B56C9B9A55BF_TypeDefinitionIndex)->GetStaticField(0x422C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_CLASS_3_CA19B56C9B9A55BF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_CLASS_3_CA19B56C9B9A55BF__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_CLASS_3_CA19B56C9B9A55BF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAttachmentItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAttachmentItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_CLASS_3_CA19B56C9B9A55BF_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigAttachmentItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttachmentItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_CLASS_3_CA19B56C9B9A55BF_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
