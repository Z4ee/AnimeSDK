#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigDynamicAttachItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_CLASS_3_8F304293C086A0AC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177D9A80)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_CLASS_3_8F304293C086A0AC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177D9A90)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_CLASS_3_8F304293C086A0AC_WRITE_OFFSET UNITYSDK_OFFSET(0x177D9C20)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_CLASS_3_8F304293C086A0AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x177D9D80)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_CLASS_3_8F304293C086A0AC__CTOR_OFFSET UNITYSDK_OFFSET(0x177D9D40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAttachItem_Class_3_8F304293C086A0AC_TypeDefinitionIndex = 72622;

	class ConfigDynamicAttachItem_Class_3_8F304293C086A0AC : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigDynamicAttachItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicAttachItem_Class_3_8F304293C086A0AC_TypeDefinitionIndex)->GetStaticField(0x44B10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_CLASS_3_8F304293C086A0AC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_CLASS_3_8F304293C086A0AC__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_CLASS_3_8F304293C086A0AC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigDynamicAttachItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAttachItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_CLASS_3_8F304293C086A0AC_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigDynamicAttachItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAttachItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_CLASS_3_8F304293C086A0AC_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
