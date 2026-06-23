#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigUIGachaConfigContainer; }
namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace MoleMole::Config { class ConfigUIPortraitItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CONFIGUIGACHAPORTRAIT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA64DD0)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CONFIGUIGACHAPORTRAIT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1AA64DE0)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CONFIGUIGACHAPORTRAIT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1AA64FC0)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CONFIGUIGACHAPORTRAIT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA65160)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CONFIGUIGACHAPORTRAIT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA65120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIGachaPortrait_ConfigUIGachaPortrait_UnityGeneratedFormatter_TypeDefinitionIndex = 81666;

	class ConfigUIGachaPortrait_ConfigUIGachaPortrait_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigUIGachaPortrait*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIPortraitItem*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIPortraitItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIGachaPortrait_ConfigUIGachaPortrait_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42C90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIGachaConfigContainer*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIGachaConfigContainer*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIGachaPortrait_ConfigUIGachaPortrait_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42C98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CONFIGUIGACHAPORTRAIT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CONFIGUIGACHAPORTRAIT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CONFIGUIGACHAPORTRAIT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUIGachaPortrait*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUIGachaPortrait*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CONFIGUIGACHAPORTRAIT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigUIGachaPortrait*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIGachaPortrait*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_CONFIGUIGACHAPORTRAIT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
