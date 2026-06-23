#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigViewObjectMisc; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_CONFIGVIEWOBJECTMISC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D63F80)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_CONFIGVIEWOBJECTMISC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D63F90)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_CONFIGVIEWOBJECTMISC_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D64170)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_CONFIGVIEWOBJECTMISC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D64310)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_CONFIGVIEWOBJECTMISC_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D642D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectMisc_ConfigViewObjectMisc_UnityGeneratedFormatter_TypeDefinitionIndex = 46261;

	class ConfigViewObjectMisc_ConfigViewObjectMisc_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigViewObjectMisc*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GuidePoint_AutoGenStrategy>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GuidePoint_AutoGenStrategy>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigViewObjectMisc_ConfigViewObjectMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E9D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigViewObjectMisc_ConfigViewObjectMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E9D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_CONFIGVIEWOBJECTMISC_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_CONFIGVIEWOBJECTMISC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_CONFIGVIEWOBJECTMISC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigViewObjectMisc*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectMisc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_CONFIGVIEWOBJECTMISC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigViewObjectMisc*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectMisc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_CONFIGVIEWOBJECTMISC_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
